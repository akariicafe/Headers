@interface FinanceDaemon.WalletMessagingProvider : NSObject <PDApplicationMessageProvider> {
    void /* unknown type, empty encoding */ messageSink;
    void /* unknown type, empty encoding */ coreDataStore;
}

+ (id)makeProvider;

- (void)applicationMessageSink:(id)a0 removedMessageWithRegistration:(id)a1;
- (void)applicationMessageSink:(id)a0 tappedMessageWithRegistration:(id)a1;
- (id)applicationMessageSink:(id)a0 createContentForMessageWithRegistration:(id)a1;
- (void)connectApplicationMessageSink:(id)a0;
- (id)init;
- (void)processMessagesWithCompletionHandler:(void (^)(void))a0;
- (void).cxx_destruct;

@end
