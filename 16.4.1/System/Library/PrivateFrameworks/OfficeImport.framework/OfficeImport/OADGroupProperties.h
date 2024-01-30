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

- (id)effects;
- (id)initWithDefaults;
- (void).cxx_destruct;
- (void)setEffects:(id)a0;
- (id)fill;
- (BOOL)hasEffects;
- (void)setFill:(id)a0;
- (BOOL)hasFill;
- (id)scene3D;
- (id)shape3D;
- (void)fixPropertiesForChangingParentPreservingEffectiveValues:(id)a0;
- (BOOL)hasScene3D;
- (BOOL)hasShape3D;
- (void)setScene3D:(id)a0;
- (void)setShape3D:(id)a0;

@end
