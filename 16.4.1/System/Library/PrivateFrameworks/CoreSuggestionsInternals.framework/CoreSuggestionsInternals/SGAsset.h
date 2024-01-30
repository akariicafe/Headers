@interface SGAsset : NSObject

+ (id)notificationQueue;
+ (void)downloadMetadataWithCompletion:(id /* block */)a0;
+ (id)regionAssetIdentifier;
+ (id)regionAsset;
+ (id)asset;
+ (id)localeAsset;
+ (id)localeAssetIdentifier;

@end
