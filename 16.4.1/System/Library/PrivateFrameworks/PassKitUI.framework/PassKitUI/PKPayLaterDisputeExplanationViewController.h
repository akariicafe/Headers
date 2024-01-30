@class PKBusinessChatController, PKPayLaterDisputeExplanationSectionController, PKPaymentPass, PKPayLaterFinancingPlan, PKPayLaterDynamicContentPage, PKPayLaterFinancingPlanDispute;

@interface PKPayLaterDisputeExplanationViewController : PKPayLaterViewController {
    PKPayLaterFinancingPlan *_financingPlan;
    PKPayLaterFinancingPlanDispute *_dispute;
    PKPayLaterDisputeExplanationSectionController *_sectionController;
    PKPayLaterDynamicContentPage *_dynamicContentPage;
    unsigned long long _layout;
    PKBusinessChatController *_businessChatController;
    PKPaymentPass *_payLaterPass;
}

+ (id)dynamicContentPageForEvidenceRequiredForDispute:(id)a0;

- (void)viewDidLoad;
- (void).cxx_destruct;
- (void)_resendEmailTapped;
- (void)_showSpinner:(BOOL)a0;
- (id)initWithFinancingPlan:(id)a0 dispute:(id)a1 payLaterAccount:(id)a2 payLaterPass:(id)a3 layout:(unsigned long long)a4 dynamicContentPage:(id)a5;

@end
