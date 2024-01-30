@class VCEmulatedNetworkAlgorithmQueueDelay, VCEmulatedNetworkAlgorithmQueueBandwidth, VCEmulatedNetworkAlgorithmQueueLoss;

@interface VCEmulatedNetworkQueue : VCEmulatedNetworkElement {
    VCEmulatedNetworkAlgorithmQueueBandwidth *_queueBandwidthAlgorithm;
    VCEmulatedNetworkAlgorithmQueueLoss *_queueLossAlgorithm;
    VCEmulatedNetworkAlgorithmQueueDelay *_queueDelayAlgorithm;
    double _lastPolicyLoadingTime;
}

- (id)initWithPolicies:(id)a0;
- (int)write:(id)a0;
- (void)dealloc;
- (void)runUntilTime:(double)a0;
- (int)enqueuePacket:(id)a0;
- (void)markPacketLoss:(id)a0;
- (void)updateSettingsAtTime:(double)a0;
- (int)dequeuePacket:(id)a0 time:(double)a1;

@end
