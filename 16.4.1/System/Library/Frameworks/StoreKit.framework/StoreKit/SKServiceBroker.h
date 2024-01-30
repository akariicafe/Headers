@class NSLock, NSXPCConnection;

@interface SKServiceBroker : NSObject {
    NSLock *_serviceConnectionLock;
    NSXPCConnection *_serviceConnection;
}

+ (id)_storeKitClientInterface;
+ (id)_serviceConnectionWithName:(id)a0;
+ (id)defaultBroker;
+ (id)_storeKitServiceInterface;

- (void)_serviceConnectionInvalidated;
- (id)inAppBindingServiceWithErrorHandler:(id /* block */)a0;
- (id)storeKitServiceWithErrorHandler:(id /* block */)a0;
- (id)storeKitSynchronousServiceWithErrorHandler:(id /* block */)a0;
- (id)_serviceConnection;
- (id)init;
- (void).cxx_destruct;

@end
