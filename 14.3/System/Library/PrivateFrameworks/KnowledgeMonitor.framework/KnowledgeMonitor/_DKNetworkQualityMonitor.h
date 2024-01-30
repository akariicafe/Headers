@class _CDContextualKeyPath, NSArray, NWNetworkOfInterest, NSMutableDictionary, NSObject, NWNetworkOfInterestManager;
@protocol OS_dispatch_queue;

@interface _DKNetworkQualityMonitor : _DKMonitor <NWNetworkOfInterestManagerDelegate>

@property (retain, nonatomic) NSArray *noiKeyPaths;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *noiManagerQueue;
@property (retain, nonatomic) NWNetworkOfInterestManager *noiManager;
@property (retain, nonatomic) NWNetworkOfInterest *noi;
@property (nonatomic) long long previousQuality;
@property (nonatomic) long long interfaceType;
@property (retain, nonatomic) _CDContextualKeyPath *qualityKeyPath;
@property (retain, nonatomic) _CDContextualKeyPath *predictedQualityKeyPath;
@property (retain, nonatomic) _CDContextualKeyPath *discretionaryInvitedKeyPath;
@property (retain, nonatomic) _CDContextualKeyPath *statusKeyPath;
@property (retain, nonatomic) NSMutableDictionary *statusDictionary;
@property (nonatomic) BOOL initialized;
@property (nonatomic) BOOL enabled;

+ (id)entitlements;

- (void)synchronouslyReflectCurrentValue;
- (void)saveState;
- (void)didStartTrackingNOI:(id)a0;
- (id)loadState;
- (void).cxx_destruct;
- (void)dealloc;
- (void)stop;
- (void)didStopTrackingNOI:(id)a0;
- (void)didStopTrackingAllNOIs:(id)a0;
- (void)start;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (void)deactivate;
- (id)predictionTimelineFromNOIPredictions:(id)a0;
- (void)updateInstantQuality;
- (void)updatePredictionAsync;
- (void)updateInterfaceClass;
- (void)updateDiscretionaryTrafficInvited;
- (void)updatePowerCostDL;
- (void)updatePowerCostUL;
- (id)initForInterfaceType:(long long)a0 connectionStatusKeyPath:(id)a1 qualityKeyPath:(id)a2 predictedQualityKeyPath:(id)a3 discretionaryInvitedPath:(id)a4;

@end
