@class NSMutableDictionary, NSMutableArray, NSObject;
@protocol OS_dispatch_queue, OS_xpc_event_publisher;

@interface HDXPCEventPublisher : NSObject {
    NSObject<OS_dispatch_queue> *_queue;
    NSObject<OS_xpc_event_publisher> *_publisher;
    NSMutableArray *_pendingEvents;
    NSMutableArray *_pendingSubscribers;
    NSMutableDictionary *_subscribers;
    const char *_requiredEntitlement;
}

- (void).cxx_destruct;
- (void)_handleEventAction:(unsigned int)a0 token:(unsigned long long)a1 descriptor:(id)a2;
- (void)_queue_addSubscriberForToken:(unsigned long long)a0 descriptor:(id)a1;
- (void)_queue_removeSubscriberForToken:(unsigned long long)a0;
- (void)_queue_sendPendingEvents;
- (void)_queue_sendEventWithXPCObject:(id)a0;
- (id)initWithStream:(const char *)a0 entitlement:(const char *)a1;
- (void)broadcastEvent:(id)a0;

@end
