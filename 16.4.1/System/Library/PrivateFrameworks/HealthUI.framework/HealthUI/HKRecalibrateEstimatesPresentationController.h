@class NSString, HKHealthPrivacyHostRecalibrateEstimatesViewController, _UIAsyncInvocation;

@interface HKRecalibrateEstimatesPresentationController : NSObject <HKHealthPrivacyHostRecalibrateEstimatesControllerDelegate, _HKRecalibrateEstimatesPresentationController>

@property (retain, nonatomic) _UIAsyncInvocation *requestCancellationInvocation;
@property (retain, nonatomic) HKHealthPrivacyHostRecalibrateEstimatesViewController *hostViewController;
@property (nonatomic) BOOL didPresent;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (void).cxx_destruct;
- (void)presentWithRequestRecord:(id)a0 completion:(id /* block */)a1;
- (void)_dismissViewControllerAnimated:(BOOL)a0;
- (void)_makeRemoteViewControllerVisible:(id)a0;
- (void)_requestAndConfigureHostViewController:(id /* block */)a0 completion:(id /* block */)a1;
- (void)healthPrivacyHostRecalibrateEstimatesControllerDidFinishWithError:(id)a0;

@end
