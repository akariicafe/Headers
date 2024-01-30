@class OADImageFillTechnique, OADBlipRef, OADRelativeRect;

@interface OADImageFill : OADFill {
    OADBlipRef *mBlipRef;
    BOOL mIsBlipRefOverridden;
    OADRelativeRect *mSourceRect;
    int mDpi;
    BOOL mIsDpiOverridden;
    BOOL mRotateWithShape;
    BOOL mIsRotateWithShapeOverridden;
    OADImageFillTechnique *mTechnique;
}

+ (id)defaultProperties;

- (int)dpi;
- (id)initWithDefaults;
- (void)setTechnique:(id)a0;
- (void)setParent:(id)a0;
- (void)setSourceRect:(id)a0;
- (id)sourceRect;
- (id)color;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (void)setDpi:(int)a0;
- (id)blipRef;
- (id)technique;
- (void)setRotateWithShape:(BOOL)a0;
- (void)setBlipRef:(id)a0;
- (void)setStyleColor:(id)a0;
- (void)fixPropertiesForChangingParentPreservingEffectiveValues:(id)a0;
- (BOOL)isAnythingOverridden;
- (void)removeUnnecessaryOverrides;
- (BOOL)isRotateWithShapeOverridden;
- (BOOL)rotateWithShape;
- (BOOL)isBlipRefOverridden;
- (BOOL)isSourceRectOverridden;
- (BOOL)isDpiOverridden;
- (BOOL)isTechniqueOverridden;

@end
