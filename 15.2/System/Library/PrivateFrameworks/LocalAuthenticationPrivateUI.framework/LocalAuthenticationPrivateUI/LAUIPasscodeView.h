@class LAContext, UIViewController;
@protocol LAUIPasscodeService, LAUIDelegate;

@interface LAUIPasscodeView : UIViewController <LAUIDelegate> {
    LAContext *_context;
    id<LAUIDelegate> _originalDelegate;
    UIViewController<LAUIPasscodeService> *_remoteVC;
    BOOL _shouldPresentUI;
    BOOL _shouldBecomeFirstResponder;
}

- (void)viewWillDisappear:(BOOL)a0;
- (id)initWithContext:(id)a0;
- (void)loadView;
- (void).cxx_destruct;
- (id)init;
- (BOOL)resignFirstResponder;
- (id)initWithCoder:(id)a0;
- (void)viewDidAppear:(BOOL)a0;
- (BOOL)becomeFirstResponder;
- (void)dealloc;
- (void)_appDidBecomeActive:(id)a0;
- (void)event:(long long)a0 params:(id)a1 reply:(id /* block */)a2;
- (void)_prepareRemoteView;
- (void)_presentRemoteView;
- (void)_appDidBecomeInactive:(id)a0;

@end
