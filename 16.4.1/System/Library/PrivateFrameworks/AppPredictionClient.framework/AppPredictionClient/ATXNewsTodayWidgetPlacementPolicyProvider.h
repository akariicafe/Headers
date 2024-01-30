@interface ATXNewsTodayWidgetPlacementPolicyProvider : NSObject

+ (id)_parsecEditorialLocales;
+ (id)_newsSupportedCountries;

- (BOOL)isTodayWidgetPermittedOnHomeScreenForLocale:(id)a0;

@end
