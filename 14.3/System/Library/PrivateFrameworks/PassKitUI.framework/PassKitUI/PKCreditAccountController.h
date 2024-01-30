@interface PKCreditAccountController : PKAccountFlowController

+ (BOOL)_shouldDisplayBalanceForAccount:(id)a0;
+ (BOOL)_shouldDisplayBalanceAndTransactionsForTransactionSource:(id)a0;
+ (BOOL)_shouldDisplayTransactionsForAccount:(id)a0;
+ (id)relevantScheduledPaymentFromScheduledPayments:(id)a0 account:(id)a1;
+ (void)resolutionToReceiveCashbackForAccount:(id)a0 withPeerPaymentAccount:(id)a1 completion:(id /* block */)a2;
+ (BOOL)shouldDisplayAccountInformationForTransactionSource:(id)a0 withAccount:(id)a1;
+ (BOOL)shouldDisplayTransactionsForTransactionSource:(id)a0 withAccount:(id)a1;
+ (unsigned long long)paymentEducationStateForAccount:(id)a0 mostRecentTransactions:(id)a1 upcomingScheduledPayments:(id)a2;

@end
