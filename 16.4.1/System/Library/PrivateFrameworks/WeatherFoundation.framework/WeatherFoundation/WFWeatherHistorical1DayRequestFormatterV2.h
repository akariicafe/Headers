@class NSString;

@interface WFWeatherHistorical1DayRequestFormatterV2 : NSObject <WFForecastRequestFormatter>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)forecastRequest:(unsigned long long)a0 forLocation:(id)a1 withUnits:(int)a2 locale:(id)a3 date:(id)a4 rules:(id)a5 options:(id)a6;
+ (id)forecastRequest:(unsigned long long)a0 forLocation:(id)a1 locale:(id)a2 date:(id)a3;
+ (id)dateFormatter;
+ (id)hostURLForService;


@end
