@class NSMutableArray, NSString, NSMutableDictionary, NSMutableOrderedSet, FBSceneManagerObserver, NSMapTable, FBSceneEventQueue;
@protocol FBSceneManagerDelegate;

@interface FBSceneManager : NSObject <FBSceneManagerSceneDelegate, FBWorkspaceEventDispatcherTarget> {
    FBSceneManagerObserver *_delegateProxy;
    NSMutableOrderedSet *_observerProxies;
    unsigned long long _synchronizationBlockDepth;
    NSMutableDictionary *_scenesByID;
    NSMapTable *_providerToScenesMap;
    FBSceneEventQueue *_eventQueue;
    NSMutableArray *_pendingIdleEvents;
}

@property (nonatomic, setter=_setSuppressConnectionHandshakeForCurrentProcess:) BOOL _suppressConnectionHandshakeForCurrentProcess;
@property (weak, nonatomic) id<FBSceneManagerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;
+ (void)setKeyboardScene:(id)a0;
+ (id)observeKeyboardSceneAvailability:(id /* block */)a0;
+ (void)_clearKeyboardScene;
+ (id)keyboardScene;
+ (void)synchronizeChanges:(id /* block */)a0;

- (void)scene:(id)a0 didUpdateClientSettingsWithDiff:(id)a1 oldClientSettings:(id)a2 transitionContext:(id)a3;
- (id)_eventForScene:(id)a0 withName:(id)a1 block:(id /* block */)a2;
- (void)didReceiveHandshake:(id)a0;
- (void)_appendCommonDescriptionItemsToBuilder:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (id)createSceneFromRemnant:(id)a0 withSettings:(id)a1 transitionContext:(id)a2;
- (void)scene:(id)a0 didReceiveActions:(id)a1;
- (void)removeObserver:(id)a0;
- (void)dealloc;
- (void)_executeNextIdleEventIfAppropriate;
- (void)_destroyScene:(id)a0 withTransitionContext:(id)a1;
- (void)addObserver:(id)a0;
- (void)_enqueueObserverCalloutsForScene:(id)a0 eventName:(id)a1 preferInternal:(BOOL)a2 sceneObserverBlock:(id /* block */)a3 sceneManagerObserverBlock:(id /* block */)a4;
- (id)sceneFromIdentityTokenStringRepresentation:(id)a0;
- (id)createSceneWithIdentifier:(id)a0 settings:(id)a1 initialClientSettings:(id)a2 clientProvider:(id)a3 transitionContext:(id)a4;
- (id)descriptionWithMultilinePrefix:(id)a0;
- (void)_enqueueSceneObserverCalloutsForScene:(id)a0 eventName:(id)a1 withBlock:(id /* block */)a2;
- (id)createSceneWithIdentifier:(id)a0 parameters:(id)a1 clientProvider:(id)a2 transitionContext:(id)a3;
- (id)createSceneWithDefinition:(id)a0 initialParameters:(id)a1;
- (id)sceneWithIdentifier:(id)a0;
- (void)_executeEventWhenIdle:(id)a0;
- (void)_applyMutableSettings:(id)a0 toScene:(id)a1 withTransitionContext:(id)a2 completion:(id /* block */)a3;
- (void)scene:(id)a0 handleUpdateToSettings:(id)a1 withTransitionContext:(id)a2 completion:(id /* block */)a3;
- (id)scenesMatchingPredicate:(id)a0;
- (void)scene:(id)a0 enumerateAndCalloutToObserversWithEventName:(id)a1 block:(id /* block */)a2;
- (void)_updateScene:(id)a0 withSettings:(id)a1 transitionContext:(id)a2 completion:(id /* block */)a3;
- (void)_enqueueSceneManagerObserverCalloutsForScene:(id)a0 eventName:(id)a1 withBlock:(id /* block */)a2;
- (void)_enqueueObserverCalloutsForScene:(id)a0 eventName:(id)a1 sceneObserverBlock:(id /* block */)a2 sceneManagerObserverBlock:(id /* block */)a3;
- (id)sceneFromIdentityToken:(id)a0;
- (void)_beginSynchronizationBlock;
- (id)scenesPassingTest:(id /* block */)a0;
- (void)_endSynchronizationBlock;
- (BOOL)_isSynchronizingSceneUpdates;
- (void)enumerateScenesWithBlock:(id /* block */)a0;
- (void)_enqueueEventForScene:(id)a0 withName:(id)a1 block:(id /* block */)a2;
- (void)_enqueueSceneManagerInternalObserverCalloutsForScene:(id)a0 eventName:(id)a1 withBlock:(id /* block */)a2;
- (id)_createSceneWithDefinition:(id)a0 settings:(id)a1 initialClientSettings:(id)a2 transitionContext:(id)a3 fromRemnant:(id)a4 usingClientProvider:(id)a5 completion:(id /* block */)a6;
- (void)destroyScene:(id)a0 withTransitionContext:(id)a1;
- (id)newSceneIdentityTokenForIdentity:(id)a0;

@end
