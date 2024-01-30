@class IDSGroupContextNotifyingObserver, NSXPCConnection;
@protocol IDSGroupContextDataSourceDaemonProtocol, IDSGroupContextCacheMiddlewareDaemonProtocol;

@interface IDSDaemonProtocolController : NSObject

@property (retain, nonatomic) NSXPCConnection *connection;
@property (readonly, nonatomic) id<IDSGroupContextDataSourceDaemonProtocol> groupContextDataSource;
@property (readonly, nonatomic) id<IDSGroupContextCacheMiddlewareDaemonProtocol> groupContextCacheMiddleware;
@property (retain, nonatomic) IDSGroupContextNotifyingObserver *observer;

+ (id)sharedInstance;

- (id)init;
- (void).cxx_destruct;

@end
