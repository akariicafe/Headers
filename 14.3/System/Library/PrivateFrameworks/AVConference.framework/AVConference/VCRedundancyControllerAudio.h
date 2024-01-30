@class NSString, AVCStatisticsCollector;
@protocol VCRedundancyControlAlgorithm;

@interface VCRedundancyControllerAudio : NSObject <VCRedundancyControllerProtocol> {
    id _redundancyControllerDelegate;
    AVCStatisticsCollector *_statisticsCollector;
    unsigned int _mode;
    id<VCRedundancyControlAlgorithm> _algorithm;
    unsigned int _currentRedundancyPercentage;
    double _currentRedundancyInterval;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
