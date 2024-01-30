@interface IPFormat : NSObject

+ (id)localeFromDeviceLanguage;
+ (id)localeFromDeviceLocale;
+ (id)numberFormatterFromLanguage;
+ (id)numberFormatterFromLocale;
+ (void)setNumberFormat:(id)a0;

@end
