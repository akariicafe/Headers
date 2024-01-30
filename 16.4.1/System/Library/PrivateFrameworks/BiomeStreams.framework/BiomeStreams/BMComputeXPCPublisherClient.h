@class NSXPCListenerEndpoint, NSMutableDictionary, NSXPCConnection, NSString, NSObject;
@protocol OS_dispatch_queue;

@interface BMComputeXPCPublisherClient : NSObject <BMComputePublishing, BMComputePublisher> {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    NSXPCConnection *_connection;
    NSXPCListenerEndpoint *_listenerEndpoint;
}

@property (readonly, nonatomic) NSMutableDictionary *subscriptions;
@property (readonly, nonatomic) NSMutableDictionary *pendingEvents;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (readonly, nonatomic) NSXPCConnection *connection;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)shared;
+ (id)new;
+ (void)_setQueue:(id)a0;
+ (void)_initializeSharedClientWithQueue:(id)a0;

- (void)subscribe:(id)a0;
- (void)unsubscribeWithIdentifier:(id)a0;
- (void)receiveInputForIdentifier:(id)a0 streamIdentifier:(id)a1 storeEvent:(id)a2;
- (void)dealloc;
- (void)_handleEventWithPayload:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (id)initWithQueue:(id)a0 listenerEndpoint:(id)a1;
- (void)_setXPCEvent:(id)a0 identifier:(id)a1;

@end
