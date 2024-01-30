@class UIColor, UITableViewCell, UIImageView;

@interface UITableViewCellEditControl : UIControl {
    UITableViewCell *_cell;
    UIImageView *_imageView;
    UIImageView *_shadowView;
    double _focalY;
    double _focalHeight;
    unsigned char _style : 2;
    unsigned char _rotated : 1;
    unsigned char _rotating : 1;
    unsigned int _reserved : 27;
}

@property (nonatomic, getter=isRotated) BOOL rotated;
@property (readonly, nonatomic) BOOL wantsMaskingWhileAnimatingDisabled;
@property (readonly, nonatomic) BOOL wantsImageShadow;
@property (retain, nonatomic) UIColor *accessoryTintColor;
@property (retain, nonatomic) UIColor *accessoryBackgroundColor;

- (id)viewForFirstBaselineLayout;
- (void)layoutSubviews;
- (void)_dynamicUserInterfaceTraitDidChange;
- (id)_imageView;
- (id)initWithTableViewCell:(id)a0 editingStyle:(long long)a1;
- (id)viewForLastBaselineLayout;
- (void)setHighlighted:(BOOL)a0;
- (id)_multiSelectNotSelectedImage;
- (id)_multiSelectSelectedImage;
- (void)_createImageViewIfNeccessary;
- (void)_toggleRotateAnimationDidStop;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (unsigned long long)_controlEventsForActionTriggered;
- (id)_shadowImage;
- (BOOL)isRotating;
- (void)setSelected:(BOOL)a0;
- (void).cxx_destruct;
- (void)traitCollectionDidChange:(id)a0;
- (struct CGSize { double x0; double x1; })defaultSize;
- (id)_currentImage;
- (id)_renderedImage;
- (void)_toggleRotate;
- (void)setRotated:(BOOL)a0 animated:(BOOL)a1;
- (id)_deleteImage;
- (id)_insertImage;
- (void)adjustLayoutForFocalRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)_updateImageView;
- (void)_multiselectColorChanged;

@end
