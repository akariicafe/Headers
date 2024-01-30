@interface NTKComplicationDateFormatter : NSObject

+ (void)initialize;
+ (void)_handleLocaleChange:(id)a0;
+ (void)_handleSignificantTimeChange:(id)a0;
+ (id)_localizedDayDateFormatter;
+ (id)dateFormatterForStyle:(unsigned long long)a0;
+ (id)stringForDate:(id)a0 withStyle:(unsigned long long)a1;

@end
