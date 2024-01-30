@interface PTPixelBufferUtil : NSObject

+ (id)getMTLTextureFromPixelBuffer:(struct __CVBuffer { } *)a0 device:(id)a1;
+ (unsigned int)pixelBufferToLumaChroma:(id)a0 pixelBuffer:(struct __CVBuffer { } *)a1 outLuma:(id *)a2 outChroma:(id *)a3 read:(BOOL)a4 write:(BOOL)a5;
+ (BOOL)isCompressed:(struct __CVBuffer { } *)a0;
+ (id)getMTLTextureDescriptor:(struct __CVBuffer { } *)a0 device:(id)a1;
+ (BOOL)_getPixelFormatsForType:(unsigned int)a0 luma:(unsigned long long *)a1 chroma:(unsigned long long *)a2;
+ (unsigned int)getCVPixelBufferGetPixelFormatType:(unsigned long long)a0;
+ (BOOL)getMetalLumaAndChromaFormats:(struct __CVBuffer { } *)a0 luma:(unsigned long long *)a1 chroma:(unsigned long long *)a2;
+ (unsigned long long)getNoConcurrentAccessHint:(struct __CVBuffer { } *)a0;
+ (BOOL)isPixelBuffer10Bit:(struct __CVBuffer { } *)a0;
+ (BOOL)isPixelBufferVideoRange:(struct __CVBuffer { } *)a0;

@end
