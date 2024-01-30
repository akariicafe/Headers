@class NSObject, NSXPCConnection;
@protocol OS_dispatch_queue, AMSEngagementServiceProtocol;

@interface AMSEngagementConnection : NSObject

@property (retain, nonatomic) NSXPCConnection *connection;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (retain, nonatomic) id<AMSEngagementServiceProtocol> proxy;
@property (copy, nonatomic) id /* block */ errorHandler;

- (id)init;
- (void).cxx_destruct;
- (id)_newRemoteConnection;
- (void)_removeRemoteConnection;
- (void)dealloc;

@end
