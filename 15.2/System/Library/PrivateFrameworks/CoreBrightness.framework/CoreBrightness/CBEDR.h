@interface CBEDR : NSObject {
    unsigned long long _rampPolicy;
    float _maxHeadroom;
    float _requestedHeadroom;
    float _currentMaxBrightness;
    float _currentHeadroom;
    float _referenceHeadroom;
}

@property float panelMax;
@property float brightnessCap;
@property float sdrBrightness;
@property float appliedCompensation;
@property float secondsPerStop;

+ (float)animatedHeadroomForOrigin:(float)a0 target:(float)a1 andProgress:(float)a2;

- (id)description;
- (id)copyStatusInfo;
- (id)initWithRampPolicy:(unsigned long long)a0 potentialHeadroom:(float)a1 andReferenceHeadroom:(float)a2;
- (BOOL)shouldUpdateEDRForRequestedHeadroom:(float)a0 targetHeadroom:(float *)a1 rampTime:(double *)a2;
- (float)cappedHeadroomFromUncapped:(float)a0;
- (float)maxHeadroom;
- (void)sanityCheck;
- (float)stopsFromHeadroomRatio:(float)a0;
- (float)availableHeadroom;
- (float)referenceHeadroom;

@end
