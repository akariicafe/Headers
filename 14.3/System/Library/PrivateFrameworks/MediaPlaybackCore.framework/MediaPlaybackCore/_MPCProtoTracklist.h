@class NSMutableArray, _MPCProtoTracklistIndexPath;

@interface _MPCProtoTracklist : PBCodable <NSCopying> {
    struct { unsigned char shuffleMode : 1; } _has;
}

@property (retain, nonatomic) NSMutableArray *accountInfos;
@property (retain, nonatomic) NSMutableArray *containers;
@property (readonly, nonatomic) BOOL hasStartingItemIndexPath;
@property (retain, nonatomic) _MPCProtoTracklistIndexPath *startingItemIndexPath;
@property (nonatomic) BOOL hasShuffleMode;
@property (nonatomic) int shuffleMode;

+ (Class)containerType;
+ (Class)accountInfoType;

- (unsigned long long)containersCount;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)mergeFrom:(id)a0;
- (BOOL)readFrom:(id)a0;
- (unsigned long long)hash;
- (void)writeTo:(id)a0;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (void)clearContainers;
- (void)addContainer:(id)a0;
- (void)addAccountInfo:(id)a0;
- (void)clearAccountInfos;
- (unsigned long long)accountInfosCount;
- (id)accountInfoAtIndex:(unsigned long long)a0;
- (id)containerAtIndex:(unsigned long long)a0;

@end
