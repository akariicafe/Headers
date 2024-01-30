@class PKPaymentPass, NSString, PKPayLaterReviewPlanSectionController, PKPayLaterFinancingOption;

@interface PKPayLaterReviewPlanViewController : PKPayLaterSetupViewController <PKPayLaterReviewPlanSectionControllerDelegate, PKPayLaterSectionControllerDelegate> {
    PKPaymentPass *_selectedFundingSource;
    PKPayLaterReviewPlanSectionController *_sectionController;
    PKPayLaterFinancingOption *_selectedFinancingOption;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)viewDidLoad;
- (void).cxx_destruct;
- (void)_createDockView;
- (id)pageTag;
- (id)initWithSetupFlowController:(id)a0;
- (void)nextButtonTapped;

@end
