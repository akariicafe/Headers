@class OADStroke, NSString, NSArray, OADFill, OADScene3D, OADShape3D;

@interface OADGraphicProperties : OADDrawableProperties <OADEffectsParent, OADProperties3DParent> {
    OADFill *mFill;
    NSArray *mEffects;
    NSArray *mExts;
    OADScene3D *mScene3D;
    OADShape3D *mShape3D;
    OADStroke *mStroke;
    unsigned char mHasIsBehindText : 1;
    unsigned char mIsBehindText : 1;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)fill;
- (id)stroke;
- (void).cxx_destruct;
- (id)exts;
- (BOOL)hasEffects;
- (BOOL)isEqual:(id)a0;
- (id)initWithDefaults;
- (id)effects;
- (BOOL)hasFill;
- (BOOL)hasExts;
- (id)scene3D;
- (id)shape3D;
- (void)setParent:(id)a0;
- (void)setStroke:(id)a0;
- (void)setEffects:(id)a0;
- (BOOL)hasStroke;
- (void)setFill:(id)a0;
- (void)setIsBehindText:(BOOL)a0;
- (void)fixPropertiesForChangingParentPreservingEffectiveValues:(id)a0;
- (void)removeUnnecessaryOverrides;
- (void)setExts:(id)a0;
- (BOOL)hasIsBehindText;
- (BOOL)isBehindText;
- (BOOL)hasNonEmptyFill;
- (void)setScene3D:(id)a0;
- (void)setShape3D:(id)a0;
- (BOOL)hasScene3D;
- (BOOL)hasShape3D;

@end
