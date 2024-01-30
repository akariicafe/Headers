@class OADColor;

@interface OADAdjustedColor : OADColor {
    OADColor *mBaseColor;
    int mAdjustmentType;
    unsigned char mAdjustmentParam;
    BOOL mInvert;
    BOOL mInvert128;
    BOOL mGray;
}

- (BOOL)invert;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)gray;
- (int)adjustmentType;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (id)baseColor;
- (id)initWithBaseColor:(id)a0 adjustmentType:(int)a1 adjustmentParam:(unsigned char)a2 invert:(BOOL)a3 invert128:(BOOL)a4 gray:(BOOL)a5;
- (unsigned char)adjustmentParam;
- (BOOL)invert128;

@end
