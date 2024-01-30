@class UIVibrancyEffect, UIImageView, CAShapeLayer, UIView, UILabel, UIVisualEffectView;

@interface CKEffectSelectionCollectionViewCell : UICollectionViewCell

@property (retain, nonatomic) CAShapeLayer *selectionLayer;
@property (retain, nonatomic) UIView *shadowView;
@property (retain, nonatomic) UIImageView *imageView;
@property (retain, nonatomic) UILabel *label;
@property (retain, nonatomic) UIVisualEffectView *titleContainerView;
@property (retain, nonatomic) UIVibrancyEffect *titleVibrancyEffect;

- (void).cxx_destruct;
- (void)setSelected:(BOOL)a0;
- (void)setTitle:(id)a0;
- (void)layoutSubviews;
- (void)configureForEffectIsDark:(BOOL)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setImage:(id)a0;

@end
