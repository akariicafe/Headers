@class CoreTelephonyClient, NSString, RadiosPreferences, NSObject;
@protocol OS_dispatch_queue;

@interface ICCloudAvailabilityController : NSObject <RadiosPreferencesDelegate, ICEnvironmentMonitorObserver, CoreTelephonyClientDataDelegate, ICCloudAvailability> {
    NSObject<OS_dispatch_queue> *_accessQueue;
    BOOL _hasProperNetworkConditionsToShowCloudMedia;
    BOOL _isAirplaneModeActive;
    BOOL _isAutoDownloadOnCellularAllowed;
    BOOL _isCellularDataActive;
    BOOL _isCellularDataRestrictedForMusic;
    BOOL _isShowingAllMusic;
    BOOL _isShowingAllVideo;
    BOOL _isUpdateInProgress;
    BOOL _isWiFiEnabled;
    BOOL _isWiFiAssociated;
    BOOL _isEthernetWired;
    BOOL _isNetworkReachable;
    BOOL _canShowCloudMusic;
    BOOL _canShowCloudVideo;
    BOOL _canShowCloudDownloadButtons;
    int _preferencesChangedNotifyToken;
    BOOL _preferencesChangedNotifyTokenIsValid;
    long long _networkType;
    RadiosPreferences *_radiosPreferences;
    struct __CTServerConnection { } *_ctServerConnection;
    CoreTelephonyClient *_telephonyClient;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedController;

- (BOOL)isCellularDataRestrictedForStoreApps;
- (BOOL)hasProperNetworkConditionsToPlayMedia;
- (BOOL)isCellularDataRestrictedForMusic;
- (BOOL)shouldProhibitVideosActionForCurrentNetworkConditions;
- (BOOL)canShowCloudVideo;
- (void)_applicationWillEnterForeground:(id)a0;
- (void)environmentMonitorDidChangeNetworkReachability:(id)a0;
- (void)_setNewIsNetworkReachable:(BOOL)a0 networkType:(long long)a1;
- (BOOL)_hasWiFiCapability;
- (BOOL)isCellularDataRestrictedForVideos;
- (BOOL)_isAutoDownloadOnCellularAllowed;
- (void)_applicationDidEnterBackground:(id)a0;
- (void)airplaneModeChanged;
- (BOOL)_uncachedIsShowingAllMusic;
- (void)_onQueue_updateIsCellularDataRestrictedForMusic;
- (void)_unregisterPerAppNetworkDataAccessPolicyChangedNotification;
- (void)_registerPerAppNetworkDataAccessPolicyChangedNotification;
- (BOOL)_uncachedIsAutoDownloadOnCellularAllowed;
- (BOOL)canShowCloudDownloadButtons;
- (BOOL)_hasCellularCapability;
- (void)internetConnectionStateChanged:(id)a0;
- (void)dealloc;
- (void)_wifiStateDidChangeNotification:(id)a0;
- (void)_onQueue_updateCanShowCloudTracksWithNotification:(BOOL)a0;
- (void)environmentMonitorDidChangeNetworkType:(id)a0;
- (BOOL)isNetworkReachable;
- (void)_onQueue_updateCanShowCloudDownloadButtonsWithNotification:(BOOL)a0;
- (id)init;
- (BOOL)canShowCloudMusic;
- (BOOL)shouldProhibitMusicActionForCurrentNetworkConditions;
- (BOOL)hasProperNetworkConditionsToShowCloudMedia;
- (BOOL)_uncachedIsShowingAllVideo;
- (void).cxx_destruct;
- (BOOL)shouldProhibitStoreAppsActionForCurrentNetworkConditions;

@end
