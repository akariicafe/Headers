@class TSDInteractiveCanvasController, TSDCanvasLayer, TSKScrollView;
@protocol TSDCanvasLayerHosting, UITextLinkInteraction;

@interface TSDCanvasView : UIView <UITextLinkInteraction, _UITextInputRevealSupportProviding>

@property (nonatomic) TSDInteractiveCanvasController *controller;
@property (nonatomic) id<TSDCanvasLayerHosting> layerHost;
@property (nonatomic) id<UITextLinkInteraction> hyperLinkDelegate;
@property (readonly) TSKScrollView *enclosingScrollView;
@property (readonly, nonatomic) TSDCanvasLayer *canvasLayer;
@property (readonly, nonatomic) TSDCanvasView *rootCanvasView;

+ (Class)layerClass;

- (id)actionForLayer:(id)a0 forKey:(id)a1;
- (void)teardown;
- (BOOL)pointInside:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;
- (BOOL)isInteractingWithLink;
- (void)tapLinkAtPoint:(struct CGPoint { double x0; double x1; })a0;
- (BOOL)mightHaveLinks;
- (void)startInteractionWithLinkAtPoint:(struct CGPoint { double x0; double x1; })a0;
- (void)updateInteractionWithLinkAtPoint:(struct CGPoint { double x0; double x1; })a0;
- (void)validateInteractionWithLinkAtPoint:(struct CGPoint { double x0; double x1; })a0;
- (void)cancelInteractionWithLink;
- (void)startLongInteractionWithLinkAtPoint:(struct CGPoint { double x0; double x1; })a0;
- (BOOL)willInteractWithLinkAtPoint:(struct CGPoint { double x0; double x1; })a0;
- (void)_requestTextItemConstrainedToLineAtPoint:(struct CGPoint { double x0; double x1; })a0 resultHandler:(id /* block */)a1;
- (id)_textInputForReveal;
- (id)_textImageFromRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end
