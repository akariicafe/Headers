@class NSString, ICASDeviceOrientation, ICASInterfaceOrientation;

@interface ICASOrientationData : NSObject <AADataEventType>

@property (class, readonly, copy, nonatomic) NSString *dataName;

@property (readonly, nonatomic) ICASDeviceOrientation *deviceOrientation;
@property (readonly, nonatomic) ICASInterfaceOrientation *interfaceOrientation;

- (void).cxx_destruct;
- (id)toDict;
- (id)initWithDeviceOrientation:(id)a0 interfaceOrientation:(id)a1;

@end
