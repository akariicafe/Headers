@class UIImageView, UIImage;

@interface PKImageViewCell : UITableViewCell

@property (readonly, nonatomic) UIImageView *imageView;
@property (retain, nonatomic) UIImage *image;
@property (nonatomic) long long imageViewContentMode;
@property (nonatomic) BOOL matchCellBackgroundToImage;

- (void)setContentMode:(long long)a0;
- (void)layoutSubviews;
- (id)initWithReuseIdentifier:(id)a0;

@end
