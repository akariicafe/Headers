@class NSDate;

@interface _HKFirstPartyWorkoutSnapshot : NSObject {
    double _elapsedTime;
    NSDate *_snapshotDate;
}

@property (readonly, nonatomic) long long state;
@property (readonly, nonatomic) unsigned long long activityType;

+ (id)firstPartyWorkoutSnapshotWithCurrentWorkoutSnapshot:(id)a0;

- (void).cxx_destruct;
- (double)durationForDate:(id)a0;
- (id)_initWithState:(long long)a0 activityType:(unsigned long long)a1 elapsedTime:(double)a2 snapshotDate:(id)a3;
- (id)description;

@end
