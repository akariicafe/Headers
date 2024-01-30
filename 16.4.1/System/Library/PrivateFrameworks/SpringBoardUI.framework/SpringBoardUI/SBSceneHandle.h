@class FBSDisplayIdentity, NSString, NSMapTable, FBSSceneDefinition, FBSceneMonitor, FBScene, NSHashTable;

@interface SBSceneHandle : NSObject <FBSceneMonitorDelegate, FBSceneObserver, BSDescriptionProviding> {
    NSHashTable *_observers;
    NSMapTable *_observersToObserverBehaviors;
    NSHashTable *_actionConsumers;
}

@property (retain, nonatomic, getter=_sceneMonitor, setter=_setSceneMonitor:) FBSceneMonitor *sceneMonitor;
@property (readonly, nonatomic, getter=_definition) FBSSceneDefinition *definition;
@property (retain, nonatomic, setter=_setDisplayIdentity:) FBSDisplayIdentity *displayIdentity;
@property (nonatomic, getter=_manuallyControlsLifecycle, setter=_setManuallyControlsLifecycle:) BOOL manuallyControlsLifecycle;
@property (readonly, copy, nonatomic) NSString *sceneIdentifier;
@property (readonly, nonatomic) FBScene *scene;
@property (readonly, nonatomic) FBScene *sceneIfExists;
@property (readonly, nonatomic) long long contentState;
@property (readonly, nonatomic, getter=isContentReady) BOOL contentReady;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)_didCreateScene:(id)a0;
- (id)descriptionBuilderWithMultilinePrefix:(id)a0;
- (void)_commonInit;
- (id)succinctDescriptionBuilder;
- (void)_didDestroyScene:(id)a0;
- (void)addObserver:(id)a0;
- (void)sceneContentStateDidChange:(id)a0;
- (void)_didUpdateSettingsWithDiff:(id)a0 previousSettings:(id)a1;
- (void)_setScene:(id)a0;
- (void)dealloc;
- (id)_createMonitor;
- (BOOL)isEqual:(id)a0;
- (void)removeObserver:(id)a0;
- (id)succinctDescription;
- (id)init;
- (id)descriptionWithMultilinePrefix:(id)a0;
- (void)_didUpdateClientSettingsWithDiff:(id)a0 transitionContext:(id)a1;
- (void).cxx_destruct;
- (void)_enumerateObserversWithBlock:(id /* block */)a0;
- (void)sceneMonitor:(id)a0 sceneWasDestroyed:(id)a1;
- (void)sceneMonitor:(id)a0 pairingStatusDidChangeForExternalSceneIDs:(id)a1;
- (void)sceneMonitor:(id)a0 sceneClientSettingsDidChangeWithDiff:(id)a1 transitionContext:(id)a2;
- (void)sceneMonitor:(id)a0 sceneSettingsDidChangeWithDiff:(id)a1 previousSettings:(id)a2;
- (void)sceneMonitor:(id)a0 sceneWasCreated:(id)a1;
- (void)addActionConsumer:(id)a0;
- (void)removeActionConsumer:(id)a0;
- (id)_initWithScene:(id)a0 displayIdentity:(id)a1;
- (BOOL)_handleSceneAction:(id)a0;
- (id)_initWithDefinition:(id)a0 displayIdentity:(id)a1;
- (void)_noteReplacedWithSceneHandle:(id)a0;
- (void)_noteSceneCreated:(id)a0;
- (void)_noteSceneDestroyed:(id)a0;
- (BOOL)isPairedWithExternalSceneWithIdentifier:(id)a0;
- (void)_didUpdateContentState:(long long)a0;
- (void)_didUpdatePairingStatusForExternalSceneIdentifiers:(id)a0;
- (id)_initWithDefinition:(id)a0 scene:(id)a1 displayIdentity:(id)a2;

@end
