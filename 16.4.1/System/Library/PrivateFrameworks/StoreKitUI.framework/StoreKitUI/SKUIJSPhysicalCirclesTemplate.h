@class SKUIPhysicalCirclesTemplateDOMFeature;

@interface SKUIJSPhysicalCirclesTemplate : IKJSObject <SKUIJSPhysicalCirclesTemplate> {
    SKUIPhysicalCirclesTemplateDOMFeature *_feature;
}

- (void).cxx_destruct;
- (void)afterDOMUpdate:(id)a0;
- (void)_performAnimationWithType:(long long)a0 callback:(id)a1;
- (id)initWithAppContext:(id)a0 DOMFeature:(id)a1;
- (void)performFinishAnimation:(id)a0;
- (void)performResetAnimation:(id)a0;

@end
