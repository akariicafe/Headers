@class NSTimeZone, NSUUID, NSDate, NSNumber;

@interface _HKFitnessFriendActivitySnapshot : HKSample <NSCopying>

@property (retain, nonatomic) NSUUID *friendUUID;
@property (retain, nonatomic) NSUUID *sourceUUID;
@property (nonatomic) long long snapshotIndex;
@property (retain, nonatomic) NSDate *snapshotUploadedDate;
@property (retain, nonatomic) NSNumber *timeZoneOffsetFromUTCForNoon;
@property (nonatomic) double activeHours;
@property (nonatomic) double activeHoursGoal;
@property (nonatomic) double briskMinutes;
@property (nonatomic) double briskMinutesGoal;
@property (nonatomic) double energyBurned;
@property (nonatomic) double energyBurnedGoal;
@property (nonatomic) double mmv;
@property (nonatomic) double mmg;
@property (nonatomic) double stepCount;
@property (nonatomic) double pushCount;
@property (nonatomic) long long wheelchairUse;
@property (nonatomic) double walkingAndRunningDistance;
@property (readonly, nonatomic) double energyBurnedGoalPercentage;
@property (readonly, nonatomic) double mmgp;
@property (readonly, nonatomic) double briskMinutesGoalPercentage;
@property (readonly, nonatomic) double activeHoursGoalPercentage;
@property (readonly, nonatomic) NSTimeZone *timeZone;
@property (nonatomic) long long amm;
@property (nonatomic) BOOL hasCarriedForwardGoals;

+ (BOOL)supportsSecureCoding;
+ (BOOL)_isConcreteObjectClass;
+ (id)_fitnessFriendActivitySnapshotWithSnapshotIndex:(long long)a0 startDate:(id)a1 endDate:(id)a2 sourceUUID:(id)a3;
+ (id)snapshotWithActivitySummary:(id)a0;
+ (id)_fitnessFriendActivitySnapshotWithFriendUUID:(id)a0 sourceUUID:(id)a1 startDate:(id)a2 endDate:(id)a3 snapshotIndex:(long long)a4 snapshotUploadedDate:(id)a5;
+ (id)_mostSignificantSnapshotAmongSnapshots:(id)a0;

- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)description;
- (id)_mostSignificantSnapshot:(id)a0;
- (id)activitySummary;
- (void)encodeWithCoder:(id)a0;

@end
