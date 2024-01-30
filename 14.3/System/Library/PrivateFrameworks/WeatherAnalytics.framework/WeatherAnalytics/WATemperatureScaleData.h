@class NSString, WATemperatureScale;

@interface WATemperatureScaleData : NSObject <AADataEventType>

@property (class, readonly, copy, nonatomic) NSString *dataName;

@property (readonly, nonatomic) WATemperatureScale *temperatureScale;

- (id)toDict;
- (void).cxx_destruct;
- (id)initWithTemperatureScale:(id)a0;

@end
