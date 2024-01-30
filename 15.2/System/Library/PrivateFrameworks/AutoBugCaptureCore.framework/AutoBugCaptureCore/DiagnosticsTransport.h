@class NSXPCListener, NSObject, DiagnosticsServiceImpl;
@protocol OS_dispatch_queue;

@interface DiagnosticsTransport : NSObject {
    NSXPCListener *listener;
    DiagnosticsServiceImpl *service;
    NSObject<OS_dispatch_queue> *transport_queue;
}

- (void)setListeningPort:(const char *)a0;
- (void)shutdown;
- (void).cxx_destruct;
- (id)init;

@end
