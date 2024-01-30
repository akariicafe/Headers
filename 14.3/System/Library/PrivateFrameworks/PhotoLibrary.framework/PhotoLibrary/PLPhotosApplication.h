@class UIWindow, NSString, NSDictionary, NSSet;

@interface PLPhotosApplication : UIApplication <UIApplicationDelegate> {
    BOOL _receivingRemoteControlEvents;
    int _observeForRechabilityChanges;
    int _photoStreamActivityToken;
    int _sharedPhotoStreamActivityToken;
    int _sharedPhotoStreamInvitationFailureToken;
}

@property (readonly, nonatomic) BOOL isReachable;
@property (readonly, nonatomic) BOOL isOnWifi;
@property (retain, nonatomic) NSString *currentTestName;
@property (retain, nonatomic) NSDictionary *currentTestOptions;
@property (nonatomic) long long waitForGraphCount;
@property (copy, nonatomic) NSSet *notificationSuppressionContexts;
@property (retain, nonatomic) UIWindow *window;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)initialize;

- (void)_applicationDidBecomeActive:(id)a0;
- (void)_applicationWillEnterForeground:(id)a0;
- (void)handleImportCompleteAlertResponse:(struct __CFUserNotification { } *)a0 flags:(unsigned long long)a1;
- (void)dealloc;
- (void)_applicationDidEnterBackground:(id)a0;
- (void)photosPreferencesChanged;
- (void)applicationDidFinishLaunching:(id)a0;
- (void)_networkReachabilityDidChange:(id)a0;
- (BOOL)useCompatibleSuspensionAnimation;
- (void)prepareForApplicationWillEnterForeground;
- (void)prepareForApplicationDidEnterBackground;
- (void)prepareForApplicationDidBecomeActive;
- (void)_updateSuspensionSettings;
- (void)_cleanUpOutboundSharingAssets;
- (void)setReceivingRemoteControlEvents:(BOOL)a0;
- (void)_startObservingReachabilityChanges;
- (void)_stopObservingReachabilityChanges;
- (void)enableNetworkObservation;
- (void)disableNetworkObservation;
- (void)_registerForPhotoStreamActivityNotifications;
- (void)_unregisterForPhotoStreamActivityNotifications;

@end
