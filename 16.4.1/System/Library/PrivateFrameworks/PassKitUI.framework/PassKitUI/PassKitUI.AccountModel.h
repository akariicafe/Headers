@interface PassKitUI.AccountModel : NSObject <PKAccountServiceObserver, PKForegroundActiveArbiterObserver> {
    void /* unknown type, empty encoding */ _account;
    void /* unknown type, empty encoding */ _savingsDetails;
    void /* unknown type, empty encoding */ _savingsSummary;
    void /* unknown type, empty encoding */ _observableBalance;
    void /* unknown type, empty encoding */ _isNewAccount;
    void /* unknown type, empty encoding */ _expectingAccountUpdate;
    void /* unknown type, empty encoding */ accountService;
    void /* unknown type, empty encoding */ activeState;
    void /* unknown type, empty encoding */ suspendingUpdates;
    void /* unknown type, empty encoding */ pendingAccount;
}

- (void)accountRemoved:(id)a0;
- (void)accountChanged:(id)a0;
- (void)foregroundActiveArbiter:(id)a0 didUpdateForegroundActiveState:(struct { BOOL x0; BOOL x1; })a1;
- (void)dealloc;
- (id)init;
- (void).cxx_destruct;

@end
