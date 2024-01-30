@class VCEmulatedNetworkQueue;

@interface VCEmulatedNetworkDoubleQueue : VCEmulatedNetwork {
    VCEmulatedNetworkQueue *_networkQueueA;
    VCEmulatedNetworkQueue *_networkQueueB;
}

- (id)initWithPolicies:(id)a0;
- (void)dealloc;
- (void)push:(id)a0;
- (void)runUntilTime:(double)a0;

@end
