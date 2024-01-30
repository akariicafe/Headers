@class UIColor, NSString, UIImage, SKUICountdownView, SKUIClientContext, UIImageView, UILabel, SKUICountdown;

@interface SKUIBrickCollectionViewCell : UICollectionViewCell {
    SKUICountdownView *_countdownView;
    UIColor *_titleColor;
    UILabel *_titleLabel;
    UIImageView *_overlayImageView;
}

@property (copy, nonatomic) NSString *accessibilityLabel;
@property (copy, nonatomic) NSString *title;
@property (retain, nonatomic) SKUICountdown *countdown;
@property (retain, nonatomic) SKUIClientContext *clientContext;
@property (retain, nonatomic) UIImage *itemImage;
@property (nonatomic, getter=isItemImageHidden) BOOL itemImageHidden;
@property (nonatomic) struct UIEdgeInsets { double top; double left; double bottom; double right; } itemImageInsets;
@property (readonly, nonatomic) UIImageView *itemImageView;

- (void)setSelected:(BOOL)a0;
- (void)setHighlighted:(BOOL)a0;
- (void)setBackgroundColor:(id)a0;
- (void)layoutSubviews;
- (void).cxx_destruct;
- (void)_reloadHighlight;
- (void)_removeOverlay;
- (void)setColoringWithColorScheme:(id)a0;

@end
