@class NSObject;
@protocol OS_xpc_object, GTXPCConnection;

@interface GTMTLCaptureServiceObserver : NSObject <GTMTLCaptureServiceObserver> {
    unsigned long long _replyStream;
    NSObject<OS_xpc_object> *_replyPath;
    id<GTXPCConnection> _connection;
}

- (void).cxx_destruct;
- (id)initWithMessage:(id)a0 notifyConnection:(id)a1;
- (void)notifyCaptureObjectsChanged:(id)a0;
- (void)notifyCaptureProgress:(id)a0;
- (void)notifyCaptureRequest:(id)a0;
- (void)notifyUnsupportedFenum:(id)a0;

@end
