@class INRideStatus;

@interface WFRideStatusContentItem : WFContentItem

@property (readonly, nonatomic) INRideStatus *rideStatus;

+ (id)typeDescription;
+ (id)countDescription;
+ (id)ownedTypes;
+ (id)pluralTypeDescription;
+ (id)propertyBuilders;

- (id)driver;
- (id)dropOffLocation;
- (id)disclaimerMessage;
- (id)estimatedDropOffDate;
- (id)estimatedPickupDate;
- (id)maximumPrice;
- (id)minimumPrice;
- (id)pickupLocation;
- (id)rideOptionName;
- (id)vehicleDescription;

@end
