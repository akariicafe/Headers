@class NSSet, NSCalendar, NSString;

@interface WFWeatherChannelParserV2 : NSObject <WFForecastDataParser>

@property (class, readonly) NSSet *componentsForCurrentForecast;
@property (class, readonly) NSSet *componentsForHourlyForecasts;
@property (class, readonly) NSSet *componentsForDailyForecasts;
@property (class, readonly) unsigned long long expectedHourlyForecastCount;
@property (class, readonly) unsigned long long expectedDailyForecastCount;

@property (retain, nonatomic) NSCalendar *calendar;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)parseForecastData:(id)a0 types:(unsigned long long)a1 location:(id)a2 locale:(id)a3 date:(id)a4 error:(id *)a5 rules:(id)a6;
- (id)parseForecastData:(id)a0 types:(unsigned long long)a1 location:(id)a2 locale:(id)a3 date:(id)a4 error:(id *)a5;
- (void).cxx_destruct;
- (id)init;
- (id)parseAirQualityData:(id)a0 location:(id)a1 error:(id *)a2;
- (id)parseCurrentCondition:(id)a0;
- (id)parseDailyForecasts:(id)a0;
- (id)parseHourlyForecasts:(id)a0;
- (void)parseCommonComponents:(id)a0 data:(id)a1;
- (unsigned long long)_pressureTrendFromWeatherChannelCode:(id)a0;

@end
