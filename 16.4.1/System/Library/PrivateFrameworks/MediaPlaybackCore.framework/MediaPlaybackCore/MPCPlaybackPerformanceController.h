@class NSString, NSMutableDictionary, NSDate;

@interface MPCPlaybackPerformanceController : NSObject {
    NSMutableDictionary *_trialExperiments;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
}

@property (class, readonly, nonatomic) MPCPlaybackPerformanceController *sharedController;

@property (retain, nonatomic) NSDate *lastCDNWarming;
@property (readonly, copy, nonatomic) NSString *experimentID;
@property (readonly, copy, nonatomic) NSString *treatmentID;
@property (readonly, copy, nonatomic) NSString *deploymentID;

- (id)init;
- (void).cxx_destruct;
- (void)loadAVAssetWithURL:(id)a0;
- (void)markCDNConnectionWarmed;
- (id)sortedExperiments;
- (id)trialExperimentWithNamespaceName:(id)a0;
- (void)warmCDNConnection;

@end
