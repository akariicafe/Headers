@interface CompactMonthWeekViewAccessibility : __CompactMonthWeekViewAccessibility_super

+ (Class)safeCategoryBaseClass;
+ (void)_accessibilityPerformValidations:(id)a0;
+ (id)safeCategoryTargetClassName;

- (void)dealloc;
- (id)accessibilityElements;
- (BOOL)accessibilityElementsHidden;
- (BOOL)_accessibilityHitTestShouldFallbackToNearestChild;
- (void)_accessibilityLoadAccessibilityInformation;
- (void)setCalendarDate:(id)a0;
- (void)_initializeDays;
- (id)_axDate;
- (id)_accessibilityMonthViewController;
- (void)_axAnnotateDayNumbers;
- (void)_axAnnotateMonthHeader;
- (BOOL)_axContainsToday;
- (void)_axInvalidateChildren;
- (id)_axMonthHeader;
- (BOOL)_axShowsMonthHeader;
- (BOOL)_axShowsWeekNumber;
- (id)_axWeekNumber;
- (void)_initializeMonthNameLabel;
- (void)_reloadMonthNameLabel;
- (void)setCompressedVerticalMode:(BOOL)a0;

@end
