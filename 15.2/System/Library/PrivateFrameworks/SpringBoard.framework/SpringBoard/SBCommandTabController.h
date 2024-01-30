@class NSTimer, NSString, PTToggleTestRecipe, SBCommandTabViewController, NSOrderedSet, SBRecentDisplayItemsController, UIApplicationSceneDeactivationAssertion, NSMutableSet, NSObject, SBRecentDisplayItemsDataStore, SBRecentDisplayItemsDefaults, SBWindow;
@protocol OS_dispatch_queue, BSInvalidatable;

@interface SBCommandTabController : NSObject <SBCommandTabViewControllerDelegate, SBRecentDisplayItemsControllerDelegate, SBRecentDisplayItemsPersistenceDelegate> {
    SBCommandTabViewController *_commandTabViewController;
    NSTimer *_timer;
    UIApplicationSceneDeactivationAssertion *_resignActiveAssertion;
    id<BSInvalidatable> _keyboardFocusAssertion;
    SBRecentDisplayItemsController *_recentDisplayItemsController;
    NSOrderedSet *_persistedRecentDisplayItems;
    NSMutableSet *_appsAllowedWhileHidden;
    NSObject<OS_dispatch_queue> *_recentDisplayItemsPersistenceQueue;
    SBRecentDisplayItemsDataStore *_dataStore;
    SBRecentDisplayItemsDefaults *_defaults;
    id<BSInvalidatable> _deferOrientationUpdatesAssertion;
    PTToggleTestRecipe *_testRecipe;
}

@property (readonly, nonatomic) SBWindow *window;
@property (readonly, nonatomic, getter=isVisible) BOOL visible;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;
+ (id)keyCommands;
+ (id)sharedInstanceIfExists;

- (void)previous;
- (void)_clearTimer;
- (void)next;
- (void)dismiss;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;
- (void)launchCurrentSelectedApplication;
- (void)removeCurrentSelectedApplication;
- (void)activateWithKeyCommand:(id)a0;
- (BOOL)recentDisplayItemsController:(id)a0 shouldAddItem:(id)a1;
- (void)recentDisplayItemsControllerDidUpdateDisplayItems:(id)a0;
- (void)recentDisplayItemsController:(id)a0 didRemoveItem:(id)a1;
- (void)_allowAppToAppearWhileHidden:(id)a0;
- (void)_disallowAppFromAppearingWhileHidden:(id)a0;
- (void)_activateWithForwardDirection:(BOOL)a0;
- (void)_showWindow:(BOOL)a0;
- (void)viewController:(id)a0 selectedApplicationWithDisplayItem:(id)a1;
- (void)_emitAnalyticsEventForDisplayItem:(id)a0;
- (void)_showCommandTabBarAfterTimer:(id)a0;
- (void)viewControllerWantsDismissal:(id)a0;
- (id)persistedDisplayItemsForDataStore:(id)a0;
- (void)dataStore:(id)a0 persistDisplayItems:(id)a1;
- (BOOL)dataStore:(id)a0 shouldRestorePersistedDisplayItem:(id)a1;

@end
