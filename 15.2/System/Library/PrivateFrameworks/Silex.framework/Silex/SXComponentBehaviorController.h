@class UIDynamicAnimator, SXViewport, NSString, NSMutableSet;

@interface SXComponentBehaviorController : NSObject <SXViewportChangeListener>

@property (retain, nonatomic) SXViewport *viewport;
@property (readonly, nonatomic) NSMutableSet *behaviorHandlers;
@property (readonly, nonatomic) UIDynamicAnimator *animator;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)update;
- (void).cxx_destruct;
- (void)reset;
- (id)initWithViewport:(id)a0 andAnimator:(id)a1;
- (void)updateComponentView:(id)a0;
- (void)viewport:(id)a0 dynamicBoundsDidChangeFromBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (void)viewport:(id)a0 boundsDidChangeFromBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (void)viewport:(id)a0 appearStateChangedFromState:(unsigned long long)a1;
- (void)unregisterComponentView:(id)a0;
- (void)registerComponentView:(id)a0 behavior:(id)a1;
- (id)existingHandlerForComponentView:(id)a0 behavior:(id)a1;
- (void)updateHandler:(id)a0;

@end
