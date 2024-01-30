@class NSDictionary, OITSUColor;

@interface MFPColorAdjust : NSObject {
    struct MFPColorMatrix { float x0[5][5]; } *mColorMatrix;
    struct MFPColorMatrix { float x0[5][5]; } *mGrayMatrix;
    int mColorMatrixFlags;
    OITSUColor *mTransparentRangeLow;
    OITSUColor *mTransparentRangeHigh;
    float mGamma;
    NSDictionary *mRecolorMap;
    float mThreshold;
    BOOL mEnabled;
}

- (struct MFPColorMatrix { float x0[5][5]; } *)colorMatrix;
- (float)gamma;
- (id)init;
- (float)threshold;
- (void).cxx_destruct;
- (void)dealloc;
- (void)setThreshold:(float)a0;
- (void)setEnabled:(BOOL)a0;
- (BOOL)isEnabled;
- (void)setColorMatrix:(struct MFPColorMatrix { float x0[5][5]; } *)a0;
- (void)setGamma:(float)a0;
- (struct MFPColorMatrix { float x0[5][5]; } *)grayMatrix;
- (void)setGrayMatrix:(struct MFPColorMatrix { float x0[5][5]; } *)a0;
- (int)colorMatrixFlags;
- (void)setColorMatrixFlags:(int)a0;
- (id)transparentLow;
- (id)transparentHigh;
- (void)setTransparentLow:(id)a0 high:(id)a1;
- (id)recolorMap;
- (void)setRecolorMap:(id)a0;

@end
