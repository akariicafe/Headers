@class NSMutableArray;

@interface RTStateTransitionMotionActivityHistogram : NSObject

@property (retain, nonatomic) NSMutableArray *histogramBins;
@property (nonatomic) long long activityChangeCount;
@property (nonatomic) double cumulativeInterval;

- (void).cxx_destruct;
- (void)show;
- (unsigned long long)getDominantMotionActivityType;
- (void)addActivity:(id)a0 withInterval:(double)a1;
- (id)initWithMotionActivities:(id)a0 fromStartDate:(id)a1 toEndDate:(id)a2;
- (id)populateTransitionMotionActivityHistogram;

@end
