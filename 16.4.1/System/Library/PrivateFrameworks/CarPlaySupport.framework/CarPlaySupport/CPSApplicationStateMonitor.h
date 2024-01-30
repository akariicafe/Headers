@class UIWindowScene, NSString, CARObserverHashTable, NSObject;
@protocol OS_dispatch_queue;

@interface CPSApplicationStateMonitor : NSObject {
    NSObject<OS_dispatch_queue> *_stateObserverQueue;
}

@property (retain, nonatomic) CARObserverHashTable *stateObservers;
@property (weak, nonatomic) UIWindowScene *windowSceneForTemplateApplicationScene;
@property (weak, nonatomic) UIWindowScene *windowSceneForMapWidgetScene;
@property (weak, nonatomic) UIWindowScene *windowSceneForGuidanceWidgetScene;
@property (readonly, copy, nonatomic) NSString *bundleIdentifier;
@property (readonly, nonatomic, getter=isApplicationActive) BOOL applicationActive;
@property (readonly, nonatomic) BOOL canPostManeuverNotification;
@property (readonly, nonatomic) BOOL canPostNavigationAlertNotification;
@property (readonly, nonatomic) BOOL templateApplicationSceneIsActive;

- (void)dealloc;
- (void)_sceneDidEnterBackground:(id)a0;
- (void)_sceneWillEnterForeground:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (void)removeApplicationStateObserver:(id)a0;
- (void)_notifyObserversForeground:(BOOL)a0;
- (void)_observeScene:(id)a0;
- (void)_sceneActivated:(id)a0;
- (BOOL)_sceneIsForeground:(id)a0;
- (void)addApplicationStateObserver:(id)a0;

@end
