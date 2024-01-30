@interface NTKComplicationDateFormatter : NSObject

+ (void)initialize;
+ (void)_handleSignificantTimeChange:(id)a0;
+ (void)_handleLocaleChange:(id)a0;
+ (id)dateFormatterForStyle:(unsigned long long)a0;
+ (id)stringForDate:(id)a0 withStyle:(unsigned long long)a1;
+ (id)_localizedDayDateFormatter;

@end
