@class NSDate;

@interface CalendarDayCellAccessibility : __CalendarDayCellAccessibility_super

@property (retain, nonatomic) NSDate *accessibilityDate;

+ (Class)safeCategoryBaseClass;
+ (void)_accessibilityPerformValidations:(id)a0;
+ (id)safeCategoryTargetClassName;

- (id)accessibilityLabel;
- (unsigned long long)accessibilityTraits;
- (BOOL)isAccessibilityElement;
- (id)_axDayLocalizedText;
- (BOOL)_axDayShowsDayIndicator;

@end
