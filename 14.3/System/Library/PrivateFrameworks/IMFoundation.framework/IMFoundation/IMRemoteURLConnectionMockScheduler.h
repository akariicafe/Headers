@class NSObject;
@protocol OS_xpc_object;

@interface IMRemoteURLConnectionMockScheduler : NSObject {
    NSObject<OS_xpc_object> *_connection;
}

- (id)init;
- (void).cxx_destruct;
- (BOOL)_connect;
- (void)scheduleMockResponse:(id)a0 forURL:(id)a1;
- (void)scheduleMockResponse:(id)a0;

@end
