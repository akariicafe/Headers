@class NSString, MRUVisualStylingProvider, UIView;

@interface MRUNowPlayingContainerView : UIView <MRUVisualStylingProviderObserver>

@property (retain, nonatomic) UIView *separatorView;
@property (retain, nonatomic) UIView *contentView;
@property (retain, nonatomic) MRUVisualStylingProvider *stylingProvider;
@property (nonatomic) BOOL showSeparator;
@property (nonatomic) BOOL supportsHorizontalLayout;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)layoutSubviews;
- (void)updateVisualStyling;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (void)updateVisibility;
- (void).cxx_destruct;
- (void)visualStylingProviderDidChange:(id)a0;

@end
