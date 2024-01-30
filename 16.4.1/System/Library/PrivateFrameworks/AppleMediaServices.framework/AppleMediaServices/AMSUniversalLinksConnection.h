@class NSObject, NSXPCConnection;
@protocol OS_dispatch_queue, AMSUniversalLinksServiceProtocol;

@interface AMSUniversalLinksConnection : NSObject

@property (retain, nonatomic) NSXPCConnection *connection;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (readonly, nonatomic) id<AMSUniversalLinksServiceProtocol> proxy;

- (void)dealloc;
- (void)_removeRemoteConnection;
- (id)_makeRemoteConnectionInterface;
- (id)init;
- (id)_newRemoteConnection;
- (void).cxx_destruct;

@end
