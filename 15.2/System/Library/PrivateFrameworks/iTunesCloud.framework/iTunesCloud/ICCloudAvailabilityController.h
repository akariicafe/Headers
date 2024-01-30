@class NSString, RadiosPreferences, NSObject;
@protocol OS_dispatch_queue;

@interface ICCloudAvailabilityController : NSObject <RadiosPreferencesDelegate, ICEnvironmentMonitorObserver, ICCloudAvailability> {
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
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedController;

- (void)environmentMonitorDidChangeNetworkType:(id)a0;
- (BOOL)isCellularDataRestrictedForStoreApps;
- (BOOL)hasProperNetworkConditionsToPlayMedia;
- (void)environmentMonitorDidChangeNetworkReachability:(id)a0;
- (BOOL)shouldProhibitVideosActionForCurrentNetworkConditions;
- (BOOL)isCellularDataRestrictedForVideos;
- (BOOL)canShowCloudVideo;
- (BOOL)canShowCloudMusic;
- (BOOL)isCellularDataRestrictedForMusic;
- (BOOL)shouldProhibitMusicActionForCurrentNetworkConditions;
- (BOOL)canShowCloudDownloadButtons;
- (BOOL)hasProperNetworkConditionsToShowCloudMedia;
- (BOOL)shouldProhibitStoreAppsActionForCurrentNetworkConditions;
- (void)_setNewIsNetworkReachable:(BOOL)a0 networkType:(long long)a1;
- (BOOL)isNetworkReachable;
- (BOOL)_uncachedIsAutoDownloadOnCellularAllowed;
- (void)_onQueue_updateCanShowCloudTracksWithNotification:(BOOL)a0;
- (BOOL)_isAutoDownloadOnCellularAllowed;
- (void)_onQueue_updateIsCellularDataRestrictedForMusic;
- (BOOL)_uncachedIsShowingAllVideo;
- (void).cxx_destruct;
- (id)init;
- (BOOL)_uncachedIsShowingAllMusic;
- (void)airplaneModeChanged;
- (void)_applicationWillEnterForeground:(id)a0;
- (BOOL)_hasWiFiCapability;
- (void)dealloc;
- (void)_onQueue_updateCanShowCloudDownloadButtonsWithNotification:(BOOL)a0;
- (void)_wifiStateDidChangeNotification:(id)a0;
- (BOOL)_hasCellularCapability;

@end
