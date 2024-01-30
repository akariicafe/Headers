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
@property (copy, nonatomic) NSSet *notificationSuppressionContexts;
@property (retain, nonatomic) UIWindow *window;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)initialize;

- (void)_applicationWillEnterForeground:(id)a0;
- (void)applicationDidFinishLaunching:(id)a0;
- (void)photosPreferencesChanged;
- (void)_applicationDidBecomeActive:(id)a0;
- (void)_applicationDidEnterBackground:(id)a0;
- (void)dealloc;
- (void)_networkReachabilityDidChange:(id)a0;
- (void)handleImportCompleteAlertResponse:(struct __CFUserNotification { } *)a0 flags:(unsigned long long)a1;
- (void)_registerForPhotoStreamActivityNotifications;
- (void)_startObservingReachabilityChanges;
- (void)_stopObservingReachabilityChanges;
- (void)_unregisterForPhotoStreamActivityNotifications;
- (void)_updateSuspensionSettings;
- (void)disableNetworkObservation;
- (void)enableNetworkObservation;
- (void)prepareForApplicationDidBecomeActive;
- (void)prepareForApplicationDidEnterBackground;
- (void)prepareForApplicationWillEnterForeground;
- (void)setReceivingRemoteControlEvents:(BOOL)a0;
- (BOOL)useCompatibleSuspensionAnimation;

@end
