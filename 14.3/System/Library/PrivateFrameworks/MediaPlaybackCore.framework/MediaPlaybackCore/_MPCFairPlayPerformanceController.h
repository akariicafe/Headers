@class NSString, MPCPlaybackEngine, NSMutableSet, NSMutableDictionary, NSObject;
@protocol OS_dispatch_queue;

@interface _MPCFairPlayPerformanceController : NSObject <MPCPlaybackEngineEventObserving, MPServerObjectDatabaseObserver> {
    NSMutableSet *_SAPSignPrewarmingAccounts;
    NSMutableSet *_SAPSignPrewarmedAccounts;
    NSObject<OS_dispatch_queue> *_miniQueue;
    NSMutableSet *_miniSINFEndpointLoadingAccounts;
    NSMutableDictionary *_miniSINFAccounts;
    BOOL _scheduledMiniSINFs;
}

@property (readonly, weak, nonatomic) MPCPlaybackEngine *playbackEngine;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithPlaybackEngine:(id)a0;
- (void).cxx_destruct;
- (void)database:(id)a0 didFinishImportRequest:(id)a1;
- (void)_applicationWillEnterForegroundNotification:(id)a0;
- (void)dealloc;
- (void)engine:(id)a0 didChangeAccounts:(id)a1;
- (void)_prewarmSAPSigningForAccount:(id)a0;
- (void)_optimisticallyFetchLeaseForAccount:(id)a0;
- (void)_prewarmMiniSINFEndpointForAccount:(id)a0;
- (void)scheduleMiniSINFFetch;
- (void)_fetchMiniSINFsWithCompletion:(id /* block */)a0;

@end
