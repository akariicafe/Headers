@class NSString, PXAssetActionPerformer;

@interface PUPXAssetActionPerformer : PUAssetActionPerformer <PXActionPerformerDelegate> {
    PXAssetActionPerformer *_underlyingActionPerformer;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)actionPerformer:(id)a0 didChangeState:(unsigned long long)a1;
- (id)initWithActionType:(unsigned long long)a0 assets:(id)a1 orAssetsByAssetCollection:(id)a2;
- (void).cxx_destruct;
- (void)performWithCompletionHandler:(id /* block */)a0;
- (id)initWithUnderlyingActionPerformer:(id)a0;
- (BOOL)actionPerformer:(id)a0 dismissViewController:(id)a1 completionHandler:(id /* block */)a2;
- (BOOL)actionPerformer:(id)a0 presentViewController:(id)a1;
- (unsigned long long)state;

@end
