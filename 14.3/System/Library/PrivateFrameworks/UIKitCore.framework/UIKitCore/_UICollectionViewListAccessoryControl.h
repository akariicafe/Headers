@class UIColor, UIImageView;
@protocol UITableConstants;

@interface _UICollectionViewListAccessoryControl : UIControl {
    UIImageView *_imageView;
    BOOL _needsImageViewUpdate;
}

@property (nonatomic) long long type;
@property (retain, nonatomic) id<UITableConstants> constants;
@property (retain, nonatomic) UIColor *accessoryTintColor;
@property (retain, nonatomic) UIColor *accessoryBackgroundColor;

- (id)viewForFirstBaselineLayout;
- (id)viewForLastBaselineLayout;
- (void).cxx_destruct;
- (void)setSelected:(BOOL)a0;
- (void)_updateImageViewIfNeeded;
- (void)layoutSubviews;
- (unsigned long long)_controlEventsForActionTriggered;
- (id)initWithType:(long long)a0 constants:(id)a1;
- (void)addActionHandler:(id /* block */)a0;
- (void)_setNeedsImageViewUpdate;
- (void)traitCollectionDidChange:(id)a0;
- (void)setHighlighted:(BOOL)a0;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (id)_renderedImage;

@end
