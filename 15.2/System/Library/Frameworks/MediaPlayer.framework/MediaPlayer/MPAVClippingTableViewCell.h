@class UIView;

@interface MPAVClippingTableViewCell : UITableViewCell

@property (retain, nonatomic) UIView *clippingContentView;
@property (retain, nonatomic) UIView *clippingMaskView;
@property (nonatomic) struct UIEdgeInsets { double top; double left; double bottom; double right; } clippingInsets;
@property (readonly, nonatomic) UIView *topSeparatorView;
@property (readonly, nonatomic) UIView *bottomSeparatorView;
@property (nonatomic) BOOL shouldHideSectionBottomSeparator;

- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (void)layoutSubviews;
- (void)_setShouldHaveFullLengthBottomSeparator:(BOOL)a0;
- (void)_setShouldHaveFullLengthTopSeparator:(BOOL)a0;
- (void).cxx_destruct;
- (void)setAccessoryView:(id)a0;
- (void)prepareForReuse;
- (void)dealloc;

@end
