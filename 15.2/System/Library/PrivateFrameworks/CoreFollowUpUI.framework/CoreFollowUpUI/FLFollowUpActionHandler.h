@class NSString, FLViewExtensionLoader, UIViewController;

@interface FLFollowUpActionHandler : FLHeadlessActionHandler <FLExtensionHostContextInterface> {
    FLViewExtensionLoader *_extensionLoader;
    UIViewController *_remoteViewController;
    id /* block */ _completionHandler;
}

@property (copy, nonatomic) id /* block */ extensionRequestedViewControllerPresentation;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)_extensionLoader;
- (void).cxx_destruct;
- (void)dealloc;
- (void)extensionDidFinishWithError:(id)a0;
- (void)handleExtensionBasedAction:(id)a0 completion:(id /* block */)a1;
- (void)extensionDidFinish;
- (void)extensionDidFinishWithUserInfo:(id)a0 completionHandler:(id /* block */)a1;
- (void)handleExtensionBasedAction:(id)a0 completionWithUserInfo:(id /* block */)a1;
- (void)extensionDidFinishWithError:(id)a0 userInfo:(id)a1 completionHandler:(id /* block */)a2;

@end
