@class NSString, NSMutableDictionary;
@protocol WFForecastDataParser;

@interface WFWeatherChannelAPIConfiguration : NSObject <WFAPIConfigurationProtocol>

@property (retain, nonatomic) NSMutableDictionary *requestFormatterForForecastType;
@property (retain, nonatomic) NSMutableDictionary *requestParserForForecastType;
@property (retain, nonatomic) Class defaultForecastRequestFormatterClass;
@property (retain, nonatomic) id<WFForecastDataParser> defaultForecastParser;
@property (readonly, nonatomic) BOOL isValid;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)forecastRequestForTypes:(unsigned long long)a0 location:(id)a1 units:(int)a2 date:(id)a3 error:(id *)a4 rules:(id)a5 options:(id)a6;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)hostUrl;
- (id)parseForecast:(unsigned long long)a0 data:(id)a1 location:(id)a2 units:(int)a3 locale:(id)a4 date:(id)a5 error:(id *)a6 rules:(id)a7;
- (void).cxx_destruct;
- (id)initWithVersion:(id)a0;
- (void)setDefaultForecastFormatter:(Class)a0;
- (void)setRequestFormatter:(Class)a0 forForecastType:(unsigned long long)a1;
- (void)setRequestParser:(id)a0 forForecastType:(unsigned long long)a1;

@end
