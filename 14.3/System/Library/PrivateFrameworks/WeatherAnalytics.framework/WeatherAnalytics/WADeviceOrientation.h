@interface WADeviceOrientation : NSObject <AADataType>

@property (readonly, nonatomic) long long deviceOrientation;

- (id)initWithDeviceOrientation:(long long)a0;
- (id)toJsonValueAndReturnError:(id *)a0;

@end
