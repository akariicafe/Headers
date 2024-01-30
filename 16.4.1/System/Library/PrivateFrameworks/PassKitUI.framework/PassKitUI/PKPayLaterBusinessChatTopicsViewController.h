@class PKPayLaterFinancingPlan, NSString, PKPayLaterPayment, NSArray, PKPayLaterBusinessChatTopicsSectionController, PKPayLaterInstallment, PKBusinessChatController, PKPaymentPass;

@interface PKPayLaterBusinessChatTopicsViewController : PKPayLaterViewController <PKPayLaterSectionControllerDelegate, PKPayLaterBusinessChatTopicsSectionControllerDelegate> {
    PKPayLaterFinancingPlan *_financingPlan;
    PKPaymentPass *_payLaterPass;
    PKPayLaterInstallment *_installment;
    PKPayLaterPayment *_payment;
    NSArray *_topics;
    unsigned long long _businessChatContext;
    PKPayLaterBusinessChatTopicsSectionController *_sectionController;
    PKBusinessChatController *_businessChatController;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)viewDidLoad;
- (void).cxx_destruct;
- (void)_continueToChat;
- (id)pageTag;
- (void)_cancelTapped;
- (BOOL)disablesAutomaticDismissalUponEnteringBackground;
- (id)initWithPayLaterAccount:(id)a0 payLaterPass:(id)a1 financingPlan:(id)a2 installment:(id)a3 payment:(id)a4 topics:(id)a5 businessChatContext:(unsigned long long)a6;
- (void)openBusinessChatForTopic:(id)a0;

@end
