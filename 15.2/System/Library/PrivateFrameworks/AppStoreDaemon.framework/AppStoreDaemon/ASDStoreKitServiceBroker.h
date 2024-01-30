@class NSLock, NSXPCConnection;

@interface ASDStoreKitServiceBroker : NSObject {
    NSLock *_serviceConnectionLock;
    NSXPCConnection *_serviceConnection;
}

+ (id)defaultBroker;
+ (id)_storeKitServiceInterface;
+ (id)_storeKitClientInterface;

- (id)_serviceConnection;
- (void).cxx_destruct;
- (id)init;
- (id)storeKitServiceWithErrorHandler:(id /* block */)a0;
- (id)storeKitSynchronousServiceWithErrorHandler:(id /* block */)a0;
- (void)_serviceConnectionInvalidated;
- (id)storeKitService;
- (id)storeKitSynchronousService;

@end
