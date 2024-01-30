@class UILabel;

@interface _UISearchBarPromptContainerView : UIView

@property (nonatomic) long long barMetrics;
@property (nonatomic) struct UIEdgeInsets { double top; double left; double bottom; double right; } contentInset;
@property (retain, nonatomic) UILabel *promptLabel;

- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (void)layoutSubviews;
- (id)description;
- (BOOL)_isKnownUISearchBarComponentContainer;
- (void).cxx_destruct;
- (BOOL)useMini;

@end
