@class WFAQIScale, WFParsedForecastData;

@interface WFWeatherStoreResponseDataWrapper : NSObject

@property (nonatomic) unsigned long long requestType;
@property (retain, nonatomic) WFParsedForecastData *forecastData;
@property (retain, nonatomic) WFAQIScale *aqiScale;

- (id)initWithForecastData:(id)a0;
- (void).cxx_destruct;
- (id)initWithAQIScale:(id)a0;

@end
