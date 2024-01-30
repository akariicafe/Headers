@class NSError, NSArray, PXObservable;

@interface _PXPassthroughCloudCapabilitiesProvider : NSObject <PXCloudCapabilitiesProvider> {
    NSArray *_enabledCapabilities;
}

@property (readonly, nonatomic) PXObservable *observable;
@property (readonly, nonatomic) NSError *error;

- (void).cxx_destruct;
- (id)initWithEnabledCapabilities:(id)a0;
- (void)requestStatusForCapability:(id)a0 handler:(id /* block */)a1;
- (void)startGatheringCapabilityStatuses;
- (long long)statusForCapability:(id)a0;

@end
