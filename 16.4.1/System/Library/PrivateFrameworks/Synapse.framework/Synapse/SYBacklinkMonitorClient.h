@class NSString, NSXPCConnection, NSMutableSet, NSObject, SYBacklinkFilterCache;
@protocol OS_dispatch_queue;

@interface SYBacklinkMonitorClient : NSObject <SYBacklinkMonitorClientProtocol>

@property (retain, nonatomic) NSXPCConnection *_connection;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *_clientQueue;
@property (readonly, nonatomic) NSMutableSet *_pendingCompletionBlocks;
@property (retain, nonatomic) SYBacklinkFilterCache *_filterCache;
@property (nonatomic) BOOL _previousFilterCacheMatched;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)createConnectionWithEndpoint:(id)a0;
- (void)_configureConnectionAndResume;
- (void)dealloc;
- (id)init;
- (void)_invalidateConnection;
- (void)_createConnectionIfNeeded;
- (void).cxx_destruct;
- (void)_processNotifyActiveUserActivityDidChange:(id)a0 context:(id)a1 serviceProxy:(id)a2 completion:(id /* block */)a3;
- (void)notifyActiveUserActivityDidChange:(id)a0 context:(id)a1 completion:(id /* block */)a2;
- (oneway void)updateWithFilterCache:(id)a0;

@end
