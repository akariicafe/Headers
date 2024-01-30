@class NSString, UIViewController;

@interface ILClassificationReportingController : NSObject <MFMessageComposeViewControllerDelegate>

@property (readonly, weak, nonatomic) UIViewController *hostViewController;
@property (copy, nonatomic) id /* block */ completion;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void).cxx_destruct;
- (void)messageComposeViewController:(id)a0 didFinishWithResult:(long long)a1;
- (id)initWithHostViewController:(id)a0;
- (void)reportResponse:(id)a0 forExtension:(id)a1 withCompletion:(id /* block */)a2;
- (void)reportResponseViaNetwork:(id)a0 forExtension:(id)a1 withCompletion:(id /* block */)a2;
- (void)reportResponseViaSMS:(id)a0 forExtension:(id)a1 withCompletion:(id /* block */)a2;

@end
