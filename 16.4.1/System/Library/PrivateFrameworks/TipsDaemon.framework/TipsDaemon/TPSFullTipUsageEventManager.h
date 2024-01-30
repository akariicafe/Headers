@interface TPSFullTipUsageEventManager : NSObject {
    void /* unknown type, empty encoding */ tipIDToContextualInfoMap;
    void /* unknown type, empty encoding */ queue;
    void /* unknown type, empty encoding */ initialized;
}

- (id)contextualInfoMap;
- (id)contextualInfoForIdentifier:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (void)removeUsageEventCache;
- (void)updateContextualInfoForIdentifiers:(id)a0 tipsDeliveryInfoMap:(id)a1 deliveryInfoMap:(id)a2;

@end
