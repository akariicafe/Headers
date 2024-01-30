@class NSString;

@interface MURemoteViewController : _UIRemoteViewController <MURemoteViewProtocol>

@property long long sandboxExtensionHandle;
@property BOOL shouldResignFirstResponder;
@property (copy, nonatomic) id /* block */ finishedWithResultsCompletionBlock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)serviceViewControllerInterface;
+ (id)exportedInterface;

- (void)viewDidLoad;
- (BOOL)canResignFirstResponder;
- (void)viewWillDisappear:(BOOL)a0;
- (void)motionEnded:(long long)a0 withEvent:(id)a1;
- (void).cxx_destruct;
- (BOOL)canBecomeFirstResponder;
- (void)serviceDidFinishwithResults:(id)a0 andSandboxExtension:(id)a1;
- (void)beginDismissWithInfo:(id)a0;

@end
