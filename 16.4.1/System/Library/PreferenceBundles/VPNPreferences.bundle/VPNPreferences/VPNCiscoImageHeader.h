@class UIImageView;

@interface VPNCiscoImageHeader : UIView <PSHeaderFooterView>

@property (retain) UIImageView *imageView;

- (id)initWithSpecifier:(id)a0;
- (void)layoutSubviews;
- (void).cxx_destruct;
- (void)setImageHidden:(BOOL)a0;
- (double)preferredHeightForWidth:(double)a0;

@end
