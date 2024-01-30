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

- (void)_updateImageViewIfNeeded;
- (id)viewForFirstBaselineLayout;
- (void)layoutSubviews;
- (id)viewForLastBaselineLayout;
- (void)setHighlighted:(BOOL)a0;
- (void)addActionHandler:(id /* block */)a0;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (unsigned long long)_controlEventsForActionTriggered;
- (void)setSelected:(BOOL)a0;
- (void).cxx_destruct;
- (void)traitCollectionDidChange:(id)a0;
- (id)initWithType:(long long)a0 constants:(id)a1;
- (id)_renderedImage;
- (void)_setNeedsImageViewUpdate;

@end
