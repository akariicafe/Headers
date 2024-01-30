@class NSXPCListener, ATSession, NSString, NSMutableArray, NSObject;
@protocol OS_dispatch_queue;

@interface ATSessionProxyListener : NSObject <NSXPCListenerDelegate, ATSessionObserver> {
    NSXPCListener *_listener;
    NSMutableArray *_connections;
    NSObject<OS_dispatch_queue> *_queue;
}

@property (readonly, nonatomic) ATSession *session;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithSession:(id)a0;
- (BOOL)listener:(id)a0 shouldAcceptNewConnection:(id)a1;
- (void)start;
- (void).cxx_destruct;
- (void)sessionDidFinish:(id)a0;
- (void)stop;

@end
