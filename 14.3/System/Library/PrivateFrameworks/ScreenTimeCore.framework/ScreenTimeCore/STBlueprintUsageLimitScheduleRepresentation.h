@class NSArray, STBlueprintUsageLimitScheduleSimpleItem;

@interface STBlueprintUsageLimitScheduleRepresentation : NSObject

@property (retain, nonatomic) STBlueprintUsageLimitScheduleSimpleItem *simpleSchedule;
@property (copy, nonatomic) NSArray *customScheduleItems;

- (void).cxx_destruct;

@end
