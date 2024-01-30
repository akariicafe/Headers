@interface NewsUI2.FamilySharingDetectionManager : NSObject <FCBundleSubscriptionChangeObserver> {
    void /* unknown type, empty encoding */ delegate;
    void /* unknown type, empty encoding */ configurationManager;
    void /* unknown type, empty encoding */ bundleSubscriptionManager;
}

- (void)bundleSubscriptionDidExpire:(id)a0;
- (void)bundleSubscriptionDidSubscribe:(id)a0;
- (id)init;
- (void).cxx_destruct;

@end
