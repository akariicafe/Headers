@class NSString;

@interface VCRedundancyControlAlgorithmAudio : NSObject <VCRedundancyControlAlgorithm> {
    double _packetLossPercentageIncreaseThresholds[3];
    double _packetLossPercentageDecreaseThresholds[3];
    BOOL _isPacketLossIncreasing;
    double _packetLossPercentage;
    double _packetLossPercentageThreshold;
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
