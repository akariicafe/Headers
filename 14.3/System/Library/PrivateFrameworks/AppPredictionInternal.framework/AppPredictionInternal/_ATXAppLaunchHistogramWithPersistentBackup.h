@class _ATXDataStore, ATXBackgroundSaver;

@interface _ATXAppLaunchHistogramWithPersistentBackup : _ATXAppLaunchHistogram <NSSecureCoding> {
    ATXBackgroundSaver *_saver;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) _ATXDataStore *datastore;
@property (readonly, nonatomic) long long histogramType;


- (id)initWithDataStore:(id)a0 histogramType:(long long)a1 loadFromDataStore:(BOOL)a2 saveOnBackgroundQueue:(id)a3;
- (void).cxx_destruct;
- (BOOL)removeHistoryForBundleId:(id)a0;
- (int)removeHistoryForBundleIds:(id)a0;
- (void)decayWithHalfLifeInDays:(double)a0;
- (id)initWithDataStore:(id)a0 histogramType:(long long)a1 saveOnBackgroundQueue:(id)a2;
- (id)initWithDataStore:(id)a0 histogramType:(long long)a1;
- (void)flush;
- (void)addLaunchWithBundleId:(id)a0 date:(id)a1 timeZone:(id)a2 weight:(float)a3;
- (void)resetData;
- (void)removeLaunchWithBundleId:(id)a0 date:(id)a1 timeZone:(id)a2 weight:(float)a3;
- (void)addLaunchWithBundleId:(id)a0 elapsedTime:(double)a1;
- (void)addLaunchWithBundleId:(id)a0 date:(id)a1 timeZone:(id)a2;
- (void)addLaunchWithBundleId:(id)a0 elapsedTime:(double)a1 weight:(float)a2;
- (void)decayByFactor:(double)a0;

@end
