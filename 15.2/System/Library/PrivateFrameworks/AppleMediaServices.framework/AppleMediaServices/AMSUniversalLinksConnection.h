@class NSObject, NSXPCConnection;
@protocol OS_dispatch_queue, AMSUniversalLinksServiceProtocol;

@interface AMSUniversalLinksConnection : NSObject

@property (retain, nonatomic) NSXPCConnection *connection;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (readonly, nonatomic) id<AMSUniversalLinksServiceProtocol> proxy;

- (id)_makeRemoteConnectionInterface;
- (id)_newRemoteConnection;
- (void).cxx_destruct;
- (id)init;
- (void)_removeRemoteConnection;
- (void)dealloc;

@end
