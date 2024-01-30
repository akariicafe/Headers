@class PKXPCService;

@interface PKUsageNotificationClient : NSObject <PKUsageNotificationClientExportedInterface> {
    PKXPCService *_connection;
    id /* block */ _handler;
    id /* block */ _paymentHandler;
}

- (id)init;
- (void).cxx_destruct;
- (void)setPassUsageHandler:(id /* block */)a0;
- (void)usedPassFromSource:(long long)a0 withTypeIdentifier:(id)a1 info:(id)a2;
- (void)usedPaymentPassWithUniqueIdentifier:(id)a0 transactionIdentifier:(id)a1 info:(id)a2;
- (void)setPaymentUsageHandler:(id /* block */)a0;

@end
