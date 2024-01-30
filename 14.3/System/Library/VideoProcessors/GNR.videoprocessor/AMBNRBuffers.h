@class PyramidStorage;

@interface AMBNRBuffers : NSObject {
    PyramidStorage *pyramid;
    PyramidStorage *laplacianPyramid;
    PyramidStorage *denoisedPyramid[4];
}

+ (int)aliasAMBNRPyramidLevel:(id)a0 lvl:(int)a1 width:(int)a2 height:(int)a3 useHalfFloat:(BOOL)a4 metal:(id)a5 scratchBuffer:(id)a6 offset:(unsigned long long *)a7;
+ (int)createAMBNRPyramidFromWidth:(unsigned long long)a0 height:(unsigned long long)a1 pyramid:(id)a2 metal:(id)a3 useHalfFloat:(BOOL)a4 scratchBuffer:(id)a5 offset:(unsigned long long *)a6;
+ (int)bindFP16PyramidToU8:(id)a0 pyr_u8:(id)a1 metal:(id)a2;

- (id)init;
- (void).cxx_destruct;
- (void)releaseBuffers;
- (void)releasePyramidsBottom;

@end
