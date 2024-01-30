@class TRITrialSystemTelemetry, TRISubject, NSMutableArray, TRISystemDimensions;

@interface TRIDenormalizedEvent : PBCodable <NSCopying>

@property (readonly, nonatomic) BOOL hasSubject;
@property (retain, nonatomic) TRISubject *subject;
@property (retain, nonatomic) NSMutableArray *treatments;
@property (readonly, nonatomic) BOOL hasSystemDimensions;
@property (retain, nonatomic) TRISystemDimensions *systemDimensions;
@property (retain, nonatomic) NSMutableArray *userDimensions;
@property (retain, nonatomic) NSMutableArray *metrics;
@property (readonly, nonatomic) BOOL hasTrialSystemTelemetry;
@property (retain, nonatomic) TRITrialSystemTelemetry *trialSystemTelemetry;

+ (Class)metricType;
+ (Class)treatmentType;
+ (Class)userDimensionType;

- (void)clearUserDimensions;
- (void)clearMetrics;
- (BOOL)readFrom:(id)a0;
- (id)userDimensionAtIndex:(unsigned long long)a0;
- (unsigned long long)metricsCount;
- (id)description;
- (void)mergeFrom:(id)a0;
- (void)addUserDimension:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)metricAtIndex:(unsigned long long)a0;
- (void)clearTreatments;
- (unsigned long long)treatmentsCount;
- (unsigned long long)userDimensionsCount;
- (id)treatmentAtIndex:(unsigned long long)a0;
- (void)writeTo:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)copyTo:(id)a0;
- (void)addMetric:(id)a0;
- (unsigned long long)hash;
- (void)addTreatment:(id)a0;
- (id)dictionaryRepresentation;

@end
