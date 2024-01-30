@class NSString, UIGestureRecognizer;
@protocol SBAppPlatterDragSourceViewProviding;

@interface SBWindowDragInteraction : UIDragInteraction

@property (readonly, weak, nonatomic) UIGestureRecognizer *gestureRecognizer;
@property (weak, nonatomic) id<SBAppPlatterDragSourceViewProviding> sourceViewProvider;
@property (retain, nonatomic) NSString *sceneIdentifier;
@property (retain, nonatomic) NSString *bundleIdentifier;

- (struct CGPoint { double x0; double x1; })_locationInView:(id)a0;
- (void).cxx_destruct;
- (id)initWithDelegate:(id)a0 gestureRecognizer:(id)a1;

@end
