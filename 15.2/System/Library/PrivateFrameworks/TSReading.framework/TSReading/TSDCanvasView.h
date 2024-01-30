@class TSDInteractiveCanvasController, TSDCanvasLayer, NSString, UITextInputPasswordRules, TSKScrollView;
@protocol TSDCanvasLayerHosting, UITextLinkInteraction;

@interface TSDCanvasView : UIView <UITextLinkInteraction, _UITextInputRevealSupportProviding, UITextInputTraits>

@property (nonatomic) TSDInteractiveCanvasController *controller;
@property (nonatomic) id<TSDCanvasLayerHosting> layerHost;
@property (nonatomic) id<UITextLinkInteraction> hyperLinkDelegate;
@property (readonly) TSKScrollView *enclosingScrollView;
@property (readonly, nonatomic) TSDCanvasLayer *canvasLayer;
@property (readonly, nonatomic) TSDCanvasView *rootCanvasView;
@property (nonatomic) long long autocapitalizationType;
@property (nonatomic) long long autocorrectionType;
@property (nonatomic) long long spellCheckingType;
@property (nonatomic) long long smartQuotesType;
@property (nonatomic) long long smartDashesType;
@property (nonatomic) long long smartInsertDeleteType;
@property (nonatomic) long long keyboardType;
@property (nonatomic) long long keyboardAppearance;
@property (nonatomic) long long returnKeyType;
@property (nonatomic) BOOL enablesReturnKeyAutomatically;
@property (nonatomic, getter=isSecureTextEntry) BOOL secureTextEntry;
@property (copy, nonatomic) NSString *textContentType;
@property (copy, nonatomic) UITextInputPasswordRules *passwordRules;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (Class)layerClass;

- (void)teardown;
- (BOOL)pointInside:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;
- (id)_textInputForReveal;
- (BOOL)isInteractingWithLink;
- (void)cancelInteractionWithLink;
- (void)tapLinkAtPoint:(struct CGPoint { double x0; double x1; })a0;
- (BOOL)mightHaveLinks;
- (void)startInteractionWithLinkAtPoint:(struct CGPoint { double x0; double x1; })a0;
- (void)updateInteractionWithLinkAtPoint:(struct CGPoint { double x0; double x1; })a0;
- (void)validateInteractionWithLinkAtPoint:(struct CGPoint { double x0; double x1; })a0;
- (void)startLongInteractionWithLinkAtPoint:(struct CGPoint { double x0; double x1; })a0;
- (BOOL)willInteractWithLinkAtPoint:(struct CGPoint { double x0; double x1; })a0;
- (void)_requestTextItemConstrainedToLineAtPoint:(struct CGPoint { double x0; double x1; })a0 resultHandler:(id /* block */)a1;
- (void)didAddSubview:(id)a0;
- (id)actionForLayer:(id)a0 forKey:(id)a1;
- (id)_textImageFromRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end
