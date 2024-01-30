@class NSObject, NSString, NSXPCConnection;
@protocol OS_dispatch_queue, SYBacklinkMonitorServiceHandleDelegate;

@interface SYBacklinkMonitorServiceHandle : NSObject <SYBacklinkMonitorServiceProtocol>

@property (retain, nonatomic) NSXPCConnection *connection;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *handleQueue;
@property (readonly, nonatomic) int processIdentifier;
@property (weak, nonatomic) id<SYBacklinkMonitorServiceHandleDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)handleWithConnection:(id)a0 queue:(id)a1;

- (oneway void)activeUserActivityDidChange:(id)a0 context:(id)a1 completion:(id /* block */)a2;
- (long long)_indicatorCoverage;
- (void)setFilterCache:(id)a0;
- (void)dealloc;
- (oneway void)indicatorCoverageWithCompletion:(id /* block */)a0;
- (id)initWithConnection:(id)a0 queue:(id)a1;
- (oneway void)setIndicatorCoverage:(id)a0;
- (void).cxx_destruct;
- (void)_killConnectionWithCallback;

@end
