@class NSString, NSData, SPProtoCacheSyncData;

@interface SPProtoCacheMessage : PBCodable <NSCopying>

@property (nonatomic) int messageType;
@property (nonatomic) int cacheType;
@property (readonly, nonatomic) BOOL hasAssetKey;
@property (retain, nonatomic) NSString *assetKey;
@property (readonly, nonatomic) BOOL hasGizmoCacheIdentifier;
@property (retain, nonatomic) NSString *gizmoCacheIdentifier;
@property (readonly, nonatomic) BOOL hasAssetData;
@property (retain, nonatomic) NSData *assetData;
@property (readonly, nonatomic) BOOL hasSyncData;
@property (retain, nonatomic) SPProtoCacheSyncData *syncData;

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
