@class PKXPCService;

@interface PKUsageNotificationClient : NSObject <PKUsageNotificationClientExportedInterface> {
    PKXPCService *_connection;
    id /* block */ _handler;
    id /* block */ _paymentHandler;
    id /* block */ _paymentPassUsageHandler;
}

- (void)usedPaymentPassWithUniqueIdentifier:(id)a0 transactionIdentifier:(id)a1 info:(id)a2;
- (void)usedPassFromSource:(long long)a0 withTypeIdentifier:(id)a1 info:(id)a2;
- (void)usedPaymentPassWithTransactionIdentifier:(id)a0 info:(id)a1;
- (void).cxx_destruct;
- (void)setPaymentPassUsageHandler:(id /* block */)a0;
- (id)init;
- (void)setPassUsageHandler:(id /* block */)a0;
- (void)setPaymentUsageHandler:(id /* block */)a0;

@end
