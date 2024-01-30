@class TRISystemDimensions, TRISubject, NSMutableArray;

@interface TRIDenormalizedEvent : PBCodable <NSCopying>

@property (readonly, nonatomic) BOOL hasSubject;
@property (retain, nonatomic) TRISubject *subject;
@property (retain, nonatomic) NSMutableArray *treatments;
@property (readonly, nonatomic) BOOL hasSystemDimensions;
@property (retain, nonatomic) TRISystemDimensions *systemDimensions;
@property (retain, nonatomic) NSMutableArray *userDimensions;
@property (retain, nonatomic) NSMutableArray *metrics;

+ (Class)metricType;
+ (Class)treatmentType;
+ (Class)userDimensionType;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)mergeFrom:(id)a0;
- (void)addTreatment:(id)a0;
- (BOOL)readFrom:(id)a0;
- (unsigned long long)hash;
- (void)writeTo:(id)a0;
- (id)description;
- (void)copyTo:(id)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)treatmentsCount;
- (id)dictionaryRepresentation;
- (void)addMetric:(id)a0;
- (void)addUserDimension:(id)a0;
- (unsigned long long)metricsCount;
- (void)clearMetrics;
- (id)metricAtIndex:(unsigned long long)a0;
- (void)clearTreatments;
- (id)treatmentAtIndex:(unsigned long long)a0;
- (unsigned long long)userDimensionsCount;
- (void)clearUserDimensions;
- (id)userDimensionAtIndex:(unsigned long long)a0;

@end
