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
@property (copy, nonatomic) id /* block */ actionHandler;

- (void)_updateImageViewIfNeeded;
- (unsigned long long)_controlEventsForActionTriggered;
- (void)setSelected:(BOOL)a0;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (void)setHighlighted:(BOOL)a0;
- (id)viewForLastBaselineLayout;
- (id)_renderedImage;
- (void)layoutSubviews;
- (void)_setNeedsImageViewUpdate;
- (id)viewForFirstBaselineLayout;
- (void)traitCollectionDidChange:(id)a0;
- (id)initWithType:(long long)a0 constants:(id)a1;
- (void)_executeActionHandler;
- (void).cxx_destruct;

@end
