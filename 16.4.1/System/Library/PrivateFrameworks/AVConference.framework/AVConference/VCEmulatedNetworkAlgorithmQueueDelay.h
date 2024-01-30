@class NSString, NSDictionary;

@interface VCEmulatedNetworkAlgorithmQueueDelay : NSObject <VCEmulatedNetworkAlgorithm> {
    NSDictionary *_policies;
    unsigned int _networkQueueDelay;
    unsigned int _networkQueueDelayMean;
    unsigned int _networkQueueDelayStdDev;
    int _currentIndexForDelay;
    int _currentIndexForDelayDistribution;
    double _lastNetworkQueueDelayLoadTime;
    double _lastNetworkQueueDelayDistributionLoadTime;
}

@property (readonly, nonatomic) double expectedProcessEndTime;
@property unsigned int packetCountInNetworkQueue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
