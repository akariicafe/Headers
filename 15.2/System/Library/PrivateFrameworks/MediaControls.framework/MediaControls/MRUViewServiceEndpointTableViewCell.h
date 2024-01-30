@class NSString, MRUVisualStylingProvider, MRUNowPlayingHeaderView, UIView;

@interface MRUViewServiceEndpointTableViewCell : UITableViewCell <MRUVisualStylingProviderObserver, UIPointerInteractionDelegate>

@property (readonly, nonatomic) MRUNowPlayingHeaderView *headerView;
@property (readonly, nonatomic) UIView *separatorView;
@property (retain, nonatomic) MRUVisualStylingProvider *stylingProvider;
@property (nonatomic) struct UIEdgeInsets { double top; double left; double bottom; double right; } contentEdgeInsets;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (void)layoutSubviews;
- (void)_setShouldHaveFullLengthBottomSeparator:(BOOL)a0;
- (void)updateVisualStyling;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (void).cxx_destruct;
- (void)prepareForReuse;
- (id)pointerInteraction:(id)a0 regionForRequest:(id)a1 defaultRegion:(id)a2;
- (void)visualStylingProviderDidChange:(id)a0;
- (id)pointerInteraction:(id)a0 styleForRegion:(id)a1;

@end
