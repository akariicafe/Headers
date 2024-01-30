@class NSString;

@interface VCEmulatedNetworkAlgorithmQueueLoss : NSObject <VCEmulatedNetworkAlgorithm> {
    double _networkQueueLossRate;
    unsigned int _networkQueueLossPattern;
    long long _packetTypeForNetworkQueueLossPattern;
    unsigned int _networkQueueMaxSize;
    int _currentIndexForLossRate;
    int _currentIndexForLossPattern;
    int _currentLossPatternShift;
    int _currentIndexForQueueSize;
    double _lastNetworkQueueLossRateLoadTime;
    double _lastNetworkQueueLossPatternLoadTime;
    double _lastNetworkQueueSizeLoadTime;
}

@property (readonly, nonatomic) double expectedProcessEndTime;
@property unsigned int packetCountInNetworkQueue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void)process:(id)a0;
- (void)updateSettingsAtTime:(double)a0 impairments:(id)a1;

@end
