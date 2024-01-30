@class NSString;

@interface WFOverlayImageActionUIKitUserInterface : WFEmbeddableActionUserInterface <WFOverlayImageActionUserInterface>

@property (copy, nonatomic) id /* block */ completionHandler;
@property (readonly, nonatomic) NSString *userInterfaceType;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)cancelPresentationWithCompletionHandler:(id /* block */)a0;
- (void)finishWithFileRepresentations:(id)a0 error:(id)a1;
- (void)showWithOverlayImage:(id)a0 images:(id)a1 completionHandler:(id /* block */)a2;

@end
