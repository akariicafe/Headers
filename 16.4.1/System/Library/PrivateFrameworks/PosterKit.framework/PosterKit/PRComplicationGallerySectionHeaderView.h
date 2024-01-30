@class NSString, UIImageView, UIImage, UILabel;

@interface PRComplicationGallerySectionHeaderView : UICollectionReusableView {
    UIImageView *_iconImageView;
    UILabel *_label;
}

@property (retain, nonatomic) NSString *title;
@property (retain, nonatomic) UIImage *iconImage;

+ (struct CGSize { double x0; double x1; })iconImageSize;

- (void)prepareForReuse;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;

@end
