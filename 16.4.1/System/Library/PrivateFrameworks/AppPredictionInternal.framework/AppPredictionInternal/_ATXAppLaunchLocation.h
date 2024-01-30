@class _PASLock, _ATXDuetHelper;
@protocol ATXLocationManagerProtocol;

@interface _ATXAppLaunchLocation : NSObject {
    id<ATXLocationManagerProtocol> _locationManager;
    _ATXDuetHelper *_duetHelper;
    _PASLock *_lock;
}

+ (id)sortTimeIntervals:(id)a0;
+ (id)defaultPath;
+ (void)joinLaunchEvents:(id)a0 withVisits:(id)a1 block:(id /* block */)a2;
+ (void)writeModel:(id)a0;
+ (id)visitsWithLOI:(id)a0 startDate:(id)a1;

- (void)train;
- (void)trainWithCallback:(id /* block */)a0;
- (double)launchProbabilityAtLOI:(id)a0 appForAllIntentsBundleId:(id)a1;
- (id)locationManager;
- (void)resetAppIntentLocationData;
- (unsigned long long)loadModel;
- (void)_trainModelWithLOI:(id)a0 startDate:(id)a1;
- (int)launchCountAtLOI:(id)a0 bundleId:(id)a1;
- (double)launchProbabilityAtLOI:(id)a0 appIntent:(id)a1;
- (unsigned long long)loadModelAtPath:(id)a0;
- (id)init;
- (double)launchProbabilityAtLOI:(id)a0 bundleId:(id)a1;
- (void).cxx_destruct;
- (id)initWithDuetHelper:(id)a0 locationManager:(id)a1;

@end
