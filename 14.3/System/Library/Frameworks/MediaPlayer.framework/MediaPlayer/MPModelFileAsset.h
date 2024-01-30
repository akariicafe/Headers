@class NSString;

@interface MPModelFileAsset : MPModelObject

@property (copy, nonatomic) NSString *filePath;
@property (nonatomic) unsigned long long fileSize;
@property (nonatomic) long long protectionType;
@property (nonatomic, getter=isNonPurgeable) BOOL nonPurgeable;
@property (copy, nonatomic) NSString *purchaseBundleFilePath;
@property (nonatomic) long long qualityType;

+ (id)__filePath_KEY;
+ (id)__protectionType_KEY;
+ (id)__fileSize_KEY;
+ (id)__purchaseBundleFilePath_KEY;
+ (id)allSupportedProperties;
+ (id)__nonPurgeable_KEY;
+ (id)__qualityType_KEY;


@end
