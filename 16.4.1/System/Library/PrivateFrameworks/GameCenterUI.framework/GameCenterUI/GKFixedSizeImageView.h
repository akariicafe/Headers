@class UIImage;

@interface GKFixedSizeImageView : UIImageView

@property (retain, nonatomic) UIImage *actualImage;

- (void)setImage:(id)a0;
- (id)image;
- (void)invalidateIntrinsicContentSize;
- (void).cxx_destruct;

@end
