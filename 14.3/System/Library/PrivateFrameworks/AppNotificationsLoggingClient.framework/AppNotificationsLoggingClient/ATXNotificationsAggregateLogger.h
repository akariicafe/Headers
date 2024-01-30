@class PETScalarEventTracker;

@interface ATXNotificationsAggregateLogger : NSObject {
    PETScalarEventTracker *_rttSelectionTracker;
    PETScalarEventTracker *_rttFromTracker;
}

+ (id)sharedInstance;
+ (id)rtOutcomesMapping;
+ (id)rtFromMapping;
+ (id)stringForRTOutcome:(unsigned long long)a0;
+ (id)stringForRTFrom:(unsigned long long)a0;

- (id)init;
- (void).cxx_destruct;
- (void)logRealTimeTuningCountFrom:(unsigned long long)a0;
- (void)logRealTimeTuningOutcome:(unsigned long long)a0;

@end
