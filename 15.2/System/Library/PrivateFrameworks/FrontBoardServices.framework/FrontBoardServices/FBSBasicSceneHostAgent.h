@class NSString;

@interface FBSBasicSceneHostAgent : FBSBasicSceneAgent <FBSSceneHostAgent>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)scene:(id)a0 willInvalidateWithEvent:(id)a1 completion:(id /* block */)a2;
- (void)scene:(id)a0 didInitializeWithEvent:(id)a1 completion:(id /* block */)a2;

@end
