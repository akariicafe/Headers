@class MFPCustomLineCap, MFPBrush;

@interface MFPPen : NSObject {
    MFPBrush *mBrush;
    float mWidth;
    struct CGAffineTransform { double a; double b; double c; double d; double tx; double ty; } mTransform;
    int mStartCap;
    int mEndCap;
    int mLineJoin;
    float mMiterLimit;
    int mDashStyle;
    int mDashCap;
    float mDashOffset;
    int mDashPatternCount;
    float *mDashPattern;
    int mAlignment;
    int mCompoundArrayCount;
    float *mCompoundArray;
    MFPCustomLineCap *mCustomStartCap;
    MFPCustomLineCap *mCustomEndCap;
}

- (float)width;
- (struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })transform;
- (void)setWidth:(float)a0;
- (int)alignment;
- (void)setAlignment:(int)a0;
- (void)strokePath:(id)a0;
- (void)setTransform:(struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })a0;
- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (int)lineJoin;
- (float)miterLimit;
- (void)setLineJoin:(int)a0;
- (void)setMiterLimit:(float)a0;
- (id)brush;
- (int)dashStyle;
- (void)setDashStyle:(int)a0;
- (const float *)dashPattern;
- (int)dashCap;
- (void)applyDashCapToPath:(id)a0;
- (void)applyDashPatternToPath:(id)a0;
- (void)applyLineCapToPath:(id)a0;
- (void)applyLineJoinToPath:(id)a0;
- (const float *)compoundArray;
- (int)compoundArrayCount;
- (id)customEndCap;
- (id)customStartCap;
- (float)dashOffset;
- (int)dashPatternCount;
- (int)endCap;
- (void)setBrush:(id)a0;
- (void)setCompoundArray:(const float *)a0 count:(int)a1;
- (void)setCustomEndCap:(id)a0;
- (void)setCustomStartCap:(id)a0;
- (void)setDashCap:(int)a0;
- (void)setDashOffset:(float)a0;
- (void)setDashPattern:(const float *)a0 count:(int)a1;
- (void)setDashPattern:(const float *)a0 count:(int)a1 toPath:(id)a2;
- (void)setEndCap:(int)a0;
- (void)setStartCap:(int)a0;
- (int)startCap;

@end
