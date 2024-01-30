@interface MapsSuggestionsSiri : NSObject

+ (BOOL)isEnabled;
+ (BOOL)isAllowedOnHomeScreen;
+ (BOOL)isAllowedOnLockScreen;
+ (id)isEnabledCondition;
+ (id)isAllowedOnHomeScreenCondition;
+ (id)isAllowedOnLockScreenCondition;

@end
