@class NSString, STBlueprintScheduleSimpleItem, NSDictionary;

@interface STDeviceBedtime : NSObject <NSCopying>

@property (class, readonly) STBlueprintScheduleSimpleItem *defaultBedtimeSchedule;

@property (nonatomic) BOOL deviceBedtimeEnabled;
@property (nonatomic) BOOL askForMoreTime;
@property (nonatomic) BOOL shouldAllowEditing;
@property (readonly, copy) NSString *scheduleText;
@property (copy) STBlueprintScheduleSimpleItem *simpleSchedule;
@property (copy) NSDictionary *scheduleByWeekdayIndex;

- (id)init;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithBlueprint:(id)a0;

@end
