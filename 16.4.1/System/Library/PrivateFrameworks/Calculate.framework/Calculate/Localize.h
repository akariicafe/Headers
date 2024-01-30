@interface Localize : NSObject

+ (id)mainBundle;
+ (id)localizedStringForKey:(id)a0 value:(id)a1 table:(id)a2 localization:(id)a3;
+ (id)localizedStringsForTable:(id)a0 localization:(id)a1;
+ (id)systemLocale;
+ (id)availableLocaleNames;
+ (id)formatString:(id)a0 withExponent:(int)a1 formatter:(id)a2;
+ (id)localizationForLocale:(id)a0;
+ (id)systemLocales;

@end
