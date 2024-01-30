@interface _TtC28SiriPrivateLearningAnalyticsP33_1C28A16D52A6DDC29A328441443490A627ScanConversationsSubscriber : NSObject <BPSSubscriber> {
    void /* unknown type, empty encoding */ downstream;
    void /* unknown type, empty encoding */ currentConversation;
}

- (long long)receiveInput:(id)a0;
- (void)receiveCompletion:(id)a0;
- (void)receiveSubscription:(id)a0;
- (void)cancel;
- (id)init;
- (void).cxx_destruct;

@end
