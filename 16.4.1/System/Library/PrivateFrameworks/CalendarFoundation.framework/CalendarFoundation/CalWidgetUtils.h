@interface CalWidgetUtils : NSObject

+ (double)lookaheadIntervalForDaysPerEntry:(long long)a0;
+ (void)_refreshWidgetKinds:(id)a0 reason:(id)a1;
+ (void)refreshEventWidgets;
+ (void)refreshDateWidgets;

@end
