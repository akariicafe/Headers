@class NSMutableArray;

@interface AWDCoreRoutineMagicalMomentsRecommendedAppsHistogramSet : PBCodable <NSCopying> {
    struct { unsigned char timestamp : 1; unsigned char confidenceOfMostConfidentModel : 1; unsigned char durationSinceLastSuccessfulTraining : 1; unsigned char fallbackModelConfidence : 1; unsigned char modelType : 1; } _has;
}

@property (nonatomic) BOOL hasTimestamp;
@property (nonatomic) unsigned long long timestamp;
@property (retain, nonatomic) NSMutableArray *instances;
@property (nonatomic) BOOL hasModelType;
@property (nonatomic) int modelType;
@property (nonatomic) BOOL hasFallbackModelConfidence;
@property (nonatomic) int fallbackModelConfidence;
@property (nonatomic) BOOL hasConfidenceOfMostConfidentModel;
@property (nonatomic) int confidenceOfMostConfidentModel;
@property (nonatomic) BOOL hasDurationSinceLastSuccessfulTraining;
@property (nonatomic) int durationSinceLastSuccessfulTraining;

+ (Class)instanceType;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)mergeFrom:(id)a0;
- (void)dealloc;
- (BOOL)readFrom:(id)a0;
- (unsigned long long)hash;
- (void)writeTo:(id)a0;
- (id)description;
- (void)copyTo:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (id)instanceAtIndex:(unsigned long long)a0;
- (unsigned long long)instancesCount;
- (void)addInstance:(id)a0;
- (void)clearInstances;

@end
