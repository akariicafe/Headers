@class NSNumber;

@interface CMCalorieData : NSObject <NSSecureCoding, NSCopying> {
    long long fWorkoutType;
    double fDuration;
    double fMets;
    double fBasalMets;
    double fTotalCalories;
    double fBasalCalories;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) long long workoutType;
@property (readonly, nonatomic) double duration;
@property (readonly, nonatomic) NSNumber *mets;
@property (readonly, nonatomic) NSNumber *basalMets;
@property (readonly, nonatomic) NSNumber *totalCalories;
@property (readonly, nonatomic) NSNumber *basalCalories;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)dealloc;
- (id)description;
- (id)initWithWorkoutType:(long long)a0 duration:(double)a1 mets:(double)a2 basalMets:(double)a3 totalCalories:(double)a4 basalCalories:(double)a5;

@end
