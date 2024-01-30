@class NSObject, NSXPCConnection;
@protocol OS_dispatch_queue;

@interface REUpNextSiriClient : NSObject {
    NSXPCConnection *_connection;
    NSObject<OS_dispatch_queue> *_queue;
}

- (id)init;
- (void).cxx_destruct;
- (void)dealloc;
- (void)completedRequestWithDomain:(id)a0;
- (void)_performOnRemoteObject:(id /* block */)a0;

@end
