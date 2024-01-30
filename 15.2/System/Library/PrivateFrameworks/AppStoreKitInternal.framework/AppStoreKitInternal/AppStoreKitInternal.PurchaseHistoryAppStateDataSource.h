@interface AppStoreKitInternal.PurchaseHistoryAppStateDataSource : NSObject {
    void /* unknown type, empty encoding */ delegate;
    void /* unknown type, empty encoding */ accessQueue;
    void /* unknown type, empty encoding */ callbackQueue;
    void /* unknown type, empty encoding */ expectedAppStates;
    void /* unknown type, empty encoding */ lastAccountId;
    void /* unknown type, empty encoding */ additionalFamilyMembers;
    void /* unknown type, empty encoding */ purchaseHistory;
    void /* unknown type, empty encoding */ hasRequestedPurchaseHistoryUpdate;
    void /* unknown type, empty encoding */ purchaseHistoryContext;
}

- (void).cxx_destruct;
- (id)init;
- (void)dealloc;
- (void)accountsDidChange;
- (void)purchaseHistoryUpdated:(id)a0;

@end
