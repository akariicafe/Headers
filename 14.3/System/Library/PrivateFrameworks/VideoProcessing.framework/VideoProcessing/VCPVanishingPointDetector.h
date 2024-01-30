@class VCPGaborFilter;

@interface VCPVanishingPointDetector : NSObject {
    float *_image;
    float *_orientationResponses[8];
    float *_orientionMap;
    float *_confidenceMap;
    float *_edgeWeightMap;
    unsigned long long _width;
    unsigned long long _height;
    long long _stride;
    unsigned long long _widthPadded;
    unsigned long long _heightPadded;
    long long _stridePadded;
    long long _offset;
    BOOL _validDimension;
    float _pixelMean;
    float _pixelVar;
    VCPGaborFilter *_gaborFilter;
}

- (id)initWithImage:(struct __CVBuffer { } *)a0;
- (void).cxx_destruct;
- (void)dealloc;
- (int)detect:(struct CGPoint { double x0; double x1; } *)a0 withConfidence:(float *)a1 dominantLine:(id *)a2;
- (int)prepareImage:(struct __CVBuffer { } *)a0;
- (int)calculateOrientationResponses;
- (int)generateOrientationMap;
- (int)generateLineWeightMap:(id)a0 weightMap:(float *)a1;
- (int)voteVanishingPoint:(float *)a0;
- (int)searchVanishingPointandDominantLine:(float *)a0 lineGroup:(id)a1 vanishingPoint:(struct CGPoint { double x0; double x1; } *)a2 vanishingPointConfidence:(float *)a3 dominantLine:(id *)a4;
- (void)smoothFiltering:(float *)a0 width:(unsigned long long)a1 height:(unsigned long long)a2;
- (void)extractUsefulAreaFrom:(float *)a0 to:(float *)a1 withOffset:(unsigned long long)a2 stridePadded:(unsigned long long)a3 width:(unsigned long long)a4 height:(unsigned long long)a5;
- (void)averageOrientationResponses:(int)a0 withCurrentMap:(float *)a1;
- (int)calculateConfidence:(id)a0 lineDistance:(float)a1 vaninshingPoint:(struct CGPoint { double x0; double x1; })a2 vanishingPointConfidence:(float *)a3;
- (BOOL)isVerticalOrHorizontal:(int)a0;

@end
