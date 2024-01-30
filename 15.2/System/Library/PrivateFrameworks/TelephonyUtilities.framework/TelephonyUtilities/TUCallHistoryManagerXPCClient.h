@class NSString, NSXPCConnection, NSXPCInterface, NSObject;
@protocol OS_dispatch_queue, TUCallHistoryManagerXPCServer;

@interface TUCallHistoryManagerXPCClient : NSObject <TUCallHistoryManagerXPCClient, TUCallHistoryManagerDataSource>

@property (class, retain, nonatomic) id<TUCallHistoryManagerXPCServer> asynchronousServer;
@property (class, retain, nonatomic) id<TUCallHistoryManagerXPCServer> synchronousServer;
@property (class, readonly, nonatomic) NSXPCInterface *callHistoryManagerClientXPCInterface;
@property (class, readonly, nonatomic) NSXPCInterface *callHistoryManagerServerXPCInterface;

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (retain, nonatomic) NSXPCConnection *xpcConnection;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)callHistoryManagerAllowedClasses;

- (void)handleServerDisconnect;
- (id)synchronousServerWithErrorHandler:(id /* block */)a0;
- (id)serverWithErrorHandler:(id /* block */)a0;
- (void).cxx_destruct;
- (id)init;
- (void)invalidate;
- (void)dealloc;
- (void)updateOutgoingLocalParticipantUUID:(id)a0 forCallsWithOutgoingLocalParticipantUUID:(id)a1;

@end
