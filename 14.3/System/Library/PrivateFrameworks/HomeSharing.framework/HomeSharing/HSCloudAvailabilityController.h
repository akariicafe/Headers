@class NSString, RadiosPreferences, NSObject;
@protocol OS_dispatch_queue;

@interface HSCloudAvailabilityController : NSObject <RadiosPreferencesDelegate, ICEnvironmentMonitorObserver, HSCloudAvailability> {
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
    BOOL _isNetworkReachable;
    BOOL _canShowCloudMusic;
    BOOL _canShowCloudVideo;
    BOOL _canShowCloudDownloadButtons;
    int _preferencesChangedNotifyToken;
    BOOL _preferencesChangedNotifyTokenIsValid;
    long long _networkType;
    RadiosPreferences *_radiosPreferences;
    unsigned long long _networkReachabilityObservationCount;
    struct __CTServerConnection { } *_ctServerConnection;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedController;

- (BOOL)canShowCloudDownloadButtons;
- (BOOL)isCellularDataRestrictedForMusic;
- (BOOL)hasProperNetworkConditionsToPlayMedia;
- (BOOL)isNetworkReachable;
- (BOOL)canShowCloudVideo;
- (BOOL)shouldProhibitMusicActionForCurrentNetworkConditions;
- (id)init;
- (void)_applicationWillEnterForeground:(id)a0;
- (void).cxx_destruct;
- (void)airplaneModeChanged;
- (BOOL)isCellularDataRestricted;
- (void)_onQueue_updateIsCellularDataRestrictedForMusic;
- (void)dealloc;
- (BOOL)shouldProhibitActionsForCurrentNetworkConditions;
- (void)_wifiStateDidChangeNotification:(id)a0;
- (BOOL)_hasWiFiCapability;
- (BOOL)shouldProhibitStoreAppsActionForCurrentNetworkConditions;
- (void)_setNewIsNetworkReachable:(BOOL)a0 networkType:(long long)a1;
- (void)beginObservingNetworkReachability;
- (BOOL)_uncachedIsShowingAllVideo;
- (void)_onQueue_updateCanShowCloudTracksWithNotification:(BOOL)a0;
- (BOOL)shouldProhibitVideosActionForCurrentNetworkConditions;
- (void)_onQueue_beginObservingReachabilityChanges;
- (BOOL)_hasCellularCapability;
- (void)environmentMonitorDidChangeNetworkReachability:(id)a0;
- (BOOL)canShowCloudMusic;
- (BOOL)isCellularDataRestrictedForVideos;
- (BOOL)_uncachedIsShowingAllMusic;
- (BOOL)hasProperNetworkConditionsToShowCloudMedia;
- (void)_onQueue_updateCanShowCloudDownloadButtonsWithNotification:(BOOL)a0;
- (BOOL)_isAutoDownloadOnCellularAllowed;
- (BOOL)_uncachedIsAutoDownloadOnCellularAllowed;
- (void)endObservingNetworkReachability;
- (BOOL)isCellularDataRestrictedForStoreApps;
- (void)environmentMonitorDidChangeNetworkType:(id)a0;
- (void)_onQueue_endObservingReachabilityChanges;

@end
