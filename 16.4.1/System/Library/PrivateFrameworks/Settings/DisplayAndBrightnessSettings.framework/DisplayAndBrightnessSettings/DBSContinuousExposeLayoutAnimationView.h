@class CAPackage, CAStateController, CALayer, CAState;

@interface DBSContinuousExposeLayoutAnimationView : UIView

@property (retain, nonatomic) CALayer *packageLayer;
@property (retain, nonatomic) CAPackage *package;
@property (retain, nonatomic) CAStateController *stateController;
@property (retain, nonatomic) CAState *currentState;
@property (nonatomic) unsigned long long state;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)drawRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)traitCollectionDidChange:(id)a0;
- (void).cxx_destruct;
- (void)animateToState:(unsigned long long)a0 animated:(BOOL)a1;
- (void)configureView;
- (id)packageStateNameWithState:(unsigned long long)a0;
- (id)packageURLForContinuousExposeLayoutAnimation;
- (double)scaleFactorForInterfaceOrientation:(long long)a0;
- (void)updatePackageLayerWithPackage:(id)a0;

@end
