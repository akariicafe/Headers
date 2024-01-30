@interface SFProximityEstimatorMaxOfMean : SFProximityEstimator {
    char *_channelNumberArray;
    char *_rssiArray;
    unsigned int _rssiCount;
    unsigned int _rssiIndex;
    unsigned int _rssiMinCount;
}

- (int)_estimateRSSIForSFBLEDevice:(id)a0;
- (void)dealloc;
- (id)description;
- (id)initWithProximityInfo:(id)a0;

@end
