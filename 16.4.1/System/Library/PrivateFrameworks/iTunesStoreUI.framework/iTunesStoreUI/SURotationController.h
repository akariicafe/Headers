@class SUViewController;

@interface SURotationController : NSObject

@property (nonatomic) SUViewController *viewController;

- (id)initWithViewController:(id)a0;
- (void)dealloc;
- (id)init;
- (void)finishRotationFromInterfaceOrientation:(long long)a0;
- (void)animateRotationToInterfaceOrientation:(long long)a0 duration:(double)a1;
- (BOOL)orientationAffectsViewFrame;
- (void)prepareToRotateToInterfaceOrientation:(long long)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })viewFrameForInterfaceOrientation:(long long)a0;

@end
