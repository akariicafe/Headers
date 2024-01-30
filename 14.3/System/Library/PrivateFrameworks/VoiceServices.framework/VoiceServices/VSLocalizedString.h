@interface VSLocalizedString : NSObject

+ (id)localizedOOBStringForKey:(id)a0 language:(id)a1 gender:(id)a2;
+ (id)predefinedStringForKey:(id)a0 language:(id)a1 gender:(id)a2 table:(id)a3;
+ (id)appendRandomizationKey:(id)a0 withCount:(int)a1;
+ (id)localizedStringForKey:(id)a0 language:(id)a1 gender:(id)a2 table:(id)a3;
+ (id)localizedInterstitialStringForKey:(id)a0 language:(id)a1 gender:(id)a2;

@end
