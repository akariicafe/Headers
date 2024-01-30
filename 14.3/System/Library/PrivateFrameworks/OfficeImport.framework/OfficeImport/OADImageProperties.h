@class OADImageFill;

@interface OADImageProperties : OADGraphicProperties {
    OADImageFill *mImageFill;
}

+ (id)defaultProperties;

- (void).cxx_destruct;
- (id)description;
- (id)imageFill;
- (BOOL)hasImageFill;
- (void)fixPropertiesForChangingParentPreservingEffectiveValues:(id)a0;
- (void)setImageFill:(id)a0;

@end
