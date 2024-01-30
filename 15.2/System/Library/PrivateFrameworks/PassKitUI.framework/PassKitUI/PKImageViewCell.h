@class UIImageView, UIImage;

@interface PKImageViewCell : UITableViewCell

@property (readonly, nonatomic) UIImageView *imageView;
@property (retain, nonatomic) UIImage *image;
@property (nonatomic) long long imageViewContentMode;
@property (nonatomic) BOOL matchCellBackgroundToImage;

- (void)layoutSubviews;
- (void)setContentMode:(long long)a0;
- (id)initWithReuseIdentifier:(id)a0;

@end
