@class NSArray, STBlueprintScheduleSimpleItem;

@interface STBlueprintScheduleRepresentation : NSObject <NSCopying>

@property (retain, nonatomic) STBlueprintScheduleSimpleItem *simpleSchedule;
@property (copy, nonatomic) NSArray *customScheduleItems;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
