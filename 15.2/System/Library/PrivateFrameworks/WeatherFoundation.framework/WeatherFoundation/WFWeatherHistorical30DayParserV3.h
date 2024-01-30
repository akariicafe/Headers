@class NSString;

@interface WFWeatherHistorical30DayParserV3 : NSObject <WFForecastDataParser>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)dateFormatter;
+ (id)daysOfWeek;

@end
