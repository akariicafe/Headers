@interface SFProximityEstimator : NSObject {
    int _rssiEnter;
    int _rssiExit;
    int _rssiImmediate;
    int _rssiNear;
    int _rssiFar;
}

@property (readonly, nonatomic) int estimatedRSSI;

+ (id)proximityEstimatorWithProximityInfo:(id)a0;

- (int)_estimateRSSIForSFBLEDevice:(id)a0;
- (id)description;
- (id)descriptionParams;
- (unsigned int)updateWithSFBLEDevice:(id)a0;
- (id)initWithProximityInfo:(id)a0;

@end
