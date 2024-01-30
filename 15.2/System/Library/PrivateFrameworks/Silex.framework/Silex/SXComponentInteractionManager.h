@class UILongPressGestureRecognizer, SXViewport, SXComponentInteractionPreview, SXDelayed, SXComponentView, NSString, UITapGestureRecognizer;
@protocol SXComponentInteractionHandlerManager;

@interface SXComponentInteractionManager : NSObject <UIGestureRecognizerDelegate, SXComponentInteractionManager>

@property (readonly, nonatomic) id<SXComponentInteractionHandlerManager> interactionHandlerManager;
@property (readonly, nonatomic) SXViewport *viewport;
@property (readonly, nonatomic) UITapGestureRecognizer *tapGestureRecognizer;
@property (readonly, nonatomic) UILongPressGestureRecognizer *longPressGestureRecognizer;
@property (nonatomic) BOOL wantsPointyHand;
@property (retain, nonatomic) SXDelayed *longPressDelay;
@property (nonatomic) struct CGPoint { double x; double y; } longPressStartLocation;
@property (retain, nonatomic) SXComponentInteractionPreview *currentPreview;
@property (retain, nonatomic) SXComponentView *currentComponentView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)gestureRecognizer:(id)a0 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)a1;
- (void)handleLongPressGesture:(id)a0;
- (void).cxx_destruct;
- (BOOL)gestureRecognizer:(id)a0 shouldReceiveTouch:(id)a1;
- (void)handleTapGesture:(id)a0;
- (BOOL)gestureRecognizerShouldBegin:(id)a0;
- (void)commitViewController:(id)a0;
- (BOOL)hasInteractionForLocation:(struct CGPoint { double x0; double x1; })a0;
- (id)previewViewControllerForLocation:(struct CGPoint { double x0; double x1; })a0;
- (id)initWithInteractionHandlerManager:(id)a0 viewport:(id)a1;
- (void)cancelInteractionForComponentView:(id)a0;
- (void)animateHighlight:(BOOL)a0 forComponentView:(id)a1;
- (void)handleInteraction:(id)a0 withType:(unsigned long long)a1;
- (void)toggleHighlightForComponentView:(id)a0;
- (void)updateHighlight:(BOOL)a0 forComponentView:(id)a1;

@end
