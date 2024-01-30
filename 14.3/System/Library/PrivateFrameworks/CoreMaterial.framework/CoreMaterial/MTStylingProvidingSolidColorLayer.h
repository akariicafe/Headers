@class NSMutableDictionary;

@interface MTStylingProvidingSolidColorLayer : CALayer

@property (retain, nonatomic) NSMutableDictionary *cmStylingProviders;

- (void)_updateVisualStylingProviders;
- (void).cxx_destruct;
- (void)_updateVisualStylingProviderForCategory:(id)a0;
- (id)_styleSetForCategory:(id)a0;
- (id)_fillLightStyleSet;
- (id)_strokeLightStyleSet;
- (id)_fillDarkStyleSet;
- (id)_strokeDarkStyleSet;
- (id)_styleSetNameForCategory:(id)a0;
- (id)_styleSetForCategory:(id)a0 withPrimaryStyleDictionary:(id)a1 secondaryStyleDictionary:(id)a2 tertiaryStyleDictionary:(id)a3;
- (void)setBackgroundColor:(struct CGColor { } *)a0;
- (id)visualStylingProviderForCategory:(id)a0;

@end
