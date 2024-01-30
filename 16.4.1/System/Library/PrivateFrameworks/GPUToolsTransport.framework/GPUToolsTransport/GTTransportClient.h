@class NSObject;
@protocol OS_os_log, GTXPCConnection;

@interface GTTransportClient : NSObject {
    NSObject<OS_os_log> *_log;
    id<GTXPCConnection> _connection;
}

- (id)allServices;
- (id)serviceProvider;
- (id)initWithConnection:(id)a0;
- (id)capture;
- (void).cxx_destruct;
- (id)replayer;
- (id)loopback;
- (id)launcher;

@end
