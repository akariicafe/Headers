@interface ICASDeviceOrientation : NSObject <AADataType>

@property (readonly, nonatomic) long long deviceOrientation;

- (id)toJsonValueAndReturnError:(id *)a0;
- (id)initWithDeviceOrientation:(long long)a0;

@end
