@class NSArray, PKSecureElementPass;
@protocol PKPaymentWebServiceTargetDeviceProtocol;

@interface PKPaymentSetupMoreInfoViewController : PKExplanationViewController {
    BOOL _didBeginReportingSubject;
    long long _reportingSource;
}

@property (readonly, retain, nonatomic) PKSecureElementPass *pass;
@property (readonly, retain, nonatomic) NSArray *moreInfoItems;
@property (readonly, nonatomic) id<PKPaymentWebServiceTargetDeviceProtocol> targetDevice;
@property (copy, nonatomic) id /* block */ dismissalHandler;
@property (nonatomic) BOOL isFinalViewController;

- (long long)preferredStatusBarStyle;
- (void)viewDidDisappear:(BOOL)a0;
- (void)viewDidAppear:(BOOL)a0;
- (void).cxx_destruct;
- (void)loadView;
- (void)_next;
- (id)_currentItem;
- (struct CGSize { double x0; double x1; })_snapshotSize;
- (unsigned long long)edgesForExtendedLayout;
- (void)_beginReportingIfNecessary;
- (id)_nextItems;
- (void)_alternateActionWithCompletion:(id /* block */)a0;
- (void)_endReportingIfNecessary;
- (void)_handleDismissal;
- (void)_handlePush;
- (BOOL)_isExpressEducation;
- (void)_linkTapped;
- (void)_reportDoneButtonTapped;
- (void)_reportExpressModeDisable;
- (void)_reportExpressModeEnable;
- (void)_reportTurnOffExpressButtonTapped;
- (void)_reportViewDidAppear;
- (void)_reportevent:(id)a0;
- (id)_reportingSubject;
- (void)explanationViewDidSelectBodyButton:(id)a0;
- (void)explanationViewDidSelectContinue:(id)a0;
- (void)explanationViewDidSelectSetupLater:(id)a0;
- (id)initWithMoreInfoItems:(id)a0 paymentPass:(id)a1 targetDevice:(id)a2 context:(long long)a3 dismissalHandler:(id /* block */)a4;
- (id)initWithMoreInfoItems:(id)a0 paymentPass:(id)a1 targetDevice:(id)a2 context:(long long)a3 dismissalHandler:(id /* block */)a4 reportingSource:(long long)a5;

@end
