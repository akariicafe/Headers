@class NSDictionary, NSSet, NSMutableDictionary;

@interface HKWorkoutBuilderStatistics : NSObject <NSSecureCoding> {
    NSMutableDictionary *_workoutStatistics;
    NSMutableDictionary *_activitiesStatistics;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSDictionary *workoutStatistics;
@property (readonly, copy, nonatomic) NSDictionary *activitiesStatistics;
@property (readonly, nonatomic) BOOL isEmpty;
@property (readonly, copy, nonatomic) NSSet *allTypes;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (void)addActivityStatistics:(id)a0 forType:(id)a1 activityUUID:(id)a2;
- (void)addWorkoutStatistics:(id)a0 forType:(id)a1;

@end
