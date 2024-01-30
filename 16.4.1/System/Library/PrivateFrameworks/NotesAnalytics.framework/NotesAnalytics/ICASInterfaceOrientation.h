@interface ICASInterfaceOrientation : NSObject <AADataType>

@property (readonly, nonatomic) long long interfaceOrientation;

- (id)initWithInterfaceOrientation:(long long)a0;
- (id)toJsonValueAndReturnError:(id *)a0;

@end
