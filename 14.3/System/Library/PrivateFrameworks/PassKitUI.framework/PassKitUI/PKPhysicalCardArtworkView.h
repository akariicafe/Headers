@class NSString, UIImageView, UIImage, UILabel;

@interface PKPhysicalCardArtworkView : UIView {
    UIImageView *_artworkImageView;
    UILabel *_nameLabel;
}

@property (retain, nonatomic) UIImage *artworkImage;
@property (copy, nonatomic) NSString *nameOnCard;

- (void).cxx_destruct;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;

@end
