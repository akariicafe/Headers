@class UIImageView, CNSharingProfilePhotoPickerItem, CAShapeLayer;

@interface CNSharingProfilePhotoPickerItemCell : UICollectionViewCell

@property (retain, nonatomic) CAShapeLayer *selectionStrokeLayer;
@property (retain, nonatomic) UIImageView *imageView;
@property (nonatomic) struct CGSize { double width; double height; } originalSize;
@property (nonatomic) BOOL isSmallScreen;
@property (retain, nonatomic) CNSharingProfilePhotoPickerItem *pickerItem;

+ (id)reuseIdentifier;

- (void).cxx_destruct;
- (void)updateWithImage:(id)a0;
- (id)selectionBezierPath;
- (void)prepareForReuse;
- (void)setSelected:(BOOL)a0;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)traitCollectionDidChange:(id)a0;
- (void)setHighlighted:(BOOL)a0;

@end
