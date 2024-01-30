@interface GKImageColorPalette : GKColorPalette {
    unsigned int _hueSpread;
    unsigned int _saturationSpread;
    unsigned int _brightnessSpread;
    unsigned int _grayscaleSpread;
    struct HSVColor { double x0; double x1; double x2; } *_imageHSVMap;
    struct CGSize { double width; double height; } _imageSize;
    double _borderPercentageForBorderDetection;
    unsigned int _hueHistogram[360];
    unsigned int _saturationHistogram[256];
    unsigned int _brightnessHistogram[256];
}

- (id)initWithImage:(id)a0;
- (void)reset;
- (BOOL)analyzeImage:(struct CGImage { } *)a0;
- (void)clearMainHistograms;
- (void)clearSaturationAndBrightnessHistograms;
- (void)findBrightColors;
- (void)generateHSVMapWithContext:(struct CGContext { } *)a0;
- (void)iterateOverPixelsWithBlock:(id /* block */)a0 forHue:(unsigned int)a1;
- (void)printHistogram:(unsigned int *)a0 ofSize:(unsigned int)a1;
- (unsigned int)weightHistogram:(unsigned int *)a0 size:(unsigned int)a1 spread:(unsigned int)a2;

@end
