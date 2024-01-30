@interface PVColorSpace : NSObject {
    int _type;
}

+ (id)sRGBColorSpace;
+ (id)preferredDisplayColorSpace;
+ (id)rec709GammaColorSpace;
+ (id)preferredExportColorSpace;
+ (id)p3d65GammaColorSpace;
+ (id)rec601GammaColorSpace;
+ (id)rec709LinearColorSpace;
+ (id)p3HLGGammaColorSpace;
+ (id)p3PQGammaColorSpace;
+ (id)rec2100HLGColorSpace;
+ (id)rec2100PQColorSpace;
+ (id)rec2020LinearColorSpace;
+ (id)extendedSRGBColorSpace;
+ (id)extendedLinearSRGBColorSpace;
+ (id)pvColorSpaceFromCGColorSpace:(struct CGColorSpace { } *)a0;
+ (id)pvColorSpaceForCVPixelBuffer:(struct __CVBuffer { } *)a0;
+ (id)rec2020HLGColorSpace;
+ (id)rec2020PQColorSpace;

- (unsigned long long)hash;
- (id)initWithType:(int)a0;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (id)name;
- (BOOL)isHDRSpace;
- (id)nclcTriplet;
- (BOOL)isRec2100HLGColorSpace;
- (BOOL)isWideGamutSpace;
- (BOOL)isP3d65GammaColorSpace;
- (struct CGColorSpace { } *)cgColorSpace;
- (BOOL)isExtendedSRGBColorSpace;
- (BOOL)isSRGBColorSpace;
- (BOOL)isRec709GammaColorSpace;
- (BOOL)isEqualToCGColorSpace:(struct CGColorSpace { } *)a0;
- (BOOL)isRec2100PQColorSpace;
- (BOOL)isExtendedLinearSRGBColorSpace;
- (BOOL)isRec2020LinearColorSpace;
- (BOOL)isP3HLGGammaColorSpace;
- (BOOL)isP3PQGammaColorSpace;
- (BOOL)isRec601GammaColorSpace;
- (BOOL)isRec709LinearColorSpace;
- (BOOL)isRec2020HLGColorSpace;
- (BOOL)isRec2020PQColorSpace;

@end
