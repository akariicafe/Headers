@class NSString, NSArray, OADFill, OADScene3D, OADShape3D;

@interface OADGroupProperties : OADDrawableProperties <OADEffectsParent, OADProperties3DParent> {
    OADFill *mFill;
    NSArray *mEffects;
    OADScene3D *mScene3D;
    OADShape3D *mShape3D;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)defaultProperties;

- (id)fill;
- (id)initWithDefaults;
- (id)effects;
- (BOOL)hasEffects;
- (void).cxx_destruct;
- (BOOL)hasFill;
- (id)scene3D;
- (id)shape3D;
- (void)setEffects:(id)a0;
- (void)setFill:(id)a0;
- (void)fixPropertiesForChangingParentPreservingEffectiveValues:(id)a0;
- (void)setScene3D:(id)a0;
- (void)setShape3D:(id)a0;
- (BOOL)hasScene3D;
- (BOOL)hasShape3D;

@end
