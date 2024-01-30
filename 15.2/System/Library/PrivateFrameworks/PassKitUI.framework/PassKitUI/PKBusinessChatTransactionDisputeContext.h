@class PKPaymentPass, NSString, PKAccountUser, PKFamilyMember, PKPaymentTransaction, PKAccount;

@interface PKBusinessChatTransactionDisputeContext : NSObject <PKBusinessChatContext> {
    PKPaymentPass *_paymentPass;
    PKPaymentTransaction *_transaction;
    PKAccount *_account;
    PKAccountUser *_accountUser;
    PKFamilyMember *_familyMember;
    long long _intent;
    BOOL _disputingAccountUserTransaction;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)requiresAuthorization;
- (void).cxx_destruct;
- (id)bodyText;
- (id)businessIdentifier;
- (id)intentParameters;
- (id)groupParameters;
- (id)initWithPaymentPass:(id)a0 transaction:(id)a1 account:(id)a2 accountUser:(id)a3 familyMember:(id)a4 intent:(long long)a5;

@end
