@class NSString;

@interface ODCurareReportFillerModelEvaluation : PBCodable <NSCopying>

@property (retain, nonatomic) NSString *metricName;
@property (nonatomic) double metricValue;
@property (nonatomic) unsigned int numberOfSamples;
@property (nonatomic) unsigned int numberOfPositiveSamples;

- (BOOL)readFrom:(id)a0;
- (id)description;
- (void)mergeFrom:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (void)writeTo:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)copyTo:(id)a0;
- (unsigned long long)hash;
- (id)dictionaryRepresentation;

@end
