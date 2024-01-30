@class PKCurrencyAmount;

@interface PKMockPeerPaymentController : PKPeerPaymentController {
    id _performCompletion;
}

@property (retain, nonatomic) PKCurrencyAmount *mockBalance;
@property (nonatomic) BOOL shouldGenerateMockTransactions;

- (void).cxx_destruct;
- (void)quoteWithAmount:(id)a0 requestToken:(id)a1 alternateFundingSource:(id)a2 completion:(id /* block */)a3;
- (void)paymentAuthorizationCoordinator:(id *)a0 didSelectPaymentMethod:(id)a1 handler:(id /* block */)a2;
- (void)_adjustBalanceForAuthorizedTransferQuote:(id)a0;
- (void)_insertPaymentTransactionForSecondaryFundingSourceIfNecessary:(id)a0;
- (void)_insertPeerPaymentTransactionForAuthroizedTransferQuote:(id)a0;
- (id)_quoteItemDictionaryWithType:(unsigned long long)a0 amount:(id)a1 alternateFundingSource:(id)a2 featureDescriptor:(id)a3;
- (void)formalRequestTokenForAmount:(id)a0 completion:(id /* block */)a1;
- (void)identifyRecipientWithAddress:(id)a0 senderAddress:(id)a1 completion:(id /* block */)a2;
- (id)initWithPeerPaymentWebService:(id)a0;
- (void)paymentAuthorizationCoordinator:(id *)a0 didAuthorizePeerPaymentQuote:(id)a1 handler:(id /* block */)a2;
- (void)performAction:(id)a0 withPaymentIdentifier:(id)a1 completion:(id /* block */)a2;

@end
