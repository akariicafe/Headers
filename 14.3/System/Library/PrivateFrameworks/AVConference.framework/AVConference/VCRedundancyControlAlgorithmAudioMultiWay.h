@class NSString;

@interface VCRedundancyControlAlgorithmAudioMultiWay : NSObject <VCRedundancyControlAlgorithm> {
    unsigned int _packetLossPercentageIncreaseThresholds[3];
    unsigned int _packetLossPercentageDecreaseThresholds[3];
    BOOL _isPacketLossIncreasing;
    double _packetLossPercentage;
    double _packetLossPercentageThreshold;
    double _plrEnvelope;
    unsigned int _burstLossPacketCount;
    BOOL _isUplinkRecentlyCongested;
}

@property (readonly, nonatomic) unsigned int redundancyPercentage;
@property (readonly, nonatomic) double redundancyInterval;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
