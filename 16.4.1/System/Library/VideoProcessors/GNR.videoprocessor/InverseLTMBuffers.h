@protocol MTLTexture;

@interface InverseLTMBuffers : NSObject {
    id<MTLTexture> inverseLtmTex;
    id<MTLTexture> inverseGlobalLtmTex;
    id<MTLTexture> inverseGtcTex;
}

- (int)setToneCurves:(struct ltmCurves { unsigned short x0[1584]; unsigned short x1[257]; unsigned short x2[257]; } *)a0;
- (id)initWithMetal:(id)a0;
- (void).cxx_destruct;

@end
