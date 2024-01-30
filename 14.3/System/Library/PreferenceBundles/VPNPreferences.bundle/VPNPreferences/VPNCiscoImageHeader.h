@class UIImageView;

@interface VPNCiscoImageHeader : UIView <PSHeaderFooterView>

@property (retain) UIImageView *imageView;

- (id)initWithSpecifier:(id)a0;
- (void).cxx_destruct;
- (double)preferredHeightForWidth:(double)a0;
- (void)layoutSubviews;
- (void)setImageHidden:(BOOL)a0;

@end
