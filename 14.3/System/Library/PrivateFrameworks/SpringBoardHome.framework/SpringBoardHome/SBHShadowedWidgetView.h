@class UIView;

@interface SBHShadowedWidgetView : UIView

@property (retain, nonatomic) UIView *contentView;
@property (retain, nonatomic) UIView *shadowView;
@property (nonatomic, getter=isPerspectiveEnabled) BOOL perspectiveEnabled;
@property (nonatomic) double cornerRadius;
@property (nonatomic) struct CGAffineTransform { double a; double b; double c; double d; double tx; double ty; } contentTransform;
@property (nonatomic) struct CGAffineTransform { double a; double b; double c; double d; double tx; double ty; } shadowSupplementalTransform;

+ (Class)layerClass;

- (void).cxx_destruct;
- (void)_updateZPositions;
- (id)initWithContentView:(id)a0 shadowView:(id)a1 perspectiveEnabled:(BOOL)a2;
- (void)layoutSubviews;

@end
