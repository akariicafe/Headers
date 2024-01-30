@class NSString, NSMutableSet, NSMutableDictionary;

@interface SBFSceneWorkspaceDefaultDelegate : NSObject <SBFSceneWorkspaceControllerDelegate> {
    NSMutableSet *_scenesActivatedUponClientConnection;
    NSMutableSet *_scenesKeptActiveWhileForeground;
    NSMutableDictionary *_scenesWithActivationContextGeneratorBlock;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)sceneDidActivate:(id)a0;
- (void)workspace:(id)a0 clientDidConnectWithHandshake:(id)a1;
- (void)workspace:(id)a0 didAddScene:(id)a1;
- (void)workspace:(id)a0 willRemoveScene:(id)a1;
- (void)sceneContentStateDidChange:(id)a0;
- (void)sceneDidDeactivate:(id)a0 withError:(id)a1;
- (id)init;
- (void).cxx_destruct;
- (void)_activateScene:(id)a0;
- (void)_cleanupTransitionContextGeneratorBlockForSceneIfNeeded:(id)a0;
- (void)_setScene:(id)a0 activatesWithTransitionContextGeneratorBlock:(id /* block */)a1;
- (void)_setScene:(id)a0 cached:(BOOL)a1 inContainer:(id)a2 withContextGenerator:(id /* block */)a3;
- (void)setScene:(id)a0 shouldActivateUponClientConnection:(BOOL)a1 withContextGenerator:(id /* block */)a2;
- (void)setScene:(id)a0 shouldBeKeptActiveWhileForeground:(BOOL)a1 withContextGenerator:(id /* block */)a2;

@end
