@interface PVColorSpace : NSObject {
    int _type;
}

+ (id)sRGBColorSpace;
+ (id)rec601_EBU_3213_GammaColorSpace;
+ (id)extendedDisplayP3ColorSpace;
+ (id)extendedLinearSRGBColorSpace;
+ (id)extendedSRGBColorSpace;
+ (id)p3HLGGammaColorSpace;
+ (id)p3PQGammaColorSpace;
+ (id)p3d65GammaColorSpace;
+ (id)preferredDisplayColorSpace;
+ (id)preferredExportColorSpace;
+ (id)pvColorSpaceForCVPixelBuffer:(struct __CVBuffer { } *)a0;
+ (id)pvColorSpaceFromCGColorSpace:(struct CGColorSpace { } *)a0;
+ (id)rec2020GammaColorSpace;
+ (id)rec2020HLGColorSpace;
+ (id)rec2020LinearColorSpace;
+ (id)rec2020PQColorSpace;
+ (id)rec2100HLGColorSpace;
+ (id)rec2100PQColorSpace;
+ (id)rec601GammaColorSpace;
+ (id)rec601_1_1_6_GammaColorSpace;
+ (id)rec601_SMPTE_C_GammaColorSpace;
+ (id)rec709GammaColorSpace;
+ (id)rec709LinearColorSpace;

- (id)initWithType:(int)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)description;
- (id)name;
- (struct CGColorSpace { } *)cgColorSpace;
- (BOOL)isEqualToCGColorSpace:(struct CGColorSpace { } *)a0;
- (BOOL)isExtendedDisplayP3ColorSpace;
- (BOOL)isExtendedLinearSRGBColorSpace;
- (BOOL)isExtendedSRGBColorSpace;
- (BOOL)isHDRSpace;
- (BOOL)isP3HLGGammaColorSpace;
- (BOOL)isP3PQGammaColorSpace;
- (BOOL)isP3d65GammaColorSpace;
- (BOOL)isRec2020GammaColorSpace;
- (BOOL)isRec2020HLGColorSpace;
- (BOOL)isRec2020LinearColorSpace;
- (BOOL)isRec2020PQColorSpace;
- (BOOL)isRec2100HLGColorSpace;
- (BOOL)isRec2100PQColorSpace;
- (BOOL)isRec601GammaColorSpace;
- (BOOL)isRec601_1_1_6_GammaColorSpace;
- (BOOL)isRec601_EBU_3213_GammaColorSpace;
- (BOOL)isRec601_SMPTE_C_GammaColorSpace;
- (BOOL)isRec709GammaColorSpace;
- (BOOL)isRec709LinearColorSpace;
- (BOOL)isSRGBColorSpace;
- (BOOL)isWideGamutSpace;
- (id)nclcTriplet;

@end
