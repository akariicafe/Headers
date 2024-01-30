@class PTDisparityFilterExponentialMovingAverageLKTMotion, PTOpticalFlow, PTNormalEstimation;
@protocol MTLTexture;

@interface PTEffectFilter : NSObject {
    float _updateCoefficientDisparity;
    float _updateCoefficientNormal;
    id<MTLTexture> _filteredDisparity;
    PTOpticalFlow *_disparityOpticalFlow;
    int _frameIndex;
    id<MTLTexture> _temporalDisparity[2];
    id<MTLTexture> _temporalNormal[2];
    id<MTLTexture> _normal;
    PTDisparityFilterExponentialMovingAverageLKTMotion *_disparityFilter;
    PTNormalEstimation *_normalEstimation;
}

- (id)normal;
- (void).cxx_destruct;
- (unsigned int)reset;
- (unsigned int)applyFilter:(id)a0 disparity:(id)a1;
- (id)debugTexture;
- (id)filteredDisparity;
- (id)filteredNormal;
- (id)initDisparityFilterWithDevice:(id)a0 disparitySize:(struct { unsigned long long x0; unsigned long long x1; unsigned long long x2; })a1 updateCoefficientDisparity:(float)a2;
- (id)initDisparityNormalFilterWithDevice:(id)a0 disparitySize:(struct { unsigned long long x0; unsigned long long x1; unsigned long long x2; })a1 updateCoefficientDisparity:(float)a2 updateCoefficientNormal:(float)a3;
- (unsigned int)prepareFilter:(id)a0 rgbaPyramid:(id)a1 network:(id)a2;

@end
