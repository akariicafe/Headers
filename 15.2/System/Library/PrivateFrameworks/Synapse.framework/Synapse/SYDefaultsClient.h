@class NSObject, NSXPCConnection;
@protocol OS_dispatch_queue;

@interface SYDefaultsClient : NSObject

@property (retain, nonatomic) NSXPCConnection *_connection;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *_clientQueue;

- (void)_invalidateConnection;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;
- (void)_createConnectionIfNeeded;
- (void)_configureConnectionAndResume;
- (void)indicatorCoverageWithCompletion:(id /* block */)a0;
- (void)setIndicatorCoverage:(long long)a0 completion:(id /* block */)a1;

@end
