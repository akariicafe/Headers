@class NSXPCListener, DiagCollectionServiceImpl, NSObject;
@protocol OS_dispatch_queue;

@interface DiagCollectionTransport : NSObject {
    NSXPCListener *listener;
    DiagCollectionServiceImpl *service;
    NSObject<OS_dispatch_queue> *transport_queue;
}

- (void)setListeningPort:(const char *)a0;
- (void)shutdown;
- (void)dealloc;
- (id)init;
- (void).cxx_destruct;

@end
