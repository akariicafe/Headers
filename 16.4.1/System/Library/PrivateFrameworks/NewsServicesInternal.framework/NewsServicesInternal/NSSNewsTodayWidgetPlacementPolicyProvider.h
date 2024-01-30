@interface NSSNewsTodayWidgetPlacementPolicyProvider : NSObject

+ (id)newsSupportedCountries;
+ (id)parsecEditorialLocales;

- (BOOL)isTodayWidgetPermittedOnHomeScreenForLocale:(id)a0;
- (id)init;

@end
