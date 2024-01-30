@interface OADColorTransform : NSObject <NSCopying> {
    int mType;
}

+ (id)colorByApplyingTransforms:(id)a0 toColor:(id)a1;
+ (float)alphaByApplyingTransforms:(id)a0 toAlpha:(float)a1;
+ (float)applyAlphaTransform:(id)a0 toAlpha:(float)a1;
+ (id)applyExpTransformWithValue:(float)a0 toColor:(id)a1;
+ (id)applyRGBTransform:(id)a0 toColor:(id)a1 skipGamma:(BOOL)a2;
+ (id)applyHSLTransform:(id)a0 toColor:(id)a1;

- (id)description;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithType:(int)a0;
- (int)type;
- (unsigned long long)hash;

@end
