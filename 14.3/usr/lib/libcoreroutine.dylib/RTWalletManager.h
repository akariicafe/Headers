@class RTDefaultsManager, PKUsageNotificationClient;

@interface RTWalletManager : RTService

@property (retain, nonatomic) RTDefaultsManager *defaultsManager;
@property (nonatomic) double maximumTransactionDistance;
@property (retain, nonatomic) PKUsageNotificationClient *passKitClient;

+ (long long)passUseSourceFromUsageNotificationSource:(long long)a0;

- (void)_shutdown;
- (void)_registerForNotifications;
- (void)_setup;
- (id)init;
- (void).cxx_destruct;
- (void)internalAddObserver:(id)a0 name:(id)a1;
- (void)internalRemoveObserver:(id)a0 name:(id)a1;
- (void)_unregisterForNotifications;
- (id)initWithDefaultsManager:(id)a0;
- (void)onDefaultsUpdate:(id)a0;
- (void)updateDoubleForKey:(id)a0 handler:(id /* block */)a1;
- (void)_unregisterPassUseCallbacks;
- (void)_unregisterPaymentUseCallbacks;
- (void)_registerPassUseCallbacks;
- (void)_registerPaymentUseCallbacks;
- (void)passUsedWithTypeIdentifier:(id)a0 source:(long long)a1 info:(id)a2;
- (void)paymentMadeWithIdentifier:(id)a0 transactionIdentifier:(id)a1 info:(id)a2;
- (void)_passUsedWithTypeIdentifier:(id)a0 source:(long long)a1 info:(id)a2;
- (void)_paymentMadeWithIdentifier:(id)a0 transactionIdentifier:(id)a1 info:(id)a2;

@end
