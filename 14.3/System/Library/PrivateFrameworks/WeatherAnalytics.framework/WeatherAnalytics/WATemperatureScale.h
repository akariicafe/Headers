@interface WATemperatureScale : NSObject <AADataType>

@property (readonly, nonatomic) long long temperatureScale;

- (id)toJsonValueAndReturnError:(id *)a0;
- (id)initWithTemperatureScale:(long long)a0;

@end
