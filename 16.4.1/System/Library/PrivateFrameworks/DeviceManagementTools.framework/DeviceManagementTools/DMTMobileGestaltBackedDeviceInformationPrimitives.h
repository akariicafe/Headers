@class NSString;

@interface DMTMobileGestaltBackedDeviceInformationPrimitives : NSObject <DMTDeviceInformationPrimitives>

@property (readonly, copy, nonatomic) NSString *serialNumber;
@property (readonly, copy, nonatomic) NSString *deviceUDID;
@property (readonly, copy, nonatomic) NSString *modelIdentifier;
@property (readonly, copy, nonatomic) NSString *marketingModelName;
@property (readonly, copy, nonatomic) NSString *deviceClass;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;

@end
