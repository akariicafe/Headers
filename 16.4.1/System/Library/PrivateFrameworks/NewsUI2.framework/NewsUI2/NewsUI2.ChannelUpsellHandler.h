@interface NewsUI2.ChannelUpsellHandler : NSObject <SXPostActionHandler> {
    void /* unknown type, empty encoding */ configurationManager;
    void /* unknown type, empty encoding */ paidAccessChecker;
    void /* unknown type, empty encoding */ purchaseController;
    void /* unknown type, empty encoding */ router;
    void /* unknown type, empty encoding */ pptContext;
    void /* unknown type, empty encoding */ triggerRecord;
    void /* unknown type, empty encoding */ dateProvider;
    void /* unknown type, empty encoding */ localTracker;
    void /* unknown type, empty encoding */ postActionHandlerManager;
    void /* unknown type, empty encoding */ upsellShareClosure;
    void /* unknown type, empty encoding */ upsellCancellationClosure;
    void /* unknown type, empty encoding */ sceneProvider;
    void /* unknown type, empty encoding */ lazyKeyValueStore;
}

- (void)handledAction:(id)a0 state:(unsigned long long)a1;
- (id)init;
- (void).cxx_destruct;

@end
