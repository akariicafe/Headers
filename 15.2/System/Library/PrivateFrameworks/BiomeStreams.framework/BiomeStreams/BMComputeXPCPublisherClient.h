@class NSXPCListenerEndpoint, NSMutableDictionary, NSXPCConnection, NSObject;
@protocol OS_dispatch_queue;

@interface BMComputeXPCPublisherClient : NSObject <BMComputePublisher, BMComputePublishing> {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    NSXPCConnection *_connection;
    NSXPCListenerEndpoint *_listenerEndpoint;
}

@property (readonly, nonatomic) NSMutableDictionary *subscriptions;
@property (readonly, nonatomic) NSMutableDictionary *pendingEvents;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (readonly, nonatomic) NSXPCConnection *connection;

+ (id)shared;
+ (void)_setQueue:(id)a0;
+ (void)_initializeSharedClientWithQueue:(id)a0;

- (void)_handleEventWithPayload:(id)a0;
- (id)initWithQueue:(id)a0 listenerEndpoint:(id)a1;
- (void)unsubscribeWithIdentifier:(id)a0;
- (void).cxx_destruct;
- (void)receiveInputForIdentifier:(id)a0 streamIdentifier:(id)a1 storeEvent:(id)a2;
- (id)init;
- (void)_setXPCEvent:(id)a0 identifier:(id)a1;
- (void)subscribe:(id)a0;

@end
