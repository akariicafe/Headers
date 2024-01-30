@class NSString;

@interface ATXPBAppModeEntityScoreMetrics : PBCodable <NSCopying>

@property (readonly, nonatomic) BOOL hasBundleId;
@property (retain, nonatomic) NSString *bundleId;
@property (readonly, nonatomic) BOOL hasActivityState;
@property (retain, nonatomic) NSString *activityState;
@property (readonly, nonatomic) BOOL hasModelVersion;
@property (retain, nonatomic) NSString *modelVersion;
@property (readonly, nonatomic) BOOL hasNumDaysSinceStartOfMetricsLogging;
@property (retain, nonatomic) NSString *numDaysSinceStartOfMetricsLogging;

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
