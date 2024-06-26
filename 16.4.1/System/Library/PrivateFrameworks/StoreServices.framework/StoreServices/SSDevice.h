@class SSURLBag, NSString, SSPromise, NSSet, NSObject, SSKeyValueStore;
@protocol OS_dispatch_queue;

@interface SSDevice : NSObject <SSRequestDelegate> {
    NSString *_appleTVProductVersion;
    NSSet *_automaticDownloadKinds;
    long long _biometricStyle;
    id _cloudMediaLibraryIdentifier;
    long long _deviceType;
    NSObject<OS_dispatch_queue> *_dispatchQueue;
    SSKeyValueStore *_keyValueStore;
    NSString *_legacyUserAgent;
    NSString *_localStoreFrontIdentifier;
    id _mediaLibraryIdentifier;
    NSString *_phoneNumber;
    NSString *_productType;
    NSString *_productVersion;
    id _softwareLibraryIdentifier;
    NSString *_udid;
    SSURLBag *_urlBag;
    NSString *_userAgent;
    NSString *_clientName;
    double _batteryLevel;
    unsigned int _batteryMonitorNotification;
    struct IONotificationPort { } *_batteryMonitorPort;
    BOOL _pluggedIn;
    int _pluggedInToken;
    long long _powerMonitorCount;
}

@property (readonly) NSString *compatibleProductType;
@property (readonly) long long deviceType;
@property (readonly) unsigned int deviceTypeIdentifier;
@property (readonly) NSString *phoneNumber;
@property (readonly) NSString *productType;
@property (readonly) NSString *productVersion;
@property (readonly) float screenScale;
@property (readonly) NSString *serialNumber;
@property (readonly, nonatomic) SSPromise *storeFrontIdentifierPromise;
@property (readonly) NSString *thinnedApplicationVariantIdentifier;
@property (readonly) NSString *uniqueDeviceIdentifier;
@property (readonly, getter=isPluggedIn) BOOL pluggedIn;
@property (readonly) double batteryLevel;
@property (copy) NSString *cloudMediaLibraryIdentifier;
@property (copy) NSString *mediaLibraryIdentifier;
@property (copy) NSString *softwareLibraryIdentifier;
@property (readonly) NSString *clientVersion;
@property (readonly) NSString *clientName;
@property (readonly) NSString *storeFrontIdentifier;
@property (readonly) NSString *legacyUserAgent;
@property (readonly) NSString *userAgent;
@property (readonly) NSSet *automaticDownloadKinds;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)deviceIsiPad;
+ (BOOL)promptNeedsDisplay:(id)a0;
+ (id)currentDevice;
+ (BOOL)setCachedAvailableItemKinds:(id)a0;
+ (BOOL)deviceIsAppleWatch;
+ (BOOL)deviceIsAudioAccessory;
+ (id)copyCachedAvailableItemKinds;
+ (void)setLastPromptAttemptDate:(id)a0 forPromptWithIdentifier:(id)a1;
+ (BOOL)deviceIsiPod;
+ (BOOL)deviceIsSeedBuild;
+ (BOOL)deviceIsInternalBuild;
+ (BOOL)deviceIsAppleTV;
+ (void)setPromptWithIdentifier:(id)a0 needsDisplay:(BOOL)a1;
+ (BOOL)deviceIsiPhone;

