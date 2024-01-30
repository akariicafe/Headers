@class AMSProcessInfo, NSString, AMSCoreOptionsBox, AMSMappedBundleInfo;

@interface AMSUserAgent : NSObject

@property (readonly, nonatomic) AMSMappedBundleInfo *bundleInfo;
@property (readonly, nonatomic) AMSProcessInfo *processInfo;
@property (readonly, nonatomic) AMSCoreOptionsBox *optionsBox;
@property (retain, nonatomic) NSString *clientName;
@property (retain, nonatomic) NSString *clientVersion;

+ (id)userAgentForProcessInfo:(id)a0;
+ (id)_sharedCache;
+ (id)cachedUserAgentForBundleIdentifier:(id)a0;
+ (void)cacheUserAgent:(id)a0 forBundleIdentifier:(id)a1;

- (id)_iOSComponentProductVersion;
- (id)compile;
- (id)_userAgentSuffix;
- (id)_sharedComponentParentheticalWithFairPlayDeviceType:(id)a0;
- (id)_iOSComponentHardwarePlatform;
- (id)_sharedComponentParentheticalWithFairPlayDeviceType:(id)a0 productType:(id)a1;
- (id)_sharedComponentFrameworkVersion;
- (id)_iOSComponentBuildVersion;
- (id)_iOSComponentClientInfo;
- (id)_compileAndShouldCache:(BOOL *)a0;
- (void).cxx_destruct;
- (id)_iOSComponentDeviceModel;
- (id)initWithProcessInfo:(id)a0;
- (id)_sharedComponentFairPlayDeviceType;

@end
