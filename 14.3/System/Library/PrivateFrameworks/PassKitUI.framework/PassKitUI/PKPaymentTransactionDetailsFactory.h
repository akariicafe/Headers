@class PKPeerPaymentContactResolver, PKPeerPaymentWebService;
@protocol PKPaymentDataProvider;

@interface PKPaymentTransactionDetailsFactory : NSObject {
    PKPeerPaymentContactResolver *_contactResolver;
    PKPeerPaymentWebService *_peerPaymentWebService;
    id<PKPaymentDataProvider> _paymentServiceDataProvider;
    long long _detailViewStyle;
}

- (void).cxx_destruct;
- (id)_transactionFetcherWithTransactionSource:(id)a0 transaction:(id)a1;
- (BOOL)canShowTransactionHistoryForTransaction:(id)a0 transactionSource:(id)a1;
- (id)initWithContactResolver:(id)a0 peerPaymentWebService:(id)a1 paymentServiceDataProvider:(id)a2 detailViewStyle:(long long)a3;
- (id)detailViewControllerForTransaction:(id)a0 transactionSource:(id)a1 account:(id)a2;
- (id)historyViewControllerForTransaction:(id)a0 transactionSource:(id)a1 account:(id)a2;
- (void)historyViewControllerForTransaction:(id)a0 transactionSource:(id)a1 account:(id)a2 completion:(id /* block */)a3;

@end
