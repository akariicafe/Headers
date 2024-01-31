@interface STUsageReportAccessibility : __STUsageReportAccessibility_super

+ (Class)safeCategoryBaseClass;
+ (void)_accessibilityPerformValidations:(id)a0;
+ (id)safeCategoryTargetClassName;

- (id)_countedDataSetForItemType:(unsigned long long)a0 trustIdentifier:(id)a1 includeIndicatorImageName:(BOOL)a2;
- (id)_timedDataSetForItemType:(unsigned long long)a0 trustIdentifier:(id)a1;
- (id)_timedDataSetForItemType:(unsigned long long)a0 useDarkColors:(BOOL)a1;
- (id)screenTimeDataSet;
- (id)_accessibilityStringForDate:(id)a0 timePeriod:(unsigned long long)a1;
- (unsigned long long)_axTimePeriodForDescription;

@end
