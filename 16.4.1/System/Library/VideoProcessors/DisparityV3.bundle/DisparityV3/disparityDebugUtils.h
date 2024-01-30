@class FigMetalContext;

@interface disparityDebugUtils : NSObject {
    FigMetalContext *_metalContext;
}

+ (void)createPathIfNeeded:(id)a0;

- (id)initWithMetalContext:(id)a0;
- (void).cxx_destruct;
- (void)ApplyColorWheelAndWrite:(unsigned int)a0 height:(unsigned int)a1 data:(float *)a2 fileFullPath:(const char *)a3;
- (void)saveF32Texture:(id)a0 AsF32BinaryFile:(const char *)a1;
- (void)saveF16Texture:(id)a0 AsF32BinaryFile:(const char *)a1;
- (void)WriteBinDataToFile:(void *)a0 length:(unsigned int)a1 fileFullPath:(const char *)a2;
- (void)computeRobustMinMaxForF16DisparityBuffer:(struct __CVBuffer { } *)a0 WithDisparityScale:(float)a1 AndPercentile:(float)a2 OutSignalMin:(float *)a3 OutSignalMax:(float *)a4;
- (void)convertRGB10A2ToRGBA8:(char *)a0 rbs:(unsigned long long)a1 ToRGBA:(char *)a2 ofSize:(struct CGSize { double x0; double x1; })a3;
- (void)convertVUYA444:(char *)a0 rbs:(unsigned long long)a1 ToRGBA:(char *)a2 ofSize:(struct CGSize { double x0; double x1; })a3;
- (void)makeCoherent:(id)a0;
- (void)save32BGRAPixelBuffer:(struct __CVBuffer { } *)a0 AsPPMFile:(const char *)a1;
- (void)save420CVPixelBuffer:(struct __CVBuffer { } *)a0 to:(const char *)a1;
- (void)saveAccumulationFrom:(id)a0 asBinaryFiles:(const char *)a1 forSize:(struct CGSize { double x0; double x1; })a2 costLineSize:(unsigned short)a3;
- (void)saveF16Buffer:(struct __CVBuffer { } *)a0 AsPPMFile:(const char *)a1 scale:(float)a2;
- (void)saveF16DisparityBuffer:(struct __CVBuffer { } *)a0 AsBinaryFile:(const char *)a1;
- (void)saveF16DisparityBuffer:(SEL)a0 AsGrayScalePPMFile:(struct __CVBuffer { } *)a1 range:(const char *)a2;
- (void)saveF16DisparityBuffer:(struct __CVBuffer { } *)a0 AsPPMFile:(const char *)a1;
- (void)saveF16DisparityBufferAsTurbo:(struct __CVBuffer { } *)a0 AsPPMFile:(const char *)a1 WithDisparityScale:(float)a2 AndPercentile:(float)a3;
- (void)saveF16DisparityBufferAsTurbo:(struct __CVBuffer { } *)a0 AsPPMFile:(const char *)a1 WithMin:(float)a2 WithMax:(float)a3;
- (void)saveF16DisparityTexture:(id)a0 AsBinaryFile:(const char *)a1;
- (void)saveF16DisparityTexture:(id)a0 AsPPMFile:(const char *)a1;
- (void)saveF16Texture:(SEL)a0 AsGrayScalePPMFile:(id)a1 range:(const char *)a2;
- (void)saveF16Texture:(id)a0 AsPPMFile:(const char *)a1;
- (void)saveF32Buffer:(struct __CVBuffer { } *)a0 AsPPMFile:(const char *)a1;
- (void)saveF32DisparityBuffer:(struct __CVBuffer { } *)a0 AsPPMFile:(const char *)a1;
- (void)saveF32FPBuffer:(struct __CVBuffer { } *)a0 AsPPMFile:(const char *)a1 scale:(float)a2;
- (void)saveLumaTexture:(id)a0 to:(const char *)a1;
- (void)saveNCCOutputFrom:(id)a0 asBinaryFiles:(const char *)a1;
- (void)savePixelBuffer:(struct __CVBuffer { } *)a0 AsBinaryFile:(const char *)a1;
- (void)saveRGB10A2PixelBuffer:(struct __CVBuffer { } *)a0 AsPPMFile:(const char *)a1;
- (void)saveRGB10A2PixelBuffer:(struct __CVBuffer { } *)a0 out_width:(unsigned int)a1 out_height:(unsigned int)a2 AsPPMFile:(const char *)a3;
- (void)saveRGB10A2Texture:(id)a0 AsPPMFile:(const char *)a1;
- (void)saveRGBA16FTexture:(id)a0 AsF32File:(const char *)a1;
- (void)saveRGBA16FTexture:(id)a0 AsPPMFile:(const char *)a1;
- (void)saveRGBA8Texture:(id)a0 AsBinaryFile:(const char *)a1;
- (void)saveRGBA8Texture:(id)a0 AsPPMFile:(const char *)a1;
- (void)saveRGBAF16PixelBuffer:(struct __CVBuffer { } *)a0 AsPPMFile:(const char *)a1;
- (void)saveRGBAF16PixelBuffer:(struct __CVBuffer { } *)a0 out_width:(unsigned int)a1 out_height:(unsigned int)a2 AsPPMFile:(const char *)a3;
- (void)saveRGBATexture:(id)a0 AsPPMFile:(const char *)a1;
- (void)saveRGF16ShiftmapTexture:(id)a0 AsPPMFileSx:(id)a1 AsPPMFileSy:(id)a2;
- (void)saveRGF16Texture:(id)a0 AsF32BinaryFile0:(id)a1 AsF32BinaryFile1:(id)a2;
- (void)saveRgbaF32PixelBuffer:(struct __CVBuffer { } *)a0 AsPPMFile:(const char *)a1;
- (void)saveU16Texture:(id)a0 AsPGMFile:(const char *)a1;
- (void)saveU8Buffer:(struct __CVBuffer { } *)a0 AsPPMFile:(const char *)a1;
- (void)saveU8Texture:(id)a0 AsPGMFile:(const char *)a1;
- (void)saveVUYA4444PixelBuffer:(struct __CVBuffer { } *)a0 AsBinaryFile:(const char *)a1;
- (void)saveVUYA4444PixelBuffer:(struct __CVBuffer { } *)a0 AsPPMFile:(const char *)a1;
- (void)saveVUYA4444PixelBuffer:(struct __CVBuffer { } *)a0 out_width:(unsigned int)a1 out_height:(unsigned int)a2 AsBinaryFile:(const char *)a3;
- (void)saveVUYA4444PixelBuffer:(struct __CVBuffer { } *)a0 out_width:(unsigned int)a1 out_height:(unsigned int)a2 AsPPMFile:(const char *)a3;
- (void)saveVUYA4444Texture:(id)a0 AsBinaryFile:(const char *)a1;
- (void)saveVUYA4444Texture:(id)a0 AsPPMFile:(const char *)a1;

@end
