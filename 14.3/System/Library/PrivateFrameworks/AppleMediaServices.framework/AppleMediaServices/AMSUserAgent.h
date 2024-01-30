@class NSString, AMSMappedBundleInfo, AMSProcessInfo;

@interface AMSUserAgent : NSObject

@property (readonly, nonatomic) AMSMappedBundleInfo *bundleInfo;
@property (readonly, nonatomic) AMSProcessInfo *processInfo;
@property (retain, nonatomic) NSString *clientName;
@property (retain, nonatomic) NSString *clientVersion;

+ (id)userAgentForProcessInfo:(id)a0;
+ (id)_sharedCache;
+ (id)cachedUserAgentForBundleIdentifier:(id)a0;
+ (void)cacheUserAgent:(id)a0 forBundleIdentifier:(id)a1;

- (id)compile;
- (id)_userAgentSuffix;
- (id)_iOSComponentDeviceModel;
- (void).cxx_destruct;
- (id)_sharedComponentFairPlayDeviceType;
- (id)initWithProcessInfo:(id)a0;
- (id)_sharedComponentParentheticalWithFairPlayDeviceType:(id)a0;
- (id)_iOSComponentHardwarePlatform;
- (id)_iOSComponentProductVersion;
- (id)_iOSComponentClientInfo;
- (id)_compileAndShouldCache:(BOOL *)a0;
- (id)_iOSComponentBuildVersion;
- (id)_sharedComponentFrameworkVersion;
- (id)_sharedComponentParentheticalWithFairPlayDeviceType:(id)a0 productType:(id)a1;

@end
