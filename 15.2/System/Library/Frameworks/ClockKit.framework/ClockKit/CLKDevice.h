@class NSNumber, NSMutableDictionary, NSUUID, NRDevice;

@interface CLKDevice : NSObject

@property (class, retain, nonatomic) CLKDevice *currentDevice;

@property (readonly, nonatomic) int pairedDeviceCapabilitiesChangeNotificationToken;
@property (readonly, nonatomic) struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } capabilitiesLock;
@property (retain, nonatomic) NSMutableDictionary *supportedCapabilitiesCache;
@property (nonatomic) int cachedKeybagLockState;
@property (nonatomic) BOOL isTinker;
@property (retain, nonatomic) NRDevice *nrDevice;
@property (nonatomic) struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } protectedLock;
@property (nonatomic) long long productType;
@property (readonly, nonatomic) BOOL isPaired;
@property (readonly, nonatomic) NSUUID *nrDeviceUUID;
@property (readonly, nonatomic) unsigned int nrDeviceVersion;
@property (nonatomic) BOOL isBridgeActive;
@property (nonatomic) unsigned long long sizeClass;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } screenBounds;
@property (nonatomic) double screenScale;
@property (nonatomic) double screenCornerRadius;
@property (nonatomic) BOOL supportsCompanionSync;
@property (nonatomic) BOOL isLuxo;
@property (nonatomic) BOOL isExplorer;
@property (nonatomic) BOOL hasRichMediaComplications;
@property (nonatomic) BOOL supportsUrsa;
@property (nonatomic) unsigned long long materialType;
@property (nonatomic) unsigned long long collectionType;
@property (nonatomic) BOOL supportsPolaris;
@property (readonly, nonatomic) unsigned long long version;
@property (readonly, nonatomic) unsigned long long deviceCategory;
@property (readonly, nonatomic) BOOL supportsTritium;
@property (readonly, nonatomic) BOOL isZeusBlack;
@property (readonly, nonatomic, getter=isRunningGraceOrLater) BOOL runningGraceOrLater;
@property (readonly, nonatomic) long long productFamilyType;
@property (readonly, nonatomic) NSNumber *deviceBrand;
@property (readonly, nonatomic) BOOL isLocked;
@property (readonly, nonatomic) BOOL unlockedSinceBoot;
@property (readonly, nonatomic) BOOL isRunningDaytonaOrLater;
@property (readonly, nonatomic) BOOL isRunningGloryFOrLater;
@property (readonly, nonatomic) BOOL isRunningGloryGMOrLater;
@property (readonly, nonatomic) BOOL limitedToPreGlory;
@property (readonly, nonatomic) BOOL limitedToPreHunter;

+ (void)initialize;
+ (void)_deviceDidBecomeActive:(id)a0;
+ (id)deviceForNRDevice:(id)a0;
+ (id)deviceForNRDeviceUUID:(id)a0;
+ (id)activeNRDevice;
+ (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })screenBoundsForSizeClass:(unsigned long long)a0;
+ (double)screenScaleForSizeClass:(unsigned long long)a0;
+ (double)screenCornerRadiusForSizeClass:(unsigned long long)a0;
+ (unsigned int)NRProductVersionForNRDevice:(id)a0;
+ (void)enumerateSizeClasses:(id /* block */)a0;
+ (id)nrDeviceForNRDeviceUUID:(id)a0;
+ (id)CLKDeviceUUIDForNRDevice:(id)a0;
+ (BOOL)NRDeviceIsRunningDaytonaOrLater:(id)a0;
+ (id)deviceForNRDevice:(id)a0 forced:(BOOL)a1;
+ (id)_createCurrentDeviceWithNRDevice:(id)a0;
+ (void)_handleNRDeviceChanged:(id)a0;
+ (void)_removeCachedDeviceForUUID:(id)a0;
+ (id)_cachedDeviceForUUID:(id)a0;
+ (void)resetCurrentDevice;

- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (void)dealloc;
- (BOOL)supportsCapability:(id)a0;
- (id)initWithNRDevice:(id)a0;
- (void)_loadDeviceInfo;
- (void)handleDeviceDidPairNotification;
- (void)customCompanionSetup;
- (BOOL)_queryAndCacheNanoRegistryDeviceCapabilities;
- (void)updateTinkerState;
- (long long)retrieveProductType;
- (BOOL)isLimitedToPreGloryDeviceOfProductType:(long long)a0;
- (BOOL)isM8SOCInDeviceOfProductType:(long long)a0;
- (long long)productTypeFromProductTypeString:(id)a0;
- (BOOL)_supportsCapabilityUncached:(id)a0;
- (BOOL)_checkUpdateFlushCapabilitiesCache_locked;
- (void)updateKeybagLockStateCacheWithState:(int)a0;
- (void)customWatchSetup;
- (id)initWithSizeClass:(unsigned long long)a0;

@end
