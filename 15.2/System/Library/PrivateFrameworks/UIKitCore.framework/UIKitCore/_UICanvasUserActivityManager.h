@class UIActivityContinuationManager, UIScene, NSString, NSUserActivity, NSDictionary, NSSet;

@interface _UICanvasUserActivityManager : NSObject <UIActivityContinuationManagerApplicationContext, _UISceneComponentProviding> {
    UIScene *_weakScene;
    NSUserActivity *_restorationActivity;
    NSDictionary *_connectionOptionsRestorationActivityDictionary;
    UIActivityContinuationManager *_activityContinuationManager;
    NSSet *_activityTypesForDefaultProgressUI;
}

@property (readonly, nonatomic, getter=_activityContinuationManager) UIActivityContinuationManager *_activityContinuationManager;
@property (nonatomic, getter=_isDisplayingActivityContinuationUI, setter=_setIsDisplayingActivityContinuationUI:) BOOL isDisplayingActivityContinuationUI;
@property (readonly, nonatomic) BOOL _initialRestorationIsFinished;
@property (weak, nonatomic, getter=_scene, setter=_setScene:) UIScene *_scene;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)_showProgressForScene:(id)a0 whenFetchingUserActivityForTypes:(id)a1;
+ (id)_getUserInfoForPersistentIdentifier:(id)a0 error:(id *)a1;
+ (void)_scheduleDataSaveForSceneSession:(id)a0 saveRestorationActivity:(BOOL)a1;
+ (id)_getRestorationUserActivityForPersistentIdentifier:(id)a0 error:(id *)a1;
+ (void)_updatePersistedSceneSession:(id)a0;
+ (void)_initializeUserActivityManager;
+ (id)_fetchSceneSessionWithPersistentIdentifier:(id)a0;
+ (void)_deleteSceneSessionsWithPersistentIdentifiers:(id)a0;
+ (id)_knownSceneSessionMap;
+ (BOOL)_restorationUserActivityAvailableForSceneIdentifier:(id)a0;
+ (id)_activityContinuationDictionaryWithAction:(id)a0 sourceApplication:(id)a1;
+ (void)_saveRestorationStateForScene:(id)a0;
+ (void)_deleteSavedSceneSessionDirectoryWithPersistentIdentifier:(id)a0;
+ (id)_userActivityManagerForScene:(id)a0;

- (void)_sceneWillInvalidate:(id)a0;
- (id)initWithScene:(id)a0;
- (void)activityContinuationManager:(id)a0 hideProgressUIWithCompletion:(id /* block */)a1;
- (BOOL)activityContinuationManager:(id)a0 willContinueUserActivityWithType:(id)a1;
- (void)_scene:(id)a0 didTransitionFromActivationState:(long long)a1 withReasonsMask:(unsigned long long)a2;
- (void)activityContinuationManager:(id)a0 displayProgressUI:(id)a1 dismissalHandler:(id /* block */)a2;
- (id)activityContinuationManagerUserCancelledError:(id)a0;
- (void)_saveSceneRestorationState;
- (void)activityContinuationManager:(id)a0 didUpdateUserActivity:(id)a1;
- (void)_setupCanvasRestorationState;
- (void)_performCanvasRestoration;
- (void)activityContinuationManager:(id)a0 configureProgressUIWithError:(id)a1;
- (void)_performCanvasRestorationIfNecessary;
- (void)activityContinuationManager:(id)a0 didFailToContinueUserActivityWithType:(id)a1 error:(id)a2;
- (void).cxx_destruct;
- (id)_updateCanvasConnectionOptionsDictionary:(id)a0;
- (void)_saveOrClearRestorationDictionary:(id)a0 forScene:(id)a1;
- (BOOL)activityContinuationManager:(id)a0 continueUserActivity:(id)a1;
- (void)_checkActivityContinuationAndBecomeCurrentIfNeeded;
- (BOOL)activityContinuationManagerHandleErrorsByConfiguringProgressUI:(id)a0;
- (void)_scene:(id)a0 willTransitionToActivationState:(long long)a1 withReasonsMask:(unsigned long long)a2;

@end
