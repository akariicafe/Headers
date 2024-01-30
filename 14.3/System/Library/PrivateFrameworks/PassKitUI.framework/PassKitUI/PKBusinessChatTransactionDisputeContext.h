@class NSString, PKPaymentTransaction, PKPaymentPass;

@interface PKBusinessChatTransactionDisputeContext : NSObject <PKBusinessChatContext> {
    PKPaymentPass *_paymentPass;
    PKPaymentTransaction *_transaction;
    long long _intent;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)requiresAuthorization;
- (id)bodyText;
- (void).cxx_destruct;
- (id)businessIdentifier;
- (id)intentParameters;
- (id)groupParameters;
- (id)initWithPaymentPass:(id)a0 transaction:(id)a1 intent:(long long)a2;

@end
