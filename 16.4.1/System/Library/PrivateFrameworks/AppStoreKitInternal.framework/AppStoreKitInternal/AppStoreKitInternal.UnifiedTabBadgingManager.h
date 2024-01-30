@interface AppStoreKitInternal.UnifiedTabBadgingManager : NSObject <ASDAppStoreChangedObserver> {
    void /* unknown type, empty encoding */ appStoreBadgingService;
    void /* unknown type, empty encoding */ rootActionHandler;
}

- (id)init;
- (void).cxx_destruct;
- (void)service:(id)a0 didAddBadges:(id)a1;
- (void)service:(id)a0 didRemoveBadges:(id)a1;

@end
