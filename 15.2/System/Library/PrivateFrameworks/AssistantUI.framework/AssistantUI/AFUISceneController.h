@class AFUISceneConfiguration, NSString, BKSProcessAssertion, FBScene, FBApplicationUpdateScenesTransaction;
@protocol AFUISceneControllerDelegate;

@interface AFUISceneController : NSObject <FBSceneObserver, FBApplicationUpdateScenesTransactionObserver> {
    FBScene *_scene;
    FBApplicationUpdateScenesTransaction *_createTransaction;
    BKSProcessAssertion *_backgroundRunningAssertion;
    AFUISceneConfiguration *_pendingConfigurationToApply;
    BOOL _sceneForeground;
    unsigned long long _invalidationReason;
}

@property (weak, nonatomic) id<AFUISceneControllerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)sceneContentStateDidChange:(id)a0;
- (void)sceneDidInvalidate:(id)a0;
- (void)scene:(id)a0 didUpdateClientSettingsWithDiff:(id)a1 oldClientSettings:(id)a2 transitionContext:(id)a3;
- (void).cxx_destruct;
- (id)_currentConfiguration;
- (void)transaction:(id)a0 didLaunchProcess:(id)a1;
- (void)dealloc;
- (void)requestSceneViewWithConfiguration:(id)a0 completionBlock:(id /* block */)a1;
- (void)invalidateSceneForReason:(unsigned long long)a0 explanation:(id)a1;
- (void)updateSceneViewWithConfiguration:(id)a0;
- (void)cancelSceneLoadingTimeOut;
- (void)_recordSceneCreateBegin;
- (void)startSceneLoadingTimeOutTimerWithDuration:(double)a0;
- (void)_recordSceneCreateEnd;
- (void)sceneLoadingTimeOutDidOccur;

@end
