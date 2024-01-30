@class NSArray, NSDateComponents;

@interface HKCategoricalDateAxis : HKDateAxis

@property (copy, nonatomic) NSArray *categoryTitles;
@property (nonatomic) long long categoriesStartHourPosition;
@property (copy, nonatomic) NSDateComponents *minorAxisIntervalComponents;
@property (copy, nonatomic) NSDateComponents *majorAxisIntervalComponents;

+ (double)_categoryLocationIntervalForCategoryCount:(long long)a0;
+ (double)_categoryStartLocationForCategoryCount:(long long)a0;
+ (id)datePositionForCategoryIndex:(long long)a0 categoryCount:(long long)a1 startDate:(id)a2 calendar:(id)a3;

- (void).cxx_destruct;
- (id)axisLabelIntervalComponentsForZoomLevelConfiguration:(id)a0;
- (BOOL)canAddLabelForAxisLabelType:(long long)a0;
- (id)initWithCurrentCalendar:(id)a0 axisStyle:(id)a1 categoryTitles:(id)a2;
- (id)minorAxisIntervalComponentsForZoomLevelConfiguration:(id)a0;
- (id)stringForDate:(id)a0 zoom:(long long)a1 labelType:(long long)a2;

@end
