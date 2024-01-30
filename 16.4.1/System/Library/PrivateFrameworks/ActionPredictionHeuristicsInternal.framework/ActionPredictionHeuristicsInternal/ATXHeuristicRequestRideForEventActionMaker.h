@class NSString, CLLocation, ATXHeuristicObjectHandle;

@interface ATXHeuristicRequestRideForEventActionMaker : ATXHeuristicActionMaker {
    CLLocation *_pickupLocation;
    ATXHeuristicObjectHandle *_dropoffEvent;
    NSString *_preferredAppBundleID;
}

+ (BOOL)supportsSecureCoding;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)_makeAction;
- (id)actionTypeName;
- (id)dropOffLocationFromEKEvent:(id)a0;
- (id)initWithTitle:(id)a0 subtitle:(id)a1 pickupLocation:(id)a2 dropoffEvent:(id)a3 preferredAppBundleID:(id)a4;
- (BOOL)shouldPredictDropOffLocationGivenPickupLocation:(id)a0 andDropOffLocation:(id)a1;

@end
