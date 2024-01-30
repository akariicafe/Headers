@class NSArray, STBlueprintScheduleSimpleItem;

@interface STBlueprintScheduleRepresentation : NSObject <NSCopying>

@property (retain, nonatomic) STBlueprintScheduleSimpleItem *simpleSchedule;
@property (copy, nonatomic) NSArray *customScheduleItems;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;

@end
