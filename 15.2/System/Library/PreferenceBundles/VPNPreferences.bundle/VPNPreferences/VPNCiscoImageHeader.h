@class UIImageView;

@interface VPNCiscoImageHeader : UIView <PSHeaderFooterView>

@property (retain) UIImageView *imageView;

- (void)layoutSubviews;
- (void)setImageHidden:(BOOL)a0;
- (void).cxx_destruct;
- (double)preferredHeightForWidth:(double)a0;
- (id)initWithSpecifier:(id)a0;

@end
