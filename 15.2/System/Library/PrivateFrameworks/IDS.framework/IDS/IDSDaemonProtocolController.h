@class IDSGroupContextNotifyingObserver, NSXPCConnection;
@protocol IDSGroupContextDataSourceDaemonProtocol, IDSGroupContextCacheMiddlewareDaemonProtocol;

@interface IDSDaemonProtocolController : NSObject

@property (retain, nonatomic) NSXPCConnection *connection;
@property (readonly, nonatomic) id<IDSGroupContextDataSourceDaemonProtocol> groupContextDataSource;
@property (readonly, nonatomic) id<IDSGroupContextCacheMiddlewareDaemonProtocol> groupContextCacheMiddleware;
@property (retain, nonatomic) IDSGroupContextNotifyingObserver *observer;

+ (id)sharedInstance;

- (void).cxx_destruct;
- (id)init;

@end
