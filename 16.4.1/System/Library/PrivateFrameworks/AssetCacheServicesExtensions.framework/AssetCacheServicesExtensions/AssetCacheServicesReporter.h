@class NSMutableSet, NSMutableDictionary, NSObject;
@protocol AssetCacheServicesReporterDelegate, OS_dispatch_queue, OS_os_log;

@interface AssetCacheServicesReporter : NSObject

@property (weak) id<AssetCacheServicesReporterDelegate> weakDelegate;
@property (weak) NSObject<OS_dispatch_queue> *weakDelegateQueue;
@property (retain) NSObject<OS_os_log> *logHandle;
@property (retain) NSMutableDictionary *results;
@property (retain) NSMutableSet *allServerHostPorts;

- (id)initWithDelegate:(id)a0 delegateQueue:(id)a1;
- (void)start;
- (void).cxx_destruct;
- (void)reportCachedServersWithKeyPath:(id)a0;
- (id)serverSortInfoForHostPort:(id)a0 rank:(id)a1;
- (void)didFinishWithResults:(id)a0;
- (void)didGatherResults:(id)a0 forKeyPath:(id)a1;
- (BOOL)doRanges:(id)a0 containAddress:(id)a1;
- (id)keyPath:(id)a0 byAppendingKey:(id)a1;
- (id)locateServersWithOptions:(id)a0;
- (id)prettyRanges:(id)a0;
- (void)reportCachedPublicIPAddressRangesAndFavoredServerRangesWithKeyPath:(id)a0;
- (void)reportFreshPublicIPAddressRangesAndFavoredServerRangesWithKeyPath:(id)a0;
- (void)reportFreshServersWithKeyPath:(id)a0;
- (void)reportMightHaveWithKeyPath:(id)a0;
- (void)reportPublicIPAddress;
- (void)reportPublicIPAddressRangesWithKeyPath:(id)a0 andFavoredServerRangesWithKeyPath:(id)a1 generateOptions:(id /* block */)a2;
- (void)reportReachability;
- (void)reportServersWithKeyPath:(id)a0 generateOptions:(id /* block */)a1;
- (id)sortedHostPorts:(id)a0;
- (id)sortedHostPorts:(id)a0 usingSortInfo:(id)a1;
- (void)willStartGatheringResultsForKeyPath:(id)a0;

@end
