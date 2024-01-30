@class NSString, MRUVisualStylingProvider, UILabel, UIView;

@interface MRURoutingHeaderView : UITableViewHeaderFooterView <MRUVisualStylingProviderObserver>

@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UIView *separatorView;
@property (copy, nonatomic) NSString *title;
@property (retain, nonatomic) MRUVisualStylingProvider *stylingProvider;
@property (nonatomic) struct UIEdgeInsets { double top; double left; double bottom; double right; } contentEdgeInsets;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)updateVisualStyling;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (id)initWithReuseIdentifier:(id)a0;
- (void)visualStylingProviderDidChange:(id)a0;
- (void)updateContentSizeCategory;

@end
