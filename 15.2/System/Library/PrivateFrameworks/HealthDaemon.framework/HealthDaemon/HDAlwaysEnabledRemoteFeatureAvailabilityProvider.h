@protocol HDRemoteFeatureAvailabilityProvidingDelegate;

@interface HDAlwaysEnabledRemoteFeatureAvailabilityProvider : NSObject <HDRemoteFeatureAvailabilityProviding>

@property (weak, nonatomic) id<HDRemoteFeatureAvailabilityProvidingDelegate> delegate;

- (id)rescindedStatusForCountryCode:(id)a0 device:(id)a1 error:(id *)a2;
- (void).cxx_destruct;
- (id)rescindedStatusOnActivePairedDeviceForCountryCode:(id)a0 error:(id *)a1;

@end
