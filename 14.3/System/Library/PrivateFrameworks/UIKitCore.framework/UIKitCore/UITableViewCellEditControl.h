@class UIImageView, UITableViewCell;

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

- (id)viewForFirstBaselineLayout;
- (id)viewForLastBaselineLayout;
- (struct CGSize { double x0; double x1; })defaultSize;
- (id)_imageView;
- (void).cxx_destruct;
- (void)setRotated:(BOOL)a0 animated:(BOOL)a1;
- (void)adjustLayoutForFocalRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)_multiselectColorChanged;
- (void)_dynamicUserInterfaceTraitDidChange;
- (id)_deleteImage;
- (id)initWithTableViewCell:(id)a0 editingStyle:(long long)a1;
- (void)setSelected:(BOOL)a0;
- (id)_insertImage;
- (void)_toggleRotate;
- (id)_multiSelectNotSelectedImage;
- (id)_multiSelectSelectedImage;
- (void)_createImageViewIfNeccessary;
- (void)_toggleRotateAnimationDidStop;
- (BOOL)isRotating;
- (id)_currentImage;
- (void)layoutSubviews;
- (void)_updateImageView;
- (unsigned long long)_controlEventsForActionTriggered;
- (id)_shadowImage;
- (void)traitCollectionDidChange:(id)a0;
- (void)setHighlighted:(BOOL)a0;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (id)_renderedImage;

@end
