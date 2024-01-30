@class PKPayLaterFinancingPlan, PKPayLaterPayment, NSArray, PKAccountService, PKPayLaterIconTextRow, PKPayLaterInstallment, PKPaymentTransactionIconGenerator, PKPaymentPass;
@protocol PKPayLaterBusinessChatTopicsSectionControllerDelegate;

@interface PKPayLaterBusinessChatTopicsSectionController : PKPayLaterSectionController {
    id<PKPayLaterBusinessChatTopicsSectionControllerDelegate> _delegate;
    PKPaymentPass *_payLaterPass;
    PKPayLaterFinancingPlan *_financingPlan;
    PKPayLaterInstallment *_installment;
    PKPayLaterPayment *_payment;
    NSArray *_topics;
    NSArray *_topicsRows;
    PKPaymentTransactionIconGenerator *_iconGenerator;
    PKPayLaterIconTextRow *_iconTextRow;
    PKAccountService *_accountService;
    unsigned long long _businessChatContext;
}

- (id)identifiers;
- (void).cxx_destruct;
- (void)_configureFinancingPlanSection:(id)a0;
- (void)_configureTopicsSection:(id)a0;
- (void)_financingPlansForTopic:(id)a0 completion:(id /* block */)a1;
- (void)_handleTopicRowTapped:(id)a0 topic:(id)a1;
- (void)_showListOfFinancingPlansForRow:(id)a0 topic:(id)a1;
- (void)_showTopicExplanationForRow:(id)a0 topic:(id)a1;
- (void)_updateIconForFinancingPlan:(id)a0;
- (id)headerAttributedStringForIdentifier:(id)a0;
- (id)initWithPayLaterAccount:(id)a0 payLaterPass:(id)a1 financingPlan:(id)a2 installment:(id)a3 payment:(id)a4 topics:(id)a5 businessChatContext:(unsigned long long)a6 delegate:(id)a7;
- (id)layoutWithLayoutEnvironment:(id)a0 sectionIdentifier:(id)a1;
- (id)snapshotWithPreviousSnapshot:(id)a0 forSectionIdentifier:(id)a1;

@end
