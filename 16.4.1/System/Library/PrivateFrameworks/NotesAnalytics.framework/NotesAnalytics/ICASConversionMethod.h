@interface ICASConversionMethod : NSObject <AADataType>

@property (readonly, nonatomic) long long conversionMethod;

- (id)toJsonValueAndReturnError:(id *)a0;
- (id)initWithConversionMethod:(long long)a0;

@end
