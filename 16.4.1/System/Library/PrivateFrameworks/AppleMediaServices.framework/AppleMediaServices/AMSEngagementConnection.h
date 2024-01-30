@class NSNotificationCenter, NSObject, NSXPCConnection;
@protocol OS_dispatch_queue, AMSEngagementServiceProtocol;

@interface AMSEngagementConnection : NSObject <AMSEngagementClientProtocol>

@property (retain, nonatomic) NSXPCConnection *connection;
@property (retain, nonatomic) NSNotificationCenter *notificationCenter;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (retain, nonatomic) id<AMSEngagementServiceProtocol> proxy;
@property (copy, nonatomic) id /* block */ errorHandler;

- (void)treatmentsDidSyncronize;
- (id)initWithNotificationCenter:(id)a0;
- (void)dealloc;
- (void)_removeRemoteConnection;
- (id)_makeExportedClientConnectionInterface;
- (void)handlePushedEvent:(id)a0;
- (id)_makeRemoteConnectionInterface;
- (id)_newRemoteConnection;
- (void).cxx_destruct;

@end
