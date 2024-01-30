@class NSDictionary;

@interface ATXAppPredictorAssetMapping : NSObject {
    NSDictionary *_consumerSubTypeAssetMappings;
}

+ (id)getFullCachePathWithBaseCachePath:(id)a0 cacheFileBaseName:(id)a1 subScoreName:(id)a2;
+ (id)sharedInstanceWithMobileAssets;
+ (id)assetMappingWithCachedAssets;

- (id)init;
- (void).cxx_destruct;
- (id)getAssetFileAndSubscoreForConsumerSubType:(unsigned char)a0;
- (id)getAtxToolDescription;
- (id)getFullCachePathWithBaseCachePath:(id)a0 consumerSubType:(unsigned char)a1;
- (id)initWithUseMobileAssets:(BOOL)a0;
- (id)getFullDefaultCachePathWithConsumerSubType:(unsigned char)a0;

@end
