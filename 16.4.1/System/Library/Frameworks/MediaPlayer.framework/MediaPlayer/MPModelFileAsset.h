@class NSString;

@interface MPModelFileAsset : MPModelObject

@property (copy, nonatomic) NSString *filePath;
@property (nonatomic) unsigned long long fileSize;
@property (nonatomic) long long protectionType;
@property (nonatomic, getter=isNonPurgeable) BOOL nonPurgeable;
@property (copy, nonatomic) NSString *purchaseBundleFilePath;
@property (nonatomic) long long qualityType;
@property (nonatomic) unsigned long long traits;
@property (copy, nonatomic, setter=setHLSKeyServerURL:) NSString *hlsKeyServerURL;
@property (copy, nonatomic, setter=setHLSKeyServerProtocol:) NSString *hlsKeyServerProtocol;
@property (copy, nonatomic, setter=setHLSKeyCertificateURL:) NSString *hlsKeyCertificateURL;

+ (id)__filePath_KEY;
+ (id)__fileSize_KEY;
+ (id)__hlsKeyCertificateURL_KEY;
+ (id)__hlsKeyServerProtocol_KEY;
+ (id)__hlsKeyServerURL_KEY;
+ (id)__nonPurgeable_KEY;
+ (id)__protectionType_KEY;
+ (id)__purchaseBundleFilePath_KEY;
+ (id)__qualityType_KEY;
+ (id)__traits_KEY;
+ (id)allSupportedProperties;


@end
