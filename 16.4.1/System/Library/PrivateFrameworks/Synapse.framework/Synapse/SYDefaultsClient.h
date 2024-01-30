@class NSObject, NSXPCConnection;
@protocol OS_dispatch_queue;

@interface SYDefaultsClient : NSObject

@property (retain, nonatomic) NSXPCConnection *_connection;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *_clientQueue;

- (void)_configureConnectionAndResume;
- (void)dealloc;
- (void)indicatorCoverageWithCompletion:(id /* block */)a0;
- (void)setIndicatorCoverage:(long long)a0 completion:(id /* block */)a1;
- (id)init;
- (void)_invalidateConnection;
- (void)_createConnectionIfNeeded;
- (void).cxx_destruct;

@end
