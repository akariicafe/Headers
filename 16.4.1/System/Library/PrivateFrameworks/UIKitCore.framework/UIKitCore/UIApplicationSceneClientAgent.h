@interface UIApplicationSceneClientAgent : FBSBasicSceneClientAgent

- (void)scene:(id)a0 willInvalidateWithEvent:(id)a1 completion:(id /* block */)a2;
- (void)scene:(id)a0 didInitializeWithEvent:(id)a1 completion:(id /* block */)a2;
- (void)scene:(id)a0 handleEvent:(id)a1 withCompletion:(id /* block */)a2;
- (void)dealloc;
- (id)init;

@end
