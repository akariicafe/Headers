@class NSString, FBSceneManagerObserver, NSMutableDictionary, FBSceneEventQueue, FBSMutableSceneDefinition, NSMutableArray, NSMutableOrderedSet, NSMapTable;
@protocol FBSceneWorkspaceDelegate;

@interface FBSceneWorkspace : NSObject <FBSceneCreating, FBSceneEventQueueDelegate, FBSceneEventCoordinating, BSDescriptionProviding> {
    FBSceneManagerObserver *_delegate;
    NSMutableOrderedSet *_observers;
    NSMutableDictionary *_allScenesByID;
    NSMapTable *_providerToScenesMap;
    FBSceneEventQueue *_eventQueue;
    NSMutableArray *_pendingIdleEvents;
    unsigned long long _synchronizationBlockDepth;
    FBSMutableSceneDefinition *_buildingDefinition;
    BOOL _invalidated;
    BOOL _supportsLegacy;
}

@property (readonly, copy, nonatomic) NSString *identifier;
@property (weak, nonatomic) id<FBSceneWorkspaceDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)sceneWithIdentifier:(id)a0;
- (id)initWithIdentifier:(id)a0;
- (id)createSceneWithDefinition:(id)a0;
- (id)allScenes;
- (void)setClientIdentity:(id)a0;
- (id)descriptionBuilderWithMultilinePrefix:(id)a0;
- (void)setSpecification:(id)a0;
- (void)scene:(id)a0 didUpdateClientSettingsWithDiff:(id)a1 oldClientSettings:(id)a2 transitionContext:(id)a3;
- (id)createScene:(id /* block */)a0;
- (id)succinctDescription;
- (void)eventQueueDidUnlock:(id)a0;
- (void)setDelegate:(id)a0;
- (void)scene:(id)a0 didReceiveActions:(id)a1;
- (void)eventQueueDidDrain:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (id)delegate;
- (void)scene:(id)a0 deactivateAndInvalidate:(BOOL)a1 withError:(id)a2 block:(id /* block */)a3;
- (id)descriptionWithMultilinePrefix:(id)a0;
- (void)scene:(id)a0 handleUpdateToSettings:(id)a1 withTransitionContext:(id)a2 completion:(id /* block */)a3;
- (id)succinctDescriptionBuilder;
- (void)invalidate;
- (void)dealloc;
- (void)scene:(id)a0 enumerateAndCalloutToObserversWithEventName:(id)a1 block:(id /* block */)a2;
- (void)setIdentifier:(id)a0;

@end
