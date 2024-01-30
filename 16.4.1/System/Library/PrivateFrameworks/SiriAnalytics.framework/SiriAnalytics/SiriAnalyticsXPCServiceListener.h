@class NSString, NSXPCListener, NSObject;
@protocol OS_dispatch_queue, SiriAnalyticsXPCConnectionHandlerDelegate;

@interface SiriAnalyticsXPCServiceListener : NSObject <NSXPCListenerDelegate> {
    NSObject<OS_dispatch_queue> *_queue;
    id<SiriAnalyticsXPCConnectionHandlerDelegate> _delegate;
    NSXPCListener *_listener;
    NSString *_entitlementsKey;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)listener:(id)a0 shouldAcceptNewConnection:(id)a1;
- (id)initWithMachServiceName:(id)a0 entitlementsKey:(id)a1 queue:(id)a2 delegate:(id)a3;
- (void).cxx_destruct;

@end
