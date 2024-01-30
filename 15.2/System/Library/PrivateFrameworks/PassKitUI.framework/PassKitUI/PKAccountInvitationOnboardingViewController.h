@class PKAccountInvitationController;

@interface PKAccountInvitationOnboardingViewController : PKExplanationViewController {
    PKAccountInvitationController *_controller;
    BOOL _didBeginOnboardingSubject;
}

- (void)viewDidLoad;
- (void)viewDidDisappear:(BOOL)a0;
- (void)_beginReportingIfNecessary;
- (void).cxx_destruct;
- (void)viewDidAppear:(BOOL)a0;
- (id)initWithController:(id)a0;
- (void)explanationViewDidSelectContinue:(id)a0;
- (void)_endReportingIfNecessary;
- (void)_reportContinueTapped;

@end
