@interface PassKitUI.AccountDailyCash : NSObject <PKDashboardTransactionFetcherDelegate> {
    void /* unknown type, empty encoding */ _amount;
    void /* unknown type, empty encoding */ date;
    void /* unknown type, empty encoding */ transactionFetcher;
    void /* unknown type, empty encoding */ source;
    void /* unknown type, empty encoding */ account;
}

- (id)init;
- (void).cxx_destruct;
- (void)transactionsChanged:(id)a0;

@end
