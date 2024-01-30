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

- (void)accountsDidChange;
- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)purchaseHistoryUpdated:(id)a0;

@end
