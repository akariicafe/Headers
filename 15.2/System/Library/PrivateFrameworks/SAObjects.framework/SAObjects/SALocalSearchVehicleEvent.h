@class NSString, NSDate, SALocation, NSNumber;

@interface SALocalSearchVehicleEvent : SADomainObject

@property (copy, nonatomic) NSDate *date;
@property (retain, nonatomic) SALocation *location;
@property (copy, nonatomic) NSString *notes;
@property (copy, nonatomic) NSNumber *userSetLocation;
@property (copy, nonatomic) NSString *vehicleIdentifier;

+ (id)vehicleEvent;
+ (id)vehicleEventWithDictionary:(id)a0 context:(id)a1;

- (id)encodedClassName;
- (id)groupIdentifier;

@end
