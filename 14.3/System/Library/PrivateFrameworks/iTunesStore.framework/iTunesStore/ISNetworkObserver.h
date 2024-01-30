@class NSString, NSMutableSet, NSObject;
@protocol OS_dispatch_queue;

@interface ISNetworkObserver : NSObject <SSDownloadQueueObserver> {
    NSString *_dataStatusIndicator;
    NSObject<OS_dispatch_queue> *_dispatchQueue;
    BOOL _isCellularRestricted;
    double _lastNetworkTypeChangeTime;
    unsigned int _networkReachabilityFlags;
    long long _networkUsageCount;
    long long _networkType;
    NSObject<OS_dispatch_queue> *_notificationQueue;
    NSMutableSet *_observedDownloadQueues;
    struct __SCNetworkReachability { } *_reachability;
    struct __CTServerConnection { } *_telephonyServer;
}

@property (readonly) NSString *connectionTypeHeader;
@property long long networkType;
@property (readonly, getter=isWiFiEnabled) BOOL wifiEnabled;
@property (readonly) NSString *dataStatusIndicator;
@property (readonly) NSString *mobileSubscriberCountryCode;
@property (readonly) NSString *mobileSubscriberNetworkCode;
@property (readonly) NSString *modemRegistrationStatus;
@property (readonly) NSString *operatorName;
@property (readonly) NSString *phoneNumber;
@property (readonly) NSString *providerName;
@property (readonly) unsigned int networkReachabilityFlags;
@property (readonly) double lastNetworkTypeChangeTime;
@property (readonly, getter=isUsingNetwork) BOOL usingNetwork;
@property (readonly) BOOL shouldShowCellularAutomaticDownloadsSwitch;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;
+ (void)setAirplaneModeEnabled:(BOOL)a0;
+ (void)setWiFiEnabled:(BOOL)a0;
+ (void)set3GEnabled:(BOOL)a0;
+ (BOOL)isLikelyToReachRemoteServerWithReachabilityFlags:(unsigned int)a0;

- (long long)_setNetworkType:(long long)a0;
- (void)_reloadCellularRestriction;
- (void)_postUsageChangedToValue:(BOOL)a0;
- (id)init;
- (void)endUsingNetwork;
- (long long)_networkTypeFromDataIndicator:(id)a0;
- (void)_applicationForegroundNotification:(id)a0;
- (void)dealloc;
- (void)_reloadDataStatusIndicator;
- (BOOL)isCellularDataEnabledForBundleIdentifier:(id)a0;
- (void)downloadQueue:(id)a0 changedWithRemovals:(id)a1;
- (void)downloadQueueNetworkUsageChanged:(id)a0;
- (void)_copyConnectionDataStatus:(id /* block */)a0;
- (id)_dataStatusIndicator;
- (void)_telephonyOperatorNameDidChangeNotification:(id)a0;
- (void)_reloadNetworkType;
- (void)_telephonyRegistrationDidChangeNotification:(id)a0;
- (void)_postTypeChangedNotificationFromValue:(long long)a0 toValue:(long long)a1;
- (unsigned int)_currentNetworkReachabilityFlags;
- (void)_postReachabilityFlagsChangedNotificationFromValue:(unsigned int)a0 toValue:(unsigned int)a1;
- (BOOL)_ntsIsUsingNetwork;
- (void)_handleTelephonyNotificationWithName:(struct __CFString { } *)a0 userInfo:(struct __CFDictionary { } *)a1;
- (void)endObservingDownloadQueue:(id)a0;
- (void)reloadNetworkType;
- (void)beginObservingDownloadQueue:(id)a0;
- (id)copyValueForCarrierBundleKey:(id)a0;
- (void)_reloadNetworkTypeWithReachabilityFlags:(unsigned int)a0;
- (long long)_networkTypeForReachabilityFlags:(unsigned int)a0;
- (void)beginUsingNetwork;

@end
