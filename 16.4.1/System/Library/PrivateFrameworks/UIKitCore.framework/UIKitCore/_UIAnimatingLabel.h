@interface _UIAnimatingLabel : UILabel {
    BOOL _shouldAnimateVariantWeight;
}

+ (Class)layerClass;

- (void)drawLayer:(id)a0 inContext:(struct CGContext { } *)a1;
- (BOOL)_shouldAnimatePropertyWithKey:(id)a0;
- (void)setFont:(id)a0;

@end
