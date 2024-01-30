@class WFAQIScale, WFParsedForecastData;

@interface WFWeatherStoreResponseDataWrapper : NSObject

@property (nonatomic) unsigned long long requestType;
@property (retain, nonatomic) WFParsedForecastData *forecastData;
@property (retain, nonatomic) WFAQIScale *aqiScale;

- (void).cxx_destruct;
- (id)initWithForecastData:(id)a0;
- (id)initWithAQIScale:(id)a0;

@end
