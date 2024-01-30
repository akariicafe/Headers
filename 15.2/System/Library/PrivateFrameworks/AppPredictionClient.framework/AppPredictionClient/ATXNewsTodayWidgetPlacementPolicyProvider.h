@interface ATXNewsTodayWidgetPlacementPolicyProvider : NSObject

+ (id)_newsSupportedCountries;
+ (id)_parsecEditorialLocales;

- (id)init;
- (BOOL)isTodayWidgetPermittedOnHomeScreenForLocale:(id)a0;

@end
