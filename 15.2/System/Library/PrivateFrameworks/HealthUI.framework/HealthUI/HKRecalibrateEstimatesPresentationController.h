@class UIWindow, _UIAsyncInvocation, NSString, HKHealthPrivacyHostRecalibrateEstimatesViewController;

@interface HKRecalibrateEstimatesPresentationController : NSObject <HKHealthPrivacyHostRecalibrateEstimatesControllerDelegate, _HKRecalibrateEstimatesPresentationController>

@property (retain, nonatomic) _UIAsyncInvocation *requestCancellationInvocation;
@property (retain, nonatomic) HKHealthPrivacyHostRecalibrateEstimatesViewController *hostViewController;
@property (retain, nonatomic) UIWindow *savedKeyWindow;
@property (retain, nonatomic) UIWindow *window;
@property (nonatomic) BOOL didPresent;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)presentWithRequestRecord:(id)a0 completion:(id /* block */)a1;
- (void).cxx_destruct;
- (void)dealloc;
- (void)_requestAndConfigureHostViewController:(id /* block */)a0 completion:(id /* block */)a1;
- (void)_dismissRemoteViewController;
- (void)_makeRemoteViewControllerKeyAndVisible:(id)a0;
- (void)healthPrivacyHostRecalibrateEstimatesControllerDidFinishWithError:(id)a0;

@end
