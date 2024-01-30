@class VCEmulatedNetworkQueue;

@interface VCEmulatedNetworkSingleQueue : VCEmulatedNetwork {
    VCEmulatedNetworkQueue *_networkQueue;
}

- (id)initWithPolicies:(id)a0;
- (void)dealloc;
- (void)push:(id)a0;
- (void)runUntilTime:(double)a0;

@end
