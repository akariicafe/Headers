@class UIImage;

@interface GKFixedSizeImageView : UIImageView

@property (retain, nonatomic) UIImage *actualImage;

- (void)invalidateIntrinsicContentSize;
- (void)dealloc;
- (void)setImage:(id)a0;
- (id)image;

@end
