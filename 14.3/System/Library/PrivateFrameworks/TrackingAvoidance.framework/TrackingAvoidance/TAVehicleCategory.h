@class NSDate;

@interface TAVehicleCategory : NSObject

@property (readonly, copy, nonatomic) NSDate *date;
@property (readonly, nonatomic) unsigned long long vehicleCategoryType;

+ (unsigned long long)speculateTAVehicleCategoryTypeFromVehicleStateNotification:(id)a0;
+ (unsigned long long)speculateTAVehicleCategoryTypeFromGeoNavigationNotification:(id)a0;

- (void).cxx_destruct;
- (id)initWithVehicleCategoryType:(unsigned long long)a0 andDate:(id)a1;
- (id)initWithTAVehicularStateNotification:(id)a0;
- (id)initWithTAGeoNavigationNotification:(id)a0;

@end
