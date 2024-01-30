@class NSString, UIViewController, PXAssetActionPerformer;
@protocol PXActionPerformerDelegate;

@interface PUPXAssetActionPerformer : PUAssetActionPerformer <PXActionPerformerDelegate> {
    PXAssetActionPerformer *_underlyingActionPerformer;
}

@property (readonly, weak, nonatomic) id<PXActionPerformerDelegate> forwardingDelegate;
@property (retain, nonatomic) UIViewController *presentedViewController;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (unsigned long long)state;
- (id)undoManagerForActionPerformer:(id)a0;
- (BOOL)actionPerformer:(id)a0 presentViewController:(id)a1;
- (BOOL)actionPerformer:(id)a0 dismissViewController:(id)a1 completionHandler:(id /* block */)a2;
- (void).cxx_destruct;
- (void)actionPerformer:(id)a0 didChangeState:(unsigned long long)a1;
- (void)performWithCompletionHandler:(id /* block */)a0;
- (id)initWithActionType:(unsigned long long)a0 assets:(id)a1 orAssetsByAssetCollection:(id)a2;
- (id)initWithUnderlyingActionPerformer:(id)a0;

@end
