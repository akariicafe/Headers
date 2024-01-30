@class RTDefaultsManager, PKUsageNotificationClient;

@interface RTWalletManager : RTService

@property (retain, nonatomic) RTDefaultsManager *defaultsManager;
@property (nonatomic) double maximumTransactionDistance;
@property (retain, nonatomic) PKUsageNotificationClient *passKitClient;

+ (long long)passUseSourceFromUsageNotificationSource:(long long)a0;

- (void)internalRemoveObserver:(id)a0 name:(id)a1;
- (void)internalAddObserver:(id)a0 name:(id)a1;
- (void)_unregisterForNotifications;
- (void)_registerForNotifications;
- (void)_setup;
- (void)_unregisterPaymentUseCallbacks;
- (void)_shutdownWithHandler:(id /* block */)a0;
- (void)_registerPaymentUseCallbacks;
- (void)_unregisterPassUseCallbacks;
- (void)_paymentMadeWithIdentifier:(id)a0 transactionIdentifier:(id)a1 info:(id)a2;
- (void)_registerPassUseCallbacks;
- (void).cxx_destruct;
- (void)_passUsedWithTypeIdentifier:(id)a0 source:(long long)a1 info:(id)a2;
- (id)init;
- (id)initWithDefaultsManager:(id)a0;
- (void)updateDoubleForKey:(id)a0 handler:(id /* block */)a1;
- (void)onDefaultsUpdate:(id)a0;
- (void)paymentMadeWithIdentifier:(id)a0 transactionIdentifier:(id)a1 info:(id)a2;
- (void)passUsedWithTypeIdentifier:(id)a0 source:(long long)a1 info:(id)a2;

@end
