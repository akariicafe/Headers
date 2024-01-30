@class CARSessionStatus;

@interface CRVehicleInformation : NSObject

@property (retain, nonatomic) CARSessionStatus *currentSessionStatus;
@property (readonly, nonatomic) unsigned long long driverPosition;
@property (readonly, nonatomic) unsigned long long vehicleAmbientBrightness;

- (id)init;
- (void).cxx_destruct;

@end
