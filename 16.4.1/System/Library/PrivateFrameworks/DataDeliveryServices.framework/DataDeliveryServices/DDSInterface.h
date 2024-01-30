@class NSString, NSXPCConnection, NSObject;
@protocol OS_dispatch_queue, DDSManaging, DDSManagingDelegate;

@interface DDSInterface : NSObject <DDSManaging, DDSManagingDelegate>

@property (retain, nonatomic) id<DDSManaging> serverOverride;
@property (retain, nonatomic) NSXPCConnection *remoteServer;
@property (readonly, nonatomic) DDSInterface *sharedInstance;
@property (retain, nonatomic) id<DDSManagingDelegate> mDelegate;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *connectionUsageQueue;
@property (weak) id<DDSManagingDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;
+ (id)interface;
+ (unsigned long long)xpcConnectionOptionsForServer;

- (void)triggerDump;
- (void)createConnectionIfNecessary;
- (id)syncServer;
- (void)addAssertionForQuery:(id)a0 policy:(id)a1 assertionID:(id)a2 clientID:(id)a3;
- (void)triggerUpdate;
- (id)server;
- (void)dealloc;
- (void)teardownXPCConnection;
- (id)syncServiceObjectProxy;
- (void)removeAssertionWithID:(id)a0;
- (void)assertionIDsForClientID:(id)a0 reply:(id /* block */)a1;
- (id)serviceObjectProxy;
- (id)init;
- (void).cxx_destruct;

@end
