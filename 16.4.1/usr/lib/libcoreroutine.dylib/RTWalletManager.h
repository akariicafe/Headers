@class RTDefaultsManager, PKUsageNotificationClient;

@interface RTWalletManager : RTService

@property (retain, nonatomic) RTDefaultsManager *defaultsManager;
@property (nonatomic) double maximumTransactionDistance;
@property (retain, nonatomic) PKUsageNotificationClient *passKitClient;

+ (long long)passUseSourceFromUsageNotificationSource:(long long)a0;

- (id)initWithDefaultsManager:(id)a0;
- (void)internalRemoveObserver:(id)a0 name:(id)a1;
- (void)_registerForNotifications;
- (void)updateDoubleForKey:(id)a0 handler:(id /* block */)a1;
- (void)paymentMadeWithIdentifier:(id)a0 transactionIdentifier:(id)a1 info:(id)a2;
- (void)internalAddObserver:(id)a0 name:(id)a1;
- (void)_unregisterPaymentUseCallbacks;
- (void)_setup;
- (void)_passUsedWithTypeIdentifier:(id)a0 source:(long long)a1 info:(id)a2;
- (id)init;
- (void)onDefaultsUpdate:(id)a0;
- (void)_unregisterForNotifications;
- (void)_registerPaymentUseCallbacks;
- (void)_unregisterPassUseCallbacks;
- (void)_registerPassUseCallbacks;
- (void)_shutdownWithHandler:(id /* block */)a0;
- (void)_paymentMadeWithIdentifier:(id)a0 transactionIdentifier:(id)a1 info:(id)a2;
- (void)passUsedWithTypeIdentifier:(id)a0 source:(long long)a1 info:(id)a2;
- (void).cxx_destruct;

@end
