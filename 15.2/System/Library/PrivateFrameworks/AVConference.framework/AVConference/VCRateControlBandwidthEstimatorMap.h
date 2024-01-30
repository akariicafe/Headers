@class VCRateControlServerBag, NSMutableDictionary, VCRateControlBandwidthEstimator;

@interface VCRateControlBandwidthEstimatorMap : NSObject {
    NSMutableDictionary *_estimatorMap;
    unsigned int _currentActiveEstimatorID;
    int _state;
    VCRateControlBandwidthEstimator *_defaultEstimator;
    int _bandwidthEstimationState;
    void *_logBWEDump;
}

@property (nonatomic) double estimatedBandwidth;
@property (nonatomic) double estimatedBandwidthUncapped;
@property (nonatomic) unsigned int radioAccessTechnology;
@property (nonatomic) unsigned int mode;
@property (readonly, nonatomic) int bandwidthEstimationState;
@property (nonatomic) BOOL fastSuddenBandwidthDetectionEnabled;
@property (retain, nonatomic) VCRateControlServerBag *serverBag;

- (id)init;
- (void)dealloc;
- (void)enableBWELogDump:(void *)a0;
- (double)estimatedBandwidthWithArrivalTime:(double)a0;
- (double)estimatedBandwidthUncappedWithArrivalTime:(double)a0;
- (id)bandwidthEstimatorWithID:(unsigned int)a0 isProbingSequence:(BOOL)a1 isEndOfProbingSequence:(BOOL)a2;
- (void)deregisterBandwidthEstimatorWithID:(unsigned int)a0;

@end
