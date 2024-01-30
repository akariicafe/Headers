@class _PASLock;

@interface ATXLocationToLaunchCorrelation : NSObject <NSCopying, NSSecureCoding> {
    _PASLock *_lock;
}

@property (class, readonly) BOOL supportsSecureCoding;

+ (double)_launchProbabilityForEvent:(id)a0 atLocation:(id)a1 correlationMatrix:(id)a2 locationTotals:(id)a3;
+ (double)_totalLaunchesAtLocation:(id)a0 locationTotals:(id)a1;
+ (double)_totalLaunchesForEvent:(id)a0 atLocation:(id)a1 correlationMatrix:(id)a2;

- (id)init;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)addVisitForLocation:(id)a0 event:(id)a1 value:(double)a2;
- (id)initWithCoder:(id)a0;
- (id)initWithCorrelationMatrix:(id)a0 locationTotals:(id)a1;
- (double)totalLaunches;
- (double)totalLaunchesForEvent:(id)a0 atLocation:(id)a1;
- (double)launchProbabilityForEvent:(id)a0 atLocationsWithProbabilities:(id)a1;
- (double)totalLaunchesAtLocation:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (double)launchProbabilityForEvent:(id)a0 atLocation:(id)a1;

@end
