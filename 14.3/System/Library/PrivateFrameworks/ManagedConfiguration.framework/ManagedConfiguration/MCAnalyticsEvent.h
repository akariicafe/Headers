@class NSString;

@interface MCAnalyticsEvent : NSObject {
    NSString *_eventKey;
    id /* block */ _eventPayloadBuilder;
}

- (void).cxx_destruct;
- (id)initWithEventKey:(id)a0 eventPayloadBuilder:(id /* block */)a1;
- (void)sendEvent;
- (void)sendEventLazy;

@end
