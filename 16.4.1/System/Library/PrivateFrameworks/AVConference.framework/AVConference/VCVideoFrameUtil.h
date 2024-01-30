@interface VCVideoFrameUtil : NSObject

+ (struct { long long x0; int x1; unsigned int x2; long long x3; })CMTimeFromXPCDictionary:(id)a0;
+ (struct __CVBuffer { } *)newCVPixelBufferFromXPCDictionary:(id)a0 isDepth:(BOOL)a1;
+ (id)newXPCDictionaryWithCVPixelBuffer:(struct __CVBuffer { } *)a0 depthPixelBuffer:(struct __CVBuffer { } *)a1 time:(struct { long long x0; int x1; unsigned int x2; long long x3; })a2;

@end
