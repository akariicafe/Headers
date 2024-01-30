@class UIImageView, CNSharingProfilePhotoPickerItem, CAShapeLayer;

@interface CNSharingProfilePhotoPickerItemCell : UICollectionViewCell

@property (retain, nonatomic) CAShapeLayer *selectionStrokeLayer;
@property (retain, nonatomic) UIImageView *imageView;
@property (nonatomic) struct CGSize { double width; double height; } originalSize;
@property (nonatomic) BOOL isSmallScreen;
@property (retain, nonatomic) CNSharingProfilePhotoPickerItem *pickerItem;

+ (id)reuseIdentifier;

- (void)layoutSubviews;
- (void)setHighlighted:(BOOL)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setSelected:(BOOL)a0;
- (void).cxx_destruct;
- (void)traitCollectionDidChange:(id)a0;
- (void)prepareForReuse;
- (void)updateWithImage:(id)a0;
- (id)selectionBezierPath;

@end
