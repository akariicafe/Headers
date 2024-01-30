@class STBlueprintScheduleRepresentation, NSString, NSDate, STBlueprint, NSNumber;
@protocol STSerializableManagedObject;

@interface STBlueprintSchedule : NSManagedObject <STSerializableManagedObject, STSyncableSubObject>

@property (retain, nonatomic) NSDate *day0Start;
@property (retain, nonatomic) NSDate *day1Start;
@property (retain, nonatomic) NSDate *day2Start;
@property (retain, nonatomic) NSDate *day3Start;
@property (retain, nonatomic) NSDate *day4Start;
@property (retain, nonatomic) NSDate *day5Start;
@property (retain, nonatomic) NSDate *day6Start;
@property (retain, nonatomic) NSDate *day0End;
@property (retain, nonatomic) NSDate *day1End;
@property (retain, nonatomic) NSDate *day2End;
@property (retain, nonatomic) NSDate *day3End;
@property (retain, nonatomic) NSDate *day4End;
@property (retain, nonatomic) NSDate *day5End;
@property (retain, nonatomic) NSDate *day6End;
@property (readonly, nonatomic) STBlueprint *blueprint;
@property (nonatomic) BOOL enabled;
@property (copy, nonatomic) NSString *calendarIdentifier;
@property (retain, nonatomic) NSNumber *notificationTimeInterval;
@property (retain, nonatomic) STBlueprintScheduleRepresentation *scheduleRepresentation;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly) id<STSerializableManagedObject> syncableRootObject;

+ (id)endDateKeyPaths;
+ (id)keyPathsForValuesAffectingScheduleRepresentation;
+ (id)_boundaryForState:(long long)a0 fromStartBoundaries:(id)a1 fromEndBoundaries:(id)a2;
+ (id)startDateKeyPaths;
+ (id)_nextBoundaryAfterDate:(id)a0 matchingDate:(id)a1 onDay:(long long)a2 inCalendar:(id)a3;

- (BOOL)isActiveAtDate:(id)a0 inCalendar:(id)a1;
- (id)computeNextOverrideEndDateForState:(long long)a0 creationDate:(id)a1 inCalendar:(id)a2;
- (BOOL)_computeStartBoundaries:(id *)a0 endBoundaries:(id *)a1 forCreationDate:(id)a2 calendar:(id)a3;
- (BOOL)updateWithDictionaryRepresentation:(id)a0;
- (void)setStartTime:(id)a0 endTime:(id)a1 forDay:(unsigned long long)a2;
- (void)setStartTime:(id)a0 endTime:(id)a1;
- (id)computeNextScheduleBoundaryAfterDate:(id)a0 inCalendar:(id)a1 isStartDate:(BOOL *)a2;
- (BOOL)_computeNextStartDate:(id *)a0 nextEndDate:(id *)a1 afterDate:(id)a2 forDay:(long long)a3 usingCalendar:(id)a4;
- (void)_datePairForDay:(long long)a0 startDate:(id *)a1 endDate:(id *)a2;
- (id)dictionaryRepresentation;

@end
