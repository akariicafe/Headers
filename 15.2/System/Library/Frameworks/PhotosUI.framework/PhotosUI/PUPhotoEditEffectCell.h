@class NSArray, NSString, UIImageView, UIImage, UILabel, UIView, NSLayoutConstraint;

@interface PUPhotoEditEffectCell : UICollectionViewCell {
    NSLayoutConstraint *_bottomLabelConstraint;
    NSLayoutConstraint *_gapConstraint;
    NSArray *_constraints;
}

@property (retain, nonatomic, setter=_setImageView:) UIImageView *_imageView;
@property (retain, nonatomic, setter=_setNameLabel:) UILabel *_nameLabel;
@property (retain, nonatomic, setter=_setHighlightView:) UIView *_highlightView;
@property (retain, nonatomic, setter=_setSelectionView:) UIImageView *_selectionView;
@property (retain, nonatomic) UIImage *image;
@property (copy, nonatomic) NSString *name;

+ (id)selectionOutlineImage;

- (void)setSelected:(BOOL)a0 animated:(BOOL)a1;
- (void)setHighlighted:(BOOL)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setSelected:(BOOL)a0;
- (void).cxx_destruct;
- (void)updateConstraints;
- (void)prepareForReuse;
- (id)_colorForIsSelected:(BOOL)a0;
- (void)_setSubview:(id)a0 visible:(BOOL)a1 animated:(BOOL)a2;

@end
