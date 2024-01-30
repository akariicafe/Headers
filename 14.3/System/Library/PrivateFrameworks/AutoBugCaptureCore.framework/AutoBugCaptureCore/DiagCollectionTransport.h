@class NSXPCListener, DiagCollectionServiceImpl, NSObject;
@protocol OS_dispatch_queue;

@interface DiagCollectionTransport : NSObject {
    NSXPCListener *listener;
    DiagCollectionServiceImpl *service;
    NSObject<OS_dispatch_queue> *transport_queue;
}

- (void)shutdown;
- (id)init;
- (void).cxx_destruct;
- (void)dealloc;
- (void)setListeningPort:(const char *)a0;

@end
