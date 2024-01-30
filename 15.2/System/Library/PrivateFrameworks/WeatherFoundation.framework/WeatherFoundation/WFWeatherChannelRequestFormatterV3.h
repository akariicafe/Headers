@class NSString;

@interface WFWeatherChannelRequestFormatterV3 : NSObject <WFForecastRequestFormatter>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)forecastRequest:(unsigned long long)a0 forLocation:(id)a1 withUnits:(int)a2 locale:(id)a3 date:(id)a4 rules:(id)a5 options:(id)a6;
+ (id)aqiRequestForScaleNamed:(id)a0 language:(id)a1;
+ (id)hostURLForService;
+ (id)forecastRequest:(unsigned long long)a0 forLocation:(id)a1 locale:(id)a2 date:(id)a3;
+ (id)forecastRequest:(id)a0 forLocation:(id)a1 locale:(id)a2 date:(id)a3 queryItems:(id)a4 rules:(id)a5;
+ (id)forecastRequestForComponents:(id)a0 location:(id)a1 locale:(id)a2 date:(id)a3 queryItems:(id)a4;


@end
