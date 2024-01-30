@interface NSSNewsTodayWidgetPlacementPolicyProvider : NSObject

+ (id)newsSupportedCountries;
+ (id)parsecEditorialLocales;

- (id)init;
- (BOOL)isTodayWidgetPermittedOnHomeScreenForLocale:(id)a0;

@end
