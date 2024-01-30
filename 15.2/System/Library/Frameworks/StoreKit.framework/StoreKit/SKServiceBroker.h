@class NSLock, NSXPCConnection;

@interface SKServiceBroker : NSObject {
    NSLock *_serviceConnectionLock;
    NSXPCConnection *_serviceConnection;
}

+ (id)defaultBroker;
+ (id)_storeKitServiceInterface;
+ (id)_storeKitClientInterface;
+ (id)_serviceConnectionWithName:(id)a0;

- (id)_serviceConnection;
- (void).cxx_destruct;
- (id)init;
- (void)_serviceConnectionInvalidated;
- (id)asdStoreKitServiceWithErrorHandler:(id /* block */)a0;
- (id)asdStoreKitSynchronousServiceWithErrorHandler:(id /* block */)a0;
- (id)asdStoreKitService;
- (id)asdStoreKitSynchronousService;

@end
