@class NSLock, NSXPCConnection;

@interface SKServiceProxy : NSObject {
    NSLock *_serviceConnectionLock;
    NSXPCConnection *_serviceConnection;
}

+ (id)serviceProxy;
+ (id)inAppServiceInterface;
+ (id)inAppClientInterface;

- (id)init;
- (void).cxx_destruct;
- (id)serviceConnection;
- (id)objectProxyWithErrorHandler:(id /* block */)a0;
- (void)_serviceConnectionInvalidated;
- (id)inAppServiceWithErrorHandler:(id /* block */)a0;
- (id)inAppService;

@end
