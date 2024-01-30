@interface PVColorSpace : NSObject {
    int _type;
}

+ (id)sRGBColorSpace;
+ (id)preferredDisplayColorSpace;
+ (id)preferredExportColorSpace;
+ (id)rec709GammaColorSpace;
+ (id)rec2100HLGColorSpace;
+ (id)p3d65GammaColorSpace;
+ (id)rec601GammaColorSpace;
+ (id)rec709LinearColorSpace;
+ (id)p3HLGGammaColorSpace;
+ (id)p3PQGammaColorSpace;
+ (id)rec2100PQColorSpace;
+ (id)rec2020LinearColorSpace;
+ (id)extendedSRGBColorSpace;
+ (id)extendedLinearSRGBColorSpace;
+ (id)pvColorSpaceFromCGColorSpace:(struct CGColorSpace { } *)a0;
+ (id)pvColorSpaceForCVPixelBuffer:(struct __CVBuffer { } *)a0;
+ (id)rec2020GammaColorSpace;
+ (id)rec2020HLGColorSpace;
+ (id)rec601_1_1_6_GammaColorSpace;
+ (id)rec601_SMPTE_C_GammaColorSpace;
+ (id)rec601_EBU_3213_GammaColorSpace;
+ (id)rec2020PQColorSpace;

- (id)description;
- (BOOL)isEqual:(id)a0;
- (id)initWithType:(int)a0;
- (id)name;
- (unsigned long long)hash;
- (BOOL)isHDRSpace;
- (id)nclcTriplet;
- (BOOL)isWideGamutSpace;
- (BOOL)isP3d65GammaColorSpace;
- (struct CGColorSpace { } *)cgColorSpace;
- (BOOL)isRec709GammaColorSpace;
- (BOOL)isExtendedSRGBColorSpace;
- (BOOL)isSRGBColorSpace;
- (BOOL)isRec2100PQColorSpace;
- (BOOL)isP3PQGammaColorSpace;
- (BOOL)isRec2020LinearColorSpace;
- (BOOL)isRec2100HLGColorSpace;
- (BOOL)isRec2020GammaColorSpace;
- (BOOL)isEqualToCGColorSpace:(struct CGColorSpace { } *)a0;
- (BOOL)isRec601_1_1_6_GammaColorSpace;
- (BOOL)isExtendedLinearSRGBColorSpace;
- (BOOL)isP3HLGGammaColorSpace;
- (BOOL)isRec601GammaColorSpace;
- (BOOL)isRec601_SMPTE_C_GammaColorSpace;
- (BOOL)isRec601_EBU_3213_GammaColorSpace;
- (BOOL)isRec709LinearColorSpace;
- (BOOL)isRec2020HLGColorSpace;
- (BOOL)isRec2020PQColorSpace;

@end
