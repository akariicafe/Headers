@class NSDate, NSString, PUAirPlayRouteObserverRegistry, PUAirPlayScreenDetector, AVOutputContext, PUAirPlayScreen, UIViewController, PUAirPlayContentRegistry, PUAirPlayRootViewController;

@interface PHAirPlayScreenController : NSObject <PUAirPlayScreenReceiver, PUAirPlayRouteObserverRegistryDelegate>

@property (retain, nonatomic, setter=_setCurrentScreen:) PUAirPlayScreen *_currentScreen;
@property (retain, nonatomic, setter=_setScreenDetector:) PUAirPlayScreenDetector *_screenDetector;
@property (retain, nonatomic, setter=_setRootViewController:) PUAirPlayRootViewController *_rootViewController;
@property (retain, nonatomic, setter=_setContentRegistry:) PUAirPlayContentRegistry *_contentRegistry;
@property (retain, nonatomic, setter=_setRouteObserverRegistry:) PUAirPlayRouteObserverRegistry *_routeObserverRegistry;
@property (retain, nonatomic, setter=_setLastDisplayedContent:) UIViewController *_lastDisplayedContent;
@property (retain, nonatomic, setter=_setLastScreenConnectDate:) NSDate *_lastScreenConnectDate;
@property (retain, nonatomic, setter=_setLastScreenRequestDate:) NSDate *_lastScreenRequestDate;
@property (nonatomic, setter=_setLastScreenRequestOrigin:) long long _lastScreenRequestOrigin;
@property (nonatomic) long long airPlaySessionSignpost;
@property (retain, nonatomic) id secondDisplayModeToken;
@property (retain, nonatomic) AVOutputContext *outputContext;
@property (readonly, nonatomic, getter=isDisplayingContent) BOOL displayingContent;
@property (readonly, nonatomic) unsigned long long screenAvailability;
@property (readonly, nonatomic) unsigned long long routeAvailability;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;
+ (struct __CFString { } *)_keyForScreenRequestOrigin:(long long)a0;

- (BOOL)pu_hasAvailableRoute;
- (void)_switchModeForHighResolutionContent:(BOOL)a0 completionHandler:(id /* block */)a1;
- (id)_currentContent;
- (id)_screenAvailabilityName;
- (void)_notifyWillRequestAirPlayScreenFromSource:(long long)a0;
- (void)unregisterContentProvider:(id)a0;
- (id)_findAvailableScreen;
- (void)_recordSessionBeganWithScreen:(id)a0;
- (void)airPlayRouteObserverRegistryRouteAvailabilityChanged:(id)a0 forRouteObserver:(id)a1;
- (BOOL)_shouldIgnoreScreen:(id)a0;
- (void)_cacheDisplayedContentIfNeededForUnregisteringProvider:(id)a0;
- (void)screenDetector:(id)a0 didDetectScreen:(id)a1;
- (void)_sceneWillDeactivate:(id)a0;
- (void)_outputDeviceDidChange:(id)a0;
- (void)unregisterRouteObserver:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (void)registerContentProvider:(id)a0;
- (void)notifyDidPresentAirPlayRoutesFromShareSheet;
- (void)notifyDidPresentAirPlayRoutesFromSlideshow;
- (void)registerRouteObserver:(id)a0;
- (void)screenDetector:(id)a0 didLoseScreen:(id)a1;
- (void)_updateSecondDisplayModeWithCurrentContent;
- (void)_handleSettingHighResolutionContent:(BOOL)a0 forRootController:(id)a1 content:(id)a2;
- (BOOL)_shouldUpdateSecondDisplayModeWithCurrentContent;
- (void)_sceneDidActivate:(id)a0;
- (void)_recordSessionEnded;
- (void)_updateScreenContentWithShouldTryToFindAvailableScreen:(BOOL)a0;

@end
