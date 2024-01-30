@class NSXPCListener, NSObject, DiagnosticsServiceImpl;
@protocol OS_dispatch_queue;

@interface DiagnosticsTransport : NSObject {
    NSXPCListener *listener;
    DiagnosticsServiceImpl *service;
    NSObject<OS_dispatch_queue> *transport_queue;
}

- (void)shutdown;
- (id)init;
- (void).cxx_destruct;
- (void)setListeningPort:(const char *)a0;

@end
