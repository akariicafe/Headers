@class NSMutableArray;

@interface AWDCoreRoutineLMPScoreBoard : PBCodable <NSCopying> {
    struct { unsigned char timestamp : 1; } _has;
}

@property (nonatomic) BOOL hasTimestamp;
@property (nonatomic) unsigned long long timestamp;
@property (retain, nonatomic) NSMutableArray *instances;
@property (retain, nonatomic) NSMutableArray *secondaryInstances;

+ (Class)instancesType;
+ (Class)secondaryInstancesType;

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
- (void)addSecondaryInstances:(id)a0;
- (id)instancesAtIndex:(unsigned long long)a0;
- (unsigned long long)secondaryInstancesCount;
- (void)clearSecondaryInstances;
- (id)secondaryInstancesAtIndex:(unsigned long long)a0;

@end
