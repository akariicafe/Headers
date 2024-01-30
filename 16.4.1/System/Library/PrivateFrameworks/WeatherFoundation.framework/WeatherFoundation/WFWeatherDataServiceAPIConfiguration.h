@class NSString;
@protocol WFForecastDataParser;

@interface WFWeatherDataServiceAPIConfiguration : NSObject <WFAPIConfigurationProtocol>

@property (retain, nonatomic) Class forecastRequestFormatterClass;
@property (retain, nonatomic) id<WFForecastDataParser> forecastParser;
@property (readonly, nonatomic) NSString *environment;
@property (readonly, nonatomic) BOOL isValid;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)forecastRequestForTypes:(unsigned long long)a0 location:(id)a1 units:(int)a2 date:(id)a3 error:(id *)a4 rules:(id)a5 options:(id)a6;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)hostUrl;
- (id)parseForecast:(unsigned long long)a0 data:(id)a1 location:(id)a2 units:(int)a3 locale:(id)a4 date:(id)a5 error:(id *)a6 rules:(id)a7;
- (id)initWithVersion:(id)a0 environment:(id)a1;
- (void).cxx_destruct;
- (id)parseAQIScaleNamed:(id)a0 data:(id)a1 error:(id *)a2;
- (id)aqiRequestForScaleNamed:(id)a0 language:(id)a1;

@end
