@class VCEmulatedNetworkQueue;

@interface VCEmulatedNetworkSingleQueue : VCEmulatedNetwork {
    VCEmulatedNetworkQueue *_networkQueue;
}

- (id)initWithPolicies:(id)a0;
- (void)push:(id)a0;
- (void)dealloc;
- (void)runUntilTime:(double)a0;

@end
