@class PKPaymentWebService, NSMutableDictionary;

@interface PKPassUpgradeControllerBase : NSObject {
    id /* block */ _addPaymentPassToLibrary;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _pass_upgrade_lock;
    NSMutableDictionary *_pendingPassUpgrades;
}

@property (retain, nonatomic) PKPaymentWebService *paymentWebService;

- (id)init;
- (void).cxx_destruct;
- (void)appletsDidUpdate;
- (void)completePassUpgradeForPassUniqueID:(id)a0 withError:(id)a1;
- (void)downloadUpgradedPassForPassUniqueID:(id)a0 atURL:(id)a1;
- (id)initWithWebService:(id)a0 addPaymentPassToLibrary:(id /* block */)a1;
- (void)requestPassUpgrade:(id)a0 pass:(id)a1 diagnosticReason:(id)a2 completion:(id /* block */)a3;

@end
