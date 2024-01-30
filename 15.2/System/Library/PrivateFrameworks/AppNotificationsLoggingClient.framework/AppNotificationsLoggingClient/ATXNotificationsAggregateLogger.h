@class PETScalarEventTracker;

@interface ATXNotificationsAggregateLogger : NSObject {
    PETScalarEventTracker *_rttSelectionTracker;
    PETScalarEventTracker *_rttFromTracker;
}

+ (id)sharedInstance;
+ (id)rtFromMapping;
+ (id)rtOutcomesMapping;
+ (id)stringForRTFrom:(unsigned long long)a0;
+ (id)stringForRTOutcome:(unsigned long long)a0;

- (void).cxx_destruct;
- (id)init;
- (void)logRealTimeTuningOutcome:(unsigned long long)a0;
- (void)logRealTimeTuningCountFrom:(unsigned long long)a0;

@end
