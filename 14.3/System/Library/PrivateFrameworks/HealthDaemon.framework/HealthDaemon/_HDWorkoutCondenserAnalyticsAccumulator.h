@interface _HDWorkoutCondenserAnalyticsAccumulator : NSObject

@property (nonatomic) long long workoutsToCondense;
@property (nonatomic) long long workoutsToRecondense;
@property (nonatomic) long long condensedWorkouts;
@property (nonatomic) long long processedWorkouts;
@property (nonatomic) long long createdSeries;
@property (nonatomic) long long deletedSamples;
@property (nonatomic) BOOL hasProcessedWorkout;

- (id)init;
- (id)description;

@end
