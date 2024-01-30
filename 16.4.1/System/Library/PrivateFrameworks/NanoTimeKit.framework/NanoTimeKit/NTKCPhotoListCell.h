@class UIImage, UIImageView, UIView;

@interface NTKCPhotoListCell : UICollectionViewCell {
    UIView *_selectionOverlayView;
    UIImageView *_selectionBadge;
    UIView *_highlightOverlayView;
    UIView *_content;
    UIImageView *_contentImageView;
}

@property (retain, nonatomic) UIImage *photo;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } crop;
@property (nonatomic) unsigned long long index;

+ (id)reuseIdentifier;

- (void)setSelected:(BOOL)a0;
- (void)prepareForReuse;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setHighlighted:(BOOL)a0;
- (void)layoutSubviews;
- (void).cxx_destruct;

@end
