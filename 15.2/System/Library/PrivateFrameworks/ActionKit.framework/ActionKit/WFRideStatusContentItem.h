@class INRideStatus;

@interface WFRideStatusContentItem : WFContentItem

@property (readonly, nonatomic) INRideStatus *rideStatus;

+ (id)typeDescription;
+ (id)propertyBuilders;
+ (id)ownedTypes;
+ (id)pluralTypeDescription;
+ (id)countDescription;

- (id)driver;
- (id)pickupLocation;
- (id)dropOffLocation;
- (id)rideOptionName;
- (id)estimatedPickupDate;
- (id)estimatedDropOffDate;
- (id)maximumPrice;
- (id)minimumPrice;
- (id)disclaimerMessage;
- (id)vehicleDescription;

@end
