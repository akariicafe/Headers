@interface CNUIStringUtilities : NSObject

+ (long long)composedCharacterCountForString:(id)a0;
+ (long long)composedCharacterCountForString:(id)a0 containsEmoji:(BOOL *)a1;
+ (BOOL)stringContainsEmoji:(id)a0;
+ (BOOL)stringIsSingleEmoji:(id)a0;

@end
