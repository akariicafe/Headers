@class PKAccount, PKTransactionSourceCollection;

@interface PKRewardsSummaryFetcher : NSObject {
    PKAccount *_account;
    PKTransactionSourceCollection *_transactionSourceCollection;
}

- (void).cxx_destruct;
- (id)_relevantTransactionSourceIdentifiers;
- (id)initWithTransactionSourceCollection:(id)a0 account:(id)a1;
- (BOOL)isPaymentPassRelevant:(id)a0;
- (BOOL)isTransactionSourceIdentifierRelevant:(id)a0;
- (void)rewardsTierSummariesWithCompletion:(id /* block */)a0;

@end
