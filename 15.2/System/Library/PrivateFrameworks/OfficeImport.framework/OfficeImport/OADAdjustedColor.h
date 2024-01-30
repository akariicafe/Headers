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
- (BOOL)gray;
- (int)adjustmentType;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (id)baseColor;
- (id)initWithBaseColor:(id)a0 adjustmentType:(int)a1 adjustmentParam:(unsigned char)a2 invert:(BOOL)a3 invert128:(BOOL)a4 gray:(BOOL)a5;
- (unsigned char)adjustmentParam;
- (BOOL)invert128;

@end
