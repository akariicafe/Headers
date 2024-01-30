@class NSString, NSDictionary;

@interface VCEmulatedNetworkAlgorithmQueueBandwidth : NSObject <VCEmulatedNetworkAlgorithm> {
    NSDictionary *_policies;
    unsigned int _networkQueueServiceRate;
    unsigned int _networkQueueServiceRateMean;
    unsigned int _networkQueueServiceRateStdDev;
    int _currentIndexForServiceRate;
    int _currentIndexForServiceRateDistribution;
    double _lastNetworkQueueServiceRateLoadTime;
    double _lastNetworkQueueServiceRateDistributionLoadTime;
}

@property (readonly, nonatomic) double expectedProcessEndTime;
@property unsigned int packetCountInNetworkQueue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
