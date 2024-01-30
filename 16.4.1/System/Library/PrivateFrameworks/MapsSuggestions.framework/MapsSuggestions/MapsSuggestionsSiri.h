@interface MapsSuggestionsSiri : NSObject

+ (BOOL)isAllowedOnLockScreen;
+ (id)isAllowedOnHomeScreenCondition;
+ (id)isAllowedOnLockScreenCondition;
+ (BOOL)isEnabled;
+ (id)isEnabledCondition;
+ (BOOL)isAllowedOnHomeScreen;

@end
