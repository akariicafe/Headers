@class DenoiseRemixFragmentShader;

@interface DenoiseRemixShaders : NSObject {
    DenoiseRemixFragmentShader *_denoiseChroma;
    DenoiseRemixFragmentShader *_denoiseLumaDenoiseRemixChroma;
    DenoiseRemixFragmentShader *_denoiseRemixLumaChroma;
    DenoiseRemixFragmentShader *_remixLuma;
    DenoiseRemixFragmentShader *_denoiseLumaAlpha;
    DenoiseRemixFragmentShader *_calculateLocalGain;
    DenoiseRemixFragmentShader *_writeOutGainMap;
}

- (void).cxx_destruct;
- (id)initWithMetal:(id)a0 vertFunc:(id)a1 pixelFormatLuma:(unsigned long long)a2 pixelFormatChroma:(unsigned long long)a3 pixelFormatLoG:(unsigned long long)a4 lgaAlgorithm:(int)a5;

@end
