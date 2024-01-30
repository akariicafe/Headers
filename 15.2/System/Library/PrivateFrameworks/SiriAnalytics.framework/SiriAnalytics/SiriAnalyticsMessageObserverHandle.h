@interface SiriAnalyticsMessageObserverHandle : NSObject {
    id /* block */ _messagesReceived;
    id /* block */ _willRelease;
}

- (void)messagesReceived:(id)a0;
- (void).cxx_destruct;
- (void)dealloc;
- (id)initWithMessagesReceived:(id /* block */)a0 willReleaseHandle:(id /* block */)a1;

@end
