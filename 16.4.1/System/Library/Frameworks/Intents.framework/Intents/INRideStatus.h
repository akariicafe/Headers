@class NSDate, NSString, NSArray, INRideVehicle, CLPlacemark, INRideOption, NSUserActivity, INRideCompletionStatus, INDateComponentsRange, INRideDriver;

@interface INRideStatus : NSObject <INCacheableContainer, INImageProxyInjecting, INRideStatusExport, NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (copy, nonatomic) NSString *rideIdentifier;
@property (nonatomic) long long phase;
@property (copy, nonatomic) INRideCompletionStatus *completionStatus;
@property (copy, nonatomic) INRideVehicle *vehicle;
@property (copy, nonatomic) INRideDriver *driver;
@property (copy, nonatomic) NSDate *estimatedPickupDate;
@property (copy, nonatomic) NSDate *estimatedDropOffDate;
@property (copy, nonatomic) NSDate *estimatedPickupEndDate;
@property (copy, nonatomic) INDateComponentsRange *scheduledPickupTime;
@property (copy, nonatomic) CLPlacemark *pickupLocation;
@property (copy, nonatomic) NSArray *waypoints;
@property (copy, nonatomic) CLPlacemark *dropOffLocation;
@property (copy, nonatomic) INRideOption *rideOption;
@property (retain, nonatomic) NSUserActivity *userActivityForCancelingInApplication;
@property (copy, nonatomic) NSArray *additionalActionActivities;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)encodeWithCoder:(id)a0;
- (id)_intents_cacheableObjects;
- (id)_dictionaryRepresentation;
- (id)descriptionAtIndent:(unsigned long long)a0;
- (void)_injectProxiesForImages:(id /* block */)a0 completion:(id /* block */)a1;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)_intents_updateContainerWithCache:(id)a0;
- (void).cxx_destruct;

@end
