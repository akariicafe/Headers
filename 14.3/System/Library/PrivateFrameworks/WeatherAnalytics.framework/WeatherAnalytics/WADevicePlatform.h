@interface WADevicePlatform : NSObject <AADataType>

@property (readonly, nonatomic) long long devicePlatform;

- (id)initWithDevicePlatform:(long long)a0;
- (id)toJsonValueAndReturnError:(id *)a0;

@end
