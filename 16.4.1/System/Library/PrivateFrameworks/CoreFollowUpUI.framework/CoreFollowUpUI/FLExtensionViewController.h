@class NSString, NSExtensionContext;

@interface FLExtensionViewController : UIViewController <NSExtensionRequestHandling, FLExtensionRemoteContextInterface> {
    NSExtensionContext *_context;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)_exportedInterface;
+ (id)_remoteViewControllerInterface;

- (void)finishProcessing;
- (void)viewDidAppear:(BOOL)a0;
- (void).cxx_destruct;
- (void)beginRequestWithExtensionContext:(id)a0;
- (void)followUpPerformUpdateWithCompletionHandler:(id /* block */)a0;
- (void)processFollowUpItem:(id)a0 selectedAction:(id)a1 completion:(id /* block */)a2;
- (id)hostInterface;
- (void)finishProcessingWithUserInfo:(id)a0;
- (id)syncHostInterface;

@end
