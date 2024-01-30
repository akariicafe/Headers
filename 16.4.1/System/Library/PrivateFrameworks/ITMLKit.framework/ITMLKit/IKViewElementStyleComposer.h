@class IKViewElementStyle, IKStyleList;

@interface IKViewElementStyleComposer : NSObject

@property (readonly, nonatomic) BOOL requiresMediaQueryEvaluation;
@property (retain, nonatomic) IKViewElementStyle *composedSansDefaultStyle;
@property (retain, nonatomic) IKViewElementStyle *composedStyle;
@property (readonly, retain, nonatomic) IKViewElementStyleComposer *defaultStyleComposer;
@property (readonly, retain, nonatomic) IKViewElementStyleComposer *parentStyleComposer;
@property (readonly, retain, nonatomic) IKStyleList *styleList;
@property (readonly, retain, nonatomic) IKViewElementStyle *elementStyleOverrides;
@property (readonly, nonatomic, getter=isCompositionDone) BOOL compositionDone;

+ (id)styleComposerWithDefaultStyleComposer:(id)a0 parentStyleComposer:(id)a1 styleList:(id)a2 elementStyleOverrides:(id)a3;

- (void).cxx_destruct;
- (void)_composeWithMediaQueryEvaluator:(id)a0;
- (id)composedSansDefaultStyleWithMediaQueryEvaluator:(id)a0;
- (id)composedStyleWithMediaQueryEvaluator:(id)a0;
- (id)consolidatedDefaultStyleList;
- (id)initWithDefaultStyleComposer:(id)a0 parentStyleComposer:(id)a1 styleList:(id)a2 elementStyleOverrides:(id)a3;
- (void)setNeedsRecomposition;

@end
