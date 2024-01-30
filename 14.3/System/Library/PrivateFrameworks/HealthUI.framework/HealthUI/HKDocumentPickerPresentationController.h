@class UIWindow, _UIAsyncInvocation, NSString, HKHealthPrivacyHostDocumentPickerViewController;

@interface HKDocumentPickerPresentationController : NSObject <HKHealthPrivacyHostDocumentPickerViewControllerDelegate, _HKDocumentPickerPresentationController>

@property (retain, nonatomic) _UIAsyncInvocation *requestCancellationInvocation;
@property (retain, nonatomic) HKHealthPrivacyHostDocumentPickerViewController *hostViewController;
@property (retain, nonatomic) UIWindow *savedKeyWindow;
@property (retain, nonatomic) UIWindow *window;
@property (nonatomic) BOOL didPresent;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)dealloc;
- (void)cancelPresentation;
- (void)presentWithSession:(id)a0 completion:(id /* block */)a1;
- (void)_presentWithPromptSession:(id)a0 completion:(id /* block */)a1;
- (void)_dismissViewControllerAnimated:(BOOL)a0;
- (void)_presentRemoteViewController:(id)a0;
- (void)_requestAndConfigureHostViewController:(id /* block */)a0 completion:(id /* block */)a1;
- (void)_didFinishDismissing;
- (void)healthPrivacyHostDocumentPickerViewController:(id)a0 didFinishWithError:(id)a1;

@end
