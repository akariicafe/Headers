@class PKPaymentPass, PKPayLaterPayment, PKPayLaterBusinessChatTopic, PKPayLaterFinancingPlan, PKPayLaterInstallment;

@interface PKPayLaterBusinessChatTopicExplanationSectionController : PKPayLaterSectionController {
    PKPaymentPass *_payLaterPass;
    PKPayLaterFinancingPlan *_financingPlan;
    PKPayLaterInstallment *_installment;
    PKPayLaterPayment *_payment;
    PKPayLaterBusinessChatTopic *_topic;
}

- (id)identifiers;
- (void).cxx_destruct;
- (void)_configureDynamicSection:(id)a0 snapshot:(id)a1;
- (id)_firstSectionIdentifier;
- (void)applyHeaderConfigurationProperties:(id)a0 sectionIdentifier:(id)a1;
- (id)headerAttributedStringForIdentifier:(id)a0;
- (id)initWithPayLaterAccount:(id)a0 payLaterPass:(id)a1 financingPlan:(id)a2 installment:(id)a3 payment:(id)a4 topic:(id)a5 dynamicContentPage:(id)a6 delegate:(id)a7;
- (id)layoutWithLayoutEnvironment:(id)a0 sectionIdentifier:(id)a1;
- (id)snapshotWithPreviousSnapshot:(id)a0 forSectionIdentifier:(id)a1;

@end
