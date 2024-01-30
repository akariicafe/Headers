@class NSError, NSDictionary, PXObservable;
@protocol PXCloudCapabilitiesProvider;

@interface _PXOverriddenCloudCapabilitiesProvider : NSObject <PXCloudCapabilitiesProvider> {
    NSDictionary *_overrides;
    id<PXCloudCapabilitiesProvider> _subProvider;
}

@property (readonly, nonatomic) PXObservable *observable;
@property (readonly, nonatomic) NSError *error;

- (void).cxx_destruct;
- (id)init;
- (long long)statusForCapability:(id)a0;
- (void)requestStatusForCapability:(id)a0 handler:(id /* block */)a1;
- (void)startGatheringCapabilityStatuses;
- (id)initWithCloudCapabilitiesProvider:(id)a0 overrides:(id)a1;

@end
