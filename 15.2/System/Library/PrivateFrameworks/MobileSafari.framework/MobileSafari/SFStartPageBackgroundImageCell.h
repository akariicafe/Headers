@class UIImageView, UIImage, UIView, UIButton;
@protocol SFStartPageBackgroundImageCellDelegate;

@interface SFStartPageBackgroundImageCell : UICollectionViewCell {
    UIImageView *_imageView;
    UIView *_highlightView;
    UIView *_selectionIndicator;
    UIButton *_clearButton;
}

@property (weak, nonatomic) id<SFStartPageBackgroundImageCellDelegate> delegate;
@property (nonatomic) BOOL showsCustomImageControls;
@property (nonatomic) BOOL showsSelectionRing;
@property (retain, nonatomic) UIImage *image;

- (void)setHighlighted:(BOOL)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;
- (void)traitCollectionDidChange:(id)a0;
- (void)tintColorDidChange;
- (void)didSelectClearButton:(id)a0;
- (void)updateSelectionIndicatorColor;

@end
