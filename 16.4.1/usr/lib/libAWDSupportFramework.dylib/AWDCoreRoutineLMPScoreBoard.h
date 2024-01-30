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

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (void)dealloc;
- (void)mergeFrom:(id)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void)writeTo:(id)a0;
- (BOOL)readFrom:(id)a0;
- (id)description;
- (unsigned long long)instancesCount;
- (void)clearInstances;
- (void)addInstances:(id)a0;
- (void)addSecondaryInstances:(id)a0;
- (void)clearSecondaryInstances;
- (id)instancesAtIndex:(unsigned long long)a0;
- (id)secondaryInstancesAtIndex:(unsigned long long)a0;
- (unsigned long long)secondaryInstancesCount;

@end
