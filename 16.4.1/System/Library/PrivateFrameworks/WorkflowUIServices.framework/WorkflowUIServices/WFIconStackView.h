@class CALayer, UIColor, CAStateController;

@interface WFIconStackView : UIView

@property (retain, nonatomic) CAStateController *stateController;
@property (readonly, nonatomic) CALayer *rootLayer;
@property (readonly, nonatomic) CALayer *iconLayer;
@property (readonly, nonatomic) CALayer *colorLayer;
@property (retain, nonatomic) UIColor *appIconAverageColor;

- (id)imageWithColor:(id)a0;
- (id)initWithApplicationBundleIdentifier:(id)a0;
- (void)layoutSubviews;
- (id)init;
- (void).cxx_destruct;
- (void)setState:(id)a0;
- (void)setupLayerWithBundleIdentifier:(id)a0;
- (id)layerWithName:(id)a0 fromParentLayer:(id)a1;
- (BOOL)loadLayers;
- (void)setState:(id)a0 onLayer:(id)a1 animated:(BOOL)a2;
- (void)transitionToIconOnlyState;
- (void)transitionToStackedState;

@end
