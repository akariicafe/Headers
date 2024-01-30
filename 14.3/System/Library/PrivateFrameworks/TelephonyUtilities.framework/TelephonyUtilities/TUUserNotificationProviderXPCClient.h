@class NSString, NSXPCConnection, NSXPCInterface, NSObject;
@protocol OS_dispatch_queue, TUUserNotificationsProviderXPCServer;

@interface TUUserNotificationProviderXPCClient : NSObject <TUUserNotificationsProviderXPCServer, TUUserNotificationProviderDataSource>

@property (class, retain, nonatomic) id<TUUserNotificationsProviderXPCServer> asynchronousServer;
@property (class, retain, nonatomic) id<TUUserNotificationsProviderXPCServer> synchronousServer;
@property (class, readonly, nonatomic) NSXPCInterface *userNotificationProviderServerXPCInterface;

@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (retain, nonatomic) NSXPCConnection *xpcConnection;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)synchronousServerWithErrorHandler:(id /* block */)a0;
- (id)init;
- (void).cxx_destruct;
- (void)dealloc;
- (oneway void)momentCapturedForStreamToken:(long long)a0 requesterID:(id)a1 reply:(id /* block */)a2;
- (id)serverWithErrorHandler:(id /* block */)a0;

@end
