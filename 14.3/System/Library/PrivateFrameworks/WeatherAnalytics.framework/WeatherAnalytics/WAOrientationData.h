@class NSString, WADeviceOrientation, WAInterfaceOrientation;

@interface WAOrientationData : NSObject <AADataEventType>

@property (class, readonly, copy, nonatomic) NSString *dataName;

@property (readonly, nonatomic) WADeviceOrientation *deviceOrientation;
@property (readonly, nonatomic) WAInterfaceOrientation *interfaceOrientation;

- (id)toDict;
- (void).cxx_destruct;
- (id)initWithDeviceOrientation:(id)a0 interfaceOrientation:(id)a1;

@end
