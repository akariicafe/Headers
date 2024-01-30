@class OADImageFill;

@interface OADImageProperties : OADGraphicProperties {
    OADImageFill *mImageFill;
}

+ (id)defaultProperties;

- (id)description;
- (void).cxx_destruct;
- (id)imageFill;
- (void)fixPropertiesForChangingParentPreservingEffectiveValues:(id)a0;
- (void)setImageFill:(id)a0;
- (BOOL)hasImageFill;

@end
