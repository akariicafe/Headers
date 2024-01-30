@class SSUIServiceOptionsAssetMetadata, NSString, NSArray;

@interface SSScreenshotAssetManagerRegistrationOptions : NSObject

@property (nonatomic) unsigned long long saveLocation;
@property (copy, nonatomic) SSUIServiceOptionsAssetMetadata *assetMetadata;
@property (copy, nonatomic) NSString *applicationBundleID;
@property (copy, nonatomic) NSArray *harvestedMetadata;
@property (readonly, nonatomic) NSString *assetDescription;

- (void).cxx_destruct;

@end
