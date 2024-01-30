@class NSLock, NSXPCConnection;

@interface ASDStoreKitServiceBroker : NSObject {
    NSLock *_serviceConnectionLock;
    NSXPCConnection *_serviceConnection;
}

+ (id)_storeKitServiceInterface;
+ (id)_storeKitClientInterface;
+ (id)defaultBroker;

- (id)storeKitSynchronousServiceWithErrorHandler:(id /* block */)a0;
- (id)init;
- (void).cxx_destruct;
- (id)storeKitServiceWithErrorHandler:(id /* block */)a0;
- (id)storeKitSynchronousService;
- (id)_serviceConnection;
- (void)_serviceConnectionInvalidated;
- (id)storeKitService;

@end
