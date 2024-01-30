@class NSNotificationCenter, NSObject, NSXPCConnection;
@protocol OS_dispatch_queue, AMSEngagementServiceProtocol;

@interface AMSEngagementConnection : NSObject <AMSEngagementClientProtocol>

@property (retain, nonatomic) NSXPCConnection *connection;
@property (retain, nonatomic) NSNotificationCenter *notificationCenter;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (retain, nonatomic) id<AMSEngagementServiceProtocol> proxy;
@property (copy, nonatomic) id /* block */ errorHandler;

- (id)_makeRemoteConnectionInterface;
- (void)handlePushedEvent:(id)a0;
- (id)_newRemoteConnection;
- (id)initWithNotificationCenter:(id)a0;
- (void).cxx_destruct;
- (void)_removeRemoteConnection;
- (id)_makeExportedClientConnectionInterface;
- (void)dealloc;

@end
