@class SXViewport, CADisplayLink, NSMutableSet, NSString;

@interface SXComponentAnimationController : NSObject <SXViewportChangeListener>

@property (retain, nonatomic) NSMutableSet *registeredComponents;
@property (retain, nonatomic) NSMutableSet *animatingComponents;
@property (readonly, nonatomic) SXViewport *viewport;
@property (readonly, nonatomic) CADisplayLink *displayLink;
@property (readonly, nonatomic) NSMutableSet *animationHandlersToFinish;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)viewport:(id)a0 appearStateChangedFromState:(unsigned long long)a1;
- (void).cxx_destruct;
- (id)initWithViewport:(id)a0;
- (void)displayLinkTick:(id)a0;
- (void)viewport:(id)a0 dynamicBoundsDidChangeFromBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (void)viewport:(id)a0 documentSizeDidChangeFromSize:(struct CGSize { double x0; double x1; })a1;
- (void)viewport:(id)a0 boundsDidChangeFromBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (id)animatingHandlerForComponent:(id)a0;
- (void)updateVisibleBoundsIfNeeded;
- (id)registeredHandlerForComponent:(id)a0;
- (void)stopUpdatingAnimationForComponentView:(id)a0 finishAnimation:(BOOL)a1;
- (void)updateVisibleBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })convertRectForComponent:(id)a0;
- (void)finishAnimationHandlerAnimated:(id)a0;
- (void)startOrStopDisplayLink;
- (void)registerComponentView:(id)a0 animation:(id)a1;
- (void)unregisterComponentView:(id)a0;
- (void)startUpdatingAnimationForComponentView:(id)a0;
- (void)stopUpdatingAnimationForComponentView:(id)a0;

@end
