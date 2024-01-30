@class PyramidStorage_NRF;

@interface AMBNRBuffers : NSObject {
    PyramidStorage_NRF *pyramid;
    PyramidStorage_NRF *noiseMapPyramid;
    PyramidStorage_NRF *sharpeningPyramid;
}

+ (int)aliasAMBNRPyramidLevel:(id)a0 lvl:(int)a1 width:(int)a2 height:(int)a3 metal:(id)a4 scratchBuffer:(id)a5 offset:(unsigned long long *)a6;
+ (unsigned long long)calculateBytesRequiredForAMBNRPyramidWithWidth:(int)a0 height:(int)a1;
+ (unsigned long long)calculateBytesRequiredForAMBNRPyramidWithWidth:(int)a0 height:(int)a1 startingLevel:(int)a2;
+ (int)createAMBNRPyramidForWidth:(int)a0 height:(int)a1 pyramid:(id)a2 metal:(id)a3 scratchBuffer:(id)a4 offset:(unsigned long long *)a5;
+ (int)createAMBNRPyramidForWidth:(int)a0 height:(int)a1 startingLevel:(int)a2 pyramid:(id)a3 metal:(id)a4 scratchBuffer:(id)a5 offset:(unsigned long long *)a6;

- (void)releaseBuffers;
- (id)init;
- (void).cxx_destruct;
- (void)releasePyramidsBottom;

@end
