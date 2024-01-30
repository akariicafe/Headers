@class PKPayLaterFinancingPlan, NSString, PKPayLaterPayment, PKPayLaterBusinessChatTopic, PKPayLaterBusinessChatTopicExplanationSectionController, PKPayLaterInstallment, PKBusinessChatController, PKPaymentPass, PKPayLaterDynamicContentPage;

@interface PKPayLaterBusinessChatTopicExplanationViewController : PKPayLaterViewController <PKPayLaterSectionControllerDelegate> {
    PKPayLaterFinancingPlan *_financingPlan;
    PKPaymentPass *_payLaterPass;
    PKPayLaterInstallment *_installment;
    PKPayLaterPayment *_payment;
    PKPayLaterBusinessChatTopic *_topic;
    PKPayLaterBusinessChatTopicExplanationSectionController *_sectionController;
    PKBusinessChatController *_businessChatController;
    PKPayLaterDynamicContentPage *_dynamicContentPage;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)viewDidLoad;
- (void).cxx_destruct;
- (id)pageTag;
- (void)_cancelTapped;
- (void)_openBusinessChat;
- (id)additionalAnalyticsDictionary;
- (BOOL)disablesAutomaticDismissalUponEnteringBackground;
- (id)initWithPayLaterAccount:(id)a0 payLaterPass:(id)a1 financingPlan:(id)a2 installment:(id)a3 payment:(id)a4 topic:(id)a5 dynamicContent:(id)a6;

@end
