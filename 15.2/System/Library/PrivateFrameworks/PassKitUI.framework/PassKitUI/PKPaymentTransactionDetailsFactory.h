@class PKContactResolver, PKPeerPaymentWebService;
@protocol PKPaymentDataProvider;

@interface PKPaymentTransactionDetailsFactory : NSObject {
    PKContactResolver *_contactResolver;
    PKPeerPaymentWebService *_peerPaymentWebService;
    id<PKPaymentDataProvider> _paymentServiceDataProvider;
    long long _detailViewStyle;
}

- (void).cxx_destruct;
- (id)_transactionFetcherWithTransactionSourceCollection:(id)a0 transaction:(id)a1;
- (id)initWithContactResolver:(id)a0 peerPaymentWebService:(id)a1 paymentServiceDataProvider:(id)a2 detailViewStyle:(long long)a3;
- (BOOL)canShowTransactionHistoryForTransaction:(id)a0 transactionSourceCollection:(id)a1;
- (id)detailViewControllerForTransaction:(id)a0 transactionSourceCollection:(id)a1 familyCollection:(id)a2 account:(id)a3 accountUserCollection:(id)a4;
- (id)historyViewControllerForTransaction:(id)a0 transactionSourceCollection:(id)a1 familyCollection:(id)a2 account:(id)a3 accountUserCollection:(id)a4;
- (void)historyViewControllerForTransaction:(id)a0 transactionSourceCollection:(id)a1 familyCollection:(id)a2 account:(id)a3 accountUserCollection:(id)a4 completion:(id /* block */)a5;

@end
