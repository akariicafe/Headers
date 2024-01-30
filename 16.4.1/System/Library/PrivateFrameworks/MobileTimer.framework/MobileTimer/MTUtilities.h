@interface MTUtilities : NSObject

+ (void)logMessage:(id)a0;
+ (id)dayAndTimeZoneOffsetStringFromDate:(id)a0 withTimeZoneOffset:(long long)a1 timeZoneAbbreviation:(id)a2 spaceBeforeTimeDesignator:(BOOL)a3 hoursOnly:(BOOL)a4 numericOnly:(BOOL)a5;
+ (id)mtCityFromWorldClockCity:(id)a0;
+ (id)widgetOverrideDate;
+ (id)widgetURL;

@end
