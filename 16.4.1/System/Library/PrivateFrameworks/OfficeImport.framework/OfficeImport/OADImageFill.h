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

- (id)sourceRect;
- (id)color;
- (void)setSourceRect:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)setParent:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)technique;
- (unsigned long long)hash;
- (void)setTechnique:(id)a0;
- (id)initWithDefaults;
- (void).cxx_destruct;
- (id)blipRef;
- (BOOL)isDpiOverridden;
- (int)dpi;
- (BOOL)rotateWithShape;
- (void)setDpi:(int)a0;
- (void)fixPropertiesForChangingParentPreservingEffectiveValues:(id)a0;
- (BOOL)isAnythingOverridden;
- (BOOL)isBlipRefOverridden;
- (BOOL)isRotateWithShapeOverridden;
- (BOOL)isSourceRectOverridden;
- (BOOL)isTechniqueOverridden;
- (void)removeUnnecessaryOverrides;
- (void)setBlipRef:(id)a0;
- (void)setRotateWithShape:(BOOL)a0;
- (void)setStyleColor:(id)a0;

@end
