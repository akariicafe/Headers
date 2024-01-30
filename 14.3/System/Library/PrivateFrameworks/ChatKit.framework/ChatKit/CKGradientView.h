@class CKBaseLayer, CATransformLayer, NSArray, UIImage, UIView;
@protocol CKGradientReferenceView;

@interface CKGradientView : UIView <CKLayerDelegate>

@property (retain, nonatomic) CKBaseLayer *gradientLayer;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } gradientFrame;
@property (retain, nonatomic) CATransformLayer *trackingLayer;
@property (weak, nonatomic) UIView<CKGradientReferenceView> *referenceView;
@property (retain, nonatomic) NSArray *colors;
@property (retain, nonatomic) UIImage *maskImage;
@property (readonly, nonatomic) UIImage *gradient;

+ (id)gradientViews;

- (void).cxx_destruct;
- (void)ckLayerDidBecomeVisible:(BOOL)a0;
- (void)dealloc;
- (void)_removeAllAnimations:(BOOL)a0;
- (void)didMoveToSuperview;
- (void)didMoveToWindow;
- (id)description;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)updateAnimation;
- (void)updateGradientImage;

@end