- (void)setStoreFrontIdentifier:(id)a0;
- (long long)_deviceTypeForProductType:(id)a0;
- (id)_userAgentClientVersionForInfoPlist:(id)a0 clientName:(id)a1;
- (long long)_deviceType;
- (int)_screenClass;
- (id)_fairPlayDeviceTypeString;
- (void)reloadStoreFrontIdentifier;
- (void)setStoreFrontIdentifier:(id)a0 forRequest:(id)a1 response:(id)a2 account:(id)a3;
- (long long)_deviceTypeForUnknownIPhone:(id)a0;
- (void)setStoreFrontIdentifier:(id)a0 isTransient:(BOOL)a1;
- (void)getCarrierBundleStatusForService:(long long)a0 completionHandler:(id /* block */)a1;
- (void)_reloadPluggedInState;
- (id)userAgentWithBundleIdentifier:(id)a0 version:(id)a1;
- (void)_invalidateAutomaticDownloadKinds;
- (BOOL)_is1080pCapable;
- (id)copyStoreFrontRequestHeaders;
- (id)_copyCarrierBundleEligibilityWithStatus:(id)a0;
- (id)synchedStoreFrontIdentifier;
- (void)enableAllAutomaticDownloadKindsWithCompletionBlock:(id /* block */)a0;
- (void)_postStoreFrontDidChangeNotification;
- (void)setAutomaticDownloadKinds:(id)a0 withCompletionBlock:(id /* block */)a1;
- (void)setStoreFrontIdentifier:(id)a0 accountIdentifier:(id)a1 isTransient:(BOOL)a2;
- (BOOL)getMachineIdentifier:(id *)a0 otp:(id *)a1 forAccountIdentifier:(id)a2;
- (void)getAvailableItemKindsWithBlock:(id /* block */)a0;
- (id)_copyKeyValueStoreValueForDomain:(id)a0 key:(id)a1;
- (void)setStoreFrontIdentifier:(id)a0 account:(id)a1 isTransient:(BOOL)a2;
- (id)userAgentWithClientName:(id)a0 version:(id)a1;
- (void)setStoreFrontIdentifier:(id)a0 accountIdentifier:(id)a1;
- (void)_invalidatePhoneNumber;
- (void)minusAutomaticDownloadKinds:(id)a0 withCompletionBlock:(id /* block */)a1;
- (id)_userAgentClientNameForAppleTVBundleID:(id)a0;
- (id)_newModernUserAgentWithClientName:(id)a0 version:(id)a1 isCachable:(BOOL *)a2;
- (void)_updateBatteryLevelFromService:(unsigned int)a0;
- (id)userAgentWithBundleRef:(struct __CFBundle { } *)a0 isCachable:(BOOL *)a1;
- (void)synchronizeAutomaticDownloadKinds;
- (void)sdk_loadStorefrontCountryCode:(id /* block */)a0;
- (int)_deviceClass;
- (void)_cacheKeyValueStoreValues;
- (void)dealloc;
- (BOOL)supportsDeviceCapability:(long long)a0;
- (id)_copyProductType;
- (void)setCellularNetworkingAllowed:(BOOL)a0;
- (void)getCellularNetworkingAllowedWithBlock:(id /* block */)a0;
- (id)_userAgentClientNameForInfoPlist:(id)a0;
- (void)_updateAutomaticDownloadKinds:(id)a0 withValue:(id)a1 completionBlock:(id /* block */)a2;
- (id)init;
- (BOOL)_getDeviceType:(unsigned int *)a0 error:(id *)a1;
- (BOOL)isStoreFrontIdentifierTransient;
- (long long)deviceBiometricStyle;
- (id)_newLegacyUserAgent:(BOOL *)a0;
- (void)sdk_loadStoreFrontIdentifier:(id /* block */)a0;
- (void)loadStoreFrontWithCompletionHandler:(id /* block */)a0;
- (id)_appleTVProductVersion;
- (void)unionAutomaticDownloadKinds:(id)a0 withCompletionBlock:(id /* block */)a1;
- (void)setStoreFrontIdentifier:(id)a0 account:(id)a1;
- (id)carrierBundleStatusForService:(long long)a0;
- (void)stopPowerMonitoring;
- (BOOL)_is720pCapable;
- (long long)_deviceTypeForUnknownIPod:(id)a0;
- (long long)_deviceTypeForUnknownAppleTV:(id)a0;
- (void)startPowerMonitoring;
- (void)_invalidateSoftwareCUID;
- (long long)_deviceTypeForUnknownIPad:(id)a0;
- (void)setStoreFrontWithResponseHeaders:(id)a0;
- (void)showPromptWithIdentifier:(id)a0 completionHandler:(id /* block */)a1;
- (id)_productVersion;
- (id)_diskCapacityString;
- (id)_userAgentClientNameForBundleID:(id)a0;

@end
