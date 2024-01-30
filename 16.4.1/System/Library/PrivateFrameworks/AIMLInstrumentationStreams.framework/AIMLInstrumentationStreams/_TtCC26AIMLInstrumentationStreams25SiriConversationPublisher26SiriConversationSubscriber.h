@interface _TtCC26AIMLInstrumentationStreams25SiriConversationPublisher26SiriConversationSubscriber : NSObject <BPSSubscriber> {
    void /* unknown type, empty encoding */ downstream;
    void /* unknown type, empty encoding */ lastReceivedTimestamp;
    void /* unknown type, empty encoding */ graphBuilder;
    void /* unknown type, empty encoding */ upstreamFinished;
}

- (long long)receiveInput:(id)a0;
- (void)receiveCompletion:(id)a0;
- (void)receiveSubscription:(id)a0;
- (void)cancel;
- (id)init;
- (void).cxx_destruct;

@end
