@class SKUIPhysicalCirclesTemplateDOMFeature;

@interface SKUIJSPhysicalCirclesTemplate : IKJSObject <SKUIJSPhysicalCirclesTemplate> {
    SKUIPhysicalCirclesTemplateDOMFeature *_feature;
}

- (void).cxx_destruct;
- (id)initWithAppContext:(id)a0 DOMFeature:(id)a1;
- (void)_performAnimationWithType:(long long)a0 callback:(id)a1;
- (void)afterDOMUpdate:(id)a0;
- (void)performFinishAnimation:(id)a0;
- (void)performResetAnimation:(id)a0;

@end
