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
@property (copy, nonatomic) NSString *calendarIdentifier;
@property (retain, nonatomic) NSNumber *notificationTimeInterval;
@property (retain, nonatomic) STBlueprintScheduleRepresentation *scheduleRepresentation;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly) id<STSerializableManagedObject> syncableRootObject;

+ (id)startDateKeyPaths;
+ (id)keyPathsForValuesAffectingScheduleRepresentation;
+ (id)endDateKeyPaths;

@end
