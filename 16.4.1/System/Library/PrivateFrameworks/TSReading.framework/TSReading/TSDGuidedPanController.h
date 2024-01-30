@class TSDInteractiveCanvasController, TSDCanvasLayer, UIScrollView, TSDCanvasView;
@protocol TSDPanGuide;

@interface TSDGuidedPanController : NSObject

@property (nonatomic) TSDInteractiveCanvasController *interactiveCanvasController;
@property (nonatomic) TSDCanvasView *canvasView;
@property (nonatomic) TSDCanvasLayer *canvasLayer;
@property (nonatomic) UIScrollView *canvasScrollView;
@property (nonatomic) struct CGPoint { double x; double y; } startPoint;
@property (nonatomic) struct CGPoint { double x; double y; } movement;
@property (nonatomic) struct CGPoint { double x; double y; } velocity;
@property (retain, nonatomic) id<TSDPanGuide> guide;
@property (readonly, nonatomic) struct { struct CGPoint { double x0; double x1; } x0; } touchContentPlacement;
@property (readonly, nonatomic) struct { struct CGPoint { double x0; double x1; } x0; } centerPlusMovementContentPlacement;

- (void)dealloc;
- (void)handlePanGesture:(id)a0;
- (id)initWithInteractiveCanvasController:(id)a0;
- (id)convertContentLocation:(id)a0 fromPlacement:(struct { struct CGPoint { double x0; double x1; } x0; })a1 toPlacement:(struct { struct CGPoint { double x0; double x1; } x0; })a2;
- (struct CGPoint { double x0; double x1; })p_boundsOffsetForContentLocation:(id)a0 placement:(struct { struct CGPoint { double x0; double x1; } x0; })a1;
- (id)p_convertContentLocation:(id)a0 fromPlacement:(struct { struct CGPoint { double x0; double x1; } x0; })a1 toPlacement:(struct { struct CGPoint { double x0; double x1; } x0; })a2;
- (id)p_currentContentLocationWithPlacement:(struct { struct CGPoint { double x0; double x1; } x0; })a0;
- (void)p_didEnd;
- (void)p_scrollToContentLocation:(id)a0 placement:(struct { struct CGPoint { double x0; double x1; } x0; })a1;
- (struct CATransform3D { double x0; double x1; double x2; double x3; double x4; double x5; double x6; double x7; double x8; double x9; double x10; double x11; double x12; double x13; double x14; double x15; })p_transformForContentLocation:(id)a0 placement:(struct { struct CGPoint { double x0; double x1; } x0; })a1;
- (void)p_willBegin;

@end
