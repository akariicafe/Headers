@interface CalendarModelSceneState : NSObject

@property (nonatomic) BOOL showDayAsList;
@property (nonatomic) BOOL showMonthAsDivided;
@property (nonatomic) double dayViewHourScale;
@property (nonatomic) double weekViewHourScale;
@property (nonatomic) int dayViewFirstVisibleSecond;
@property (nonatomic) long long weekViewFirstVisibleSecond;
@property (nonatomic) long long lastUsedNonYearView;

- (id)init;

@end
