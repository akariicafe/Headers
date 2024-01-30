@class NSString, _ATXDataStore, NSMutableDictionary;

@interface _ATXAppLaunchSequence : NSObject {
    _ATXDataStore *_datastore;
    NSString *_previousLaunch;
    NSMutableDictionary *_subsequentLaunchCountMap;
    int _launchType;
    struct _opaque_pthread_rwlock_t { long long __sig; char __opaque[192]; } _rwlock;
}

@property (readonly, nonatomic) double subsequentLaunchTotalCount;
@property (readonly, nonatomic) BOOL previousAppDeleted;

- (id)initWithPreviousAppActionLaunch:(id)a0 subsequentAppActionLaunchCounts:(id)a1 dataStore:(id)a2 allowSimulatedCrashes:(BOOL)a3;
- (void).cxx_destruct;
- (void)save;
- (void)dealloc;
- (id)initWithPreviousAppActionLaunch:(id)a0 dataStore:(id)a1;
- (void)decayWithHalfLifeInDays:(double)a0;
- (void)addSubsequentLaunch:(id)a0;
- (double)likelihoodForLaunch:(id)a0;
- (id)initWithPreviousLaunch:(id)a0 dataStore:(id)a1 allowSimulatedCrashes:(BOOL)a2;
- (id)initWithPreviousLaunch:(id)a0 dataStore:(id)a1;
- (void)deleteDataForLaunch:(id)a0;
- (double)launchCount:(id)a0;
- (id)initWithPreviousLaunch:(id)a0 subsequentLaunchCounts:(id)a1 dataStore:(id)a2 allowSimulatedCrashes:(BOOL)a3 launchType:(int)a4;
- (void)deleteAllInformation;
- (void)_deleteDataForLaunchLocked:(id)a0;
- (void)deleteDataForLaunches:(id)a0;
- (void)decayByFactor:(double)a0;
- (id)initWithPreviousAppActionLaunch:(id)a0 dataStore:(id)a1 allowSimulatedCrashes:(BOOL)a2;

@end
