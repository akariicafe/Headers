@class NSTimeZone, _ATXInternalUninstallNotification, NSDate, _PASLock;

@interface _ATXAppLaunchHistogram : NSObject <ATXBundleIdRemovableProtocol, ATXActionKeyRemovableProtocol, NSSecureCoding, _ATXAppLaunchHistogramProtocol> {
    long long _secondsPerLocaltimeInterval;
    _ATXInternalUninstallNotification *_uninstallNotificationListener;
    int _timeBase;
    _PASLock *_lock;
    struct _opaque_pthread_mutex_t { long long __sig; char __opaque[56]; } _prevLocaltimeLock;
    NSDate *_prevDate;
    NSTimeZone *_prevTimeZone;
    unsigned short _prevLocaltime;
}

@property (class, readonly) BOOL supportsSecureCoding;

- (void)removeActionKeys:(id)a0;
- (void)removeBundleIds:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (double)averageLaunchesPerBundleId:(id)a0;
- (double)totalTimeOfDayLaunchesForElapsedTime:(double)a0 distanceScale:(float)a1;
- (double)totalTimeOfDayLaunchesForDate:(id)a0 distanceScale:(float)a1;
- (BOOL)removeHistoryForBundleId:(id)a0;
- (unsigned short)_eventIdforBundleId:(id)a0;
- (void)dealloc;
- (double)totalLaunchesForBundleIds:(id)a0;
- (unsigned short)_localTimeWithDate:(id)a0 timeZone:(id)a1;
- (void)resetHistogram:(id)a0;
- (void)removeIdentifiers:(id)a0;
- (int)removeHistoryForBundleIds:(id)a0;
- (double)launchPopularityWithBundleId:(id)a0 date:(id)a1;
- (void)decayWithHalfLifeInDays:(double)a0;
- (double)entropyForBundleId:(id)a0;
- (id)initWithCoder:(id)a0;
- (unsigned short)bucketCount;
- (id)initWithType:(long long)a0;
- (double)unsmoothedLaunchesForBundleIds:(id)a0 forLocalTime:(unsigned short)a1;
- (double)relativeLaunchPopularityWithBundleId:(id)a0 elapsedTime:(double)a1 distanceScale:(float)a2;
- (id)description;
- (void)addLaunchWithBundleId:(id)a0 date:(id)a1 timeZone:(id)a2 weight:(float)a3;
- (void)_addLaunchWithBundleId:(id)a0 date:(id)a1 timeZone:(id)a2 arbitraryWeight:(float)a3;
- (double)totalLaunchesForBundleIds:(id)a0 forDate:(id)a1 distanceScale:(float)a2;
- (double)totalTimeOfDayLaunchesForElapsedTime:(double)a0;
- (double)totalLaunches;
- (double)relativeLaunchPopularityWithBundleId:(id)a0 date:(id)a1 distanceScale:(float)a2;
- (double)entropy;
- (BOOL)bundleHasBeenLaunched:(id)a0;
- (void)verifyDataIntegrity;
- (void)resetData;
- (void)removeLaunchWithBundleId:(id)a0 date:(id)a1 timeZone:(id)a2 weight:(float)a3;
- (double)entropyForDate:(id)a0;
- (void)addLaunchWithBundleId:(id)a0 elapsedTime:(double)a1;
- (void)addLaunchWithBundleId:(id)a0 date:(id)a1 timeZone:(id)a2;
- (double)totalTimeOfDayLaunchesForDate:(id)a0;
- (void)addLaunchWithBundleId:(id)a0 elapsedTime:(double)a1 weight:(float)a2;
- (double)ratio:(double)a0 over:(double)a1;
- (void)decayByFactor:(double)a0;
- (double)overallLaunchPopularityForBundleId:(id)a0;
- (id)initWithHistogram:(id)a0 bucketCount:(unsigned short)a1 filter:(BOOL)a2 timeBase:(int)a3;
- (double)relativeLaunchPopularityWithBundleId:(id)a0 date:(id)a1;
- (void)encodeWithCoder:(id)a0;
- (unsigned short)_localTimeWithDate:(id)a0;

@end
