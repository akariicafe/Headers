@class PGGraph, NSMutableDictionary;

@interface PGGraphTimeDomainBuildingHelper : NSObject

@property (weak, nonatomic) PGGraph *graph;
@property (readonly, nonatomic) NSMutableDictionary *calendarUnitNodeByValueByUnit;
@property (readonly, nonatomic) NSMutableDictionary *seasonNodeBySeasonName;
@property (readonly, nonatomic) NSMutableDictionary *dayOfWeekNodeByDayOfWeek;

- (id)initWithGraph:(id)a0;
- (id)dayOfWeekNodeForDayOfWeek:(long long)a0;
- (id)description;
- (void).cxx_destruct;
- (id)calendarUnitNodeForCalendarUnit:(unsigned long long)a0 value:(long long)a1;
- (id)seasonNodeForSeasonName:(id)a0;

@end
