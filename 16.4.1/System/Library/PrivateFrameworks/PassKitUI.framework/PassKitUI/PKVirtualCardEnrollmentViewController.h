@class NSString, PKHeroCardExplainationHeaderView, PKPaymentPass;
@protocol PKVirtualCardEnrollmentViewControllerDelegate;

@interface PKVirtualCardEnrollmentViewController : PKExplanationViewController <PKExplanationViewDelegate, PKExplanationViewControllerDelegate, PKPaymentAuthorizationViewControllerDelegate> {
    PKHeroCardExplainationHeaderView *_heroCardView;
    BOOL _didBeginPassManagementSubject;
}

@property (retain, nonatomic) PKPaymentPass *paymentPass;
@property (nonatomic) long long state;
@property (weak, nonatomic) id<PKVirtualCardEnrollmentViewControllerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (void)viewDidLoad;
- (void)viewWillDisappear:(BOOL)a0;
- (void).cxx_destruct;
- (void)loadView;
- (void)_beginReportingIfNecessary;
- (void)paymentAuthorizationViewController:(id)a0 didAuthorizePayment:(id)a1 handler:(id /* block */)a2;
- (void)paymentAuthorizationViewControllerDidFinish:(id)a0;
- (void)_endReportingIfNecessary;
- (void)explanationViewControllerDidSelectCancel:(id)a0;
- (void)explanationViewDidSelectContinue:(id)a0;
- (void)explanationViewDidSelectSetupLater:(id)a0;
- (id)initWithPaymentPass:(id)a0 context:(long long)a1 delegate:(id)a2;
- (void)passDidNotUpdateInTime;
- (void)passDidUpdate;
- (void)receivedPassUpdatedNotification:(id)a0;
- (void)waitForPassToUpdate;

@end
