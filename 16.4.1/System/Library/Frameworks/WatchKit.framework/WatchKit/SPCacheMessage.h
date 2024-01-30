@class NSString, NSData, SPAssetCacheSyncData;

@interface SPCacheMessage : NSObject

@property (nonatomic) int messageType;
@property (nonatomic) unsigned long long cacheType;
@property (retain, nonatomic) NSString *assetKey;
@property (retain, nonatomic) NSString *gizmoCacheIdentifier;
@property (retain, nonatomic) NSData *assetData;
@property (retain, nonatomic) SPAssetCacheSyncData *syncData;
@property (nonatomic) unsigned long long error;

+ (id)fromProto:(id)a0;
+ (id)toProto:(id)a0;

- (id)initWithDictionary:(id)a0;
- (id)init;
- (void).cxx_destruct;

@end
