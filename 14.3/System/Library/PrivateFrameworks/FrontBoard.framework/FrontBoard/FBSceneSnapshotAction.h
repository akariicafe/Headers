@class NSString, RBSAssertion;

@interface FBSceneSnapshotAction : FBSSceneSnapshotAction {
    RBSAssertion *_assertion;
}

@property (readonly, nonatomic) NSString *sceneID;

- (void).cxx_destruct;
- (void)dealloc;
- (id)initWithScene:(id)a0 requests:(id)a1 expirationInterval:(double)a2 responseHandler:(id /* block */)a3;

@end
