@class HKQuantity, NSArray, NSString, NSDate;

@interface NTKWellnessEntryModel : NTKTimelineEntryModel <NSCopying, CLKTimelineEntry>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) BOOL databaseLoading;
@property (nonatomic) BOOL areFitnessAppsRestricted;
@property (nonatomic) long long activityMoveMode;
@property (retain, nonatomic) HKQuantity *activeEnergyTotal;
@property (retain, nonatomic) HKQuantity *activeEnergyGoal;
@property (nonatomic) double appleMoveTimeTotal;
@property (nonatomic) double appleMoveTimeGoal;
@property (nonatomic) double appleExerciseTimeTotal;
@property (nonatomic) double appleExerciseTimeGoal;
@property (nonatomic) BOOL wheelchairUser;
@property (nonatomic) long long appleStandHoursTotal;
@property (nonatomic) long long appleStandHoursGoal;
@property (retain, nonatomic) NSArray *activeEnergyChartData;
@property (retain, nonatomic) NSArray *appleMoveTimeChartData;
@property (retain, nonatomic) NSArray *appleExerciseTimeChartData;
@property (retain, nonatomic) NSArray *appleStandHourChartData;
@property (readonly, nonatomic) BOOL userHasDoneActivitySetup;
@property (readonly, nonatomic) BOOL deviceLocked;
@property (retain, nonatomic, setter=tl_setEntryDate:) NSDate *tl_entryDate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)idealizedEntryModel;
+ (id)formattingManager;
+ (id)lockedEntryModel;
+ (id)_activityTemplateWithFamily:(long long)a0 entryModel:(id)a1;
+ (id)largeModular:(id)a0;
+ (id)largeUtility:(id)a0;
+ (id)_signatureCornerFromModel:(id)a0;
+ (id)_signatureBezelFromModel:(id)a0;
+ (id)_signatureRectangleFromModel:(id)a0;
+ (id)_LocalizedStringWithActiveEnergy:(id)a0;

- (long long)availabilityState;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)date;
- (id)initWithCoder:(id)a0;
- (void)setDate:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)templateForComplicationFamily:(long long)a0;
- (double)appleMoveTimeCompletionPercentage;
- (double)activeEnergyCompletionPercentage;
- (double)appleExerciseTimeCompletionPercentage;
- (double)appleStandHourCompletionPercentage;
- (id)loggingString;
- (BOOL)tl_validate:(id *)a0;

@end
