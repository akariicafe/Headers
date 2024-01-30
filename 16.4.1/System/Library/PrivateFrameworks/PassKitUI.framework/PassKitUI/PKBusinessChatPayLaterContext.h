@class PKPayLaterBusinessChatTopic, NSString, PKPayLaterFinancingPlan, PKPayLaterPayment, PKPayLaterFinancingPlanDispute, PKPayLaterInstallment, PKAccount, PKPaymentPass;

@interface PKBusinessChatPayLaterContext : NSObject <PKBusinessChatContext> {
    PKAccount *_payLaterAccount;
    PKPaymentPass *_paymentPass;
    PKPayLaterBusinessChatTopic *_topic;
    PKPayLaterFinancingPlan *_financingPlan;
    PKPayLaterInstallment *_installment;
    PKPayLaterPayment *_payment;
    PKPayLaterFinancingPlanDispute *_dispute;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)requiresAuthorization;
- (id)bodyText;
- (void).cxx_destruct;
- (id)groupParameters;
- (id)businessIdentifier;
- (id)initWithPayLaterAccount:(id)a0 paymentPass:(id)a1 topic:(id)a2 financingPlan:(id)a3 installment:(id)a4 payment:(id)a5 dispute:(id)a6;
- (id)intentParameters;

@end
