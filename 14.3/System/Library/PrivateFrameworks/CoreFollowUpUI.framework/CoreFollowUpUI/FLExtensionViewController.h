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

- (void).cxx_destruct;
- (void)beginRequestWithExtensionContext:(id)a0;
- (void)finishProcessing;
- (void)viewDidAppear:(BOOL)a0;
- (id)hostInterface;
- (void)processFollowUpItem:(id)a0 selectedAction:(id)a1 completion:(id /* block */)a2;
- (void)followUpPerformUpdateWithCompletionHandler:(id /* block */)a0;
- (id)syncHostInterface;

@end
