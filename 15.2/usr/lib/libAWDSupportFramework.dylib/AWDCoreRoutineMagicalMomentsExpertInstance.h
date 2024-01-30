@class NSMutableArray;

@interface AWDCoreRoutineMagicalMomentsExpertInstance : PBCodable <NSCopying> {
    struct { unsigned char confidence : 1; unsigned char expertType : 1; unsigned char modelType : 1; unsigned char sampleCounts : 1; } _has;
}

@property (nonatomic) BOOL hasModelType;
@property (nonatomic) int modelType;
@property (nonatomic) BOOL hasExpertType;
@property (nonatomic) int expertType;
@property (nonatomic) BOOL hasConfidence;
@property (nonatomic) int confidence;
@property (nonatomic) BOOL hasSampleCounts;
@property (nonatomic) int sampleCounts;
@property (retain, nonatomic) NSMutableArray *instances;
@property (retain, nonatomic) NSMutableArray *addons;

+ (Class)instancesType;
+ (Class)addonsType;

- (BOOL)readFrom:(id)a0;
- (id)description;
- (void)mergeFrom:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void)writeTo:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)copyTo:(id)a0;
- (unsigned long long)hash;
- (void)dealloc;
- (id)dictionaryRepresentation;
- (unsigned long long)instancesCount;
- (void)addInstances:(id)a0;
- (void)clearInstances;
- (id)instancesAtIndex:(unsigned long long)a0;
- (void)addAddons:(id)a0;
- (unsigned long long)addonsCount;
- (void)clearAddons;
- (id)addonsAtIndex:(unsigned long long)a0;

@end
