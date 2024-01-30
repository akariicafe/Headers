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

- (id)initWithStream:(const char *)a0 entitlement:(const char *)a1;
- (void)broadcastEvent:(id)a0;
- (void).cxx_destruct;

@end
