@class NSMutableArray;

@interface NPKProtoPassSyncState : PBCodable <NSCopying>

@property (retain, nonatomic) NSMutableArray *passSyncStateItems;

+ (Class)passSyncStateItemsType;

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
- (void)addPassSyncStateItems:(id)a0;
- (unsigned long long)passSyncStateItemsCount;
- (void)clearPassSyncStateItems;
- (id)passSyncStateItemsAtIndex:(unsigned long long)a0;

@end
