@interface SXParallaxComponentBehaviorHandler : SXComponentBehaviorHandler

@property (readonly, nonatomic) BOOL isRotating;
@property (nonatomic) BOOL inFirstViewport;
@property (nonatomic) BOOL inLastViewport;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } absoluteContentViewFrame;
@property (nonatomic) int direction;
@property (readonly, nonatomic) double factor;

- (id)initWithComponentView:(id)a0 withBehavior:(id)a1;
- (void)setupWithBehaviorController:(id)a0;
- (void)updateWithBehaviorController:(id)a0;
- (void)destroyWithBehaviorController:(id)a0;
- (BOOL)requiresContinuousUpdates;

@end
