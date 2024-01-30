@class NSString, NSHashTable;

@interface FCNetworkReachability : NSObject <FCNetworkReachabilityType>

@property (retain, nonatomic) NSHashTable *observers;
@property (nonatomic) BOOL isNetworkReachable;
@property (nonatomic) BOOL isNetworkReachableViaWiFi;
@property (nonatomic) BOOL isNetworkReachableViaCellular;
@property (nonatomic) BOOL isNetworkUsageExpensive;
@property (nonatomic) BOOL isLowDataModeEnabled;
@property (nonatomic) long long cellularRadioAccessTechnology;
@property (nonatomic) BOOL isCloudKitAccessAllowed;
@property (nonatomic) BOOL accessRestrictedBecauseOfAppVersion;
@property (nonatomic) BOOL accessRestrictedBecauseOfOSVersion;
@property (nonatomic) BOOL accessRestrictedBecauseOfCountry;
@property (nonatomic) BOOL accessRestrictedBecauseOfDeviceAbandoned;
@property (readonly, nonatomic) BOOL isNetworkOnlyReachableViaCellular;
@property (readonly, nonatomic) long long reachabilityStatus;
@property (readonly, nonatomic) BOOL isNetworkUsageInexpensive;
@property (readonly, nonatomic) BOOL isCloudKitReachable;
@property (nonatomic) long long offlineReason;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedNetworkReachability;

- (void)_reachabilityChanged:(id)a0;
- (long long)_cellularRadioAccessTechnologyFromString:(id)a0;
- (void)addObserver:(id)a0;
- (void)removeObserver:(id)a0;
- (long long)_cellularRadioAccessTechnology;
- (void).cxx_destruct;
- (id)init;
- (void)_accessRestrictionsChanged;
- (void)dealloc;
- (void)_updateReachability;

@end
