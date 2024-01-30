@class NSString, NSCalendar;

@interface WFWeatherChannelParserV3 : NSObject <WFForecastDataParser>

@property (readonly, nonatomic) NSCalendar *calendar;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)parseForecastData:(id)a0 types:(unsigned long long)a1 location:(id)a2 locale:(id)a3 date:(id)a4 error:(id *)a5 rules:(id)a6;
- (id)parseForecastData:(id)a0 types:(unsigned long long)a1 location:(id)a2 locale:(id)a3 date:(id)a4 error:(id *)a5;
- (void).cxx_destruct;
- (id)init;
- (void)_parseCommonComponents:(id)a0 intoConditions:(id)a1;
- (id)_parseForecastedConditions:(id)a0 individualForecastProcessingBlock:(id /* block */)a1 uniqueParsingBlock:(id /* block */)a2;
- (id)_parseCurrentConditions:(id)a0;
- (void)_parseWebLinks:(id)a0 intoWeatherConditions:(id)a1;
- (id)_parseLastTwentyFourHoursOfObservations:(id)a0;
- (id)_parseHourlyForecastedConditions:(id)a0;
- (id)_parseDailyForecastedConditions:(id)a0;
- (id)parseAirQualityData:(id)a0 location:(id)a1 locale:(id)a2 error:(id *)a3;
- (id)_parseDailyPollenForecastedConditions:(id)a0;
- (id)_parsePollutants:(id)a0;

@end
