@class MPRouteLabel, NSString, MPUMarqueeView, MRUVisualStylingProvider, UILabel, MPAVRoute;

@interface MRUNowPlayingLabelView : UIView <MRUVisualStylingProviderObserver>

@property (retain, nonatomic) MPRouteLabel *routeLabel;
@property (retain, nonatomic) MPUMarqueeView *titleMarqueeView;
@property (retain, nonatomic) MPUMarqueeView *subtitleMarqueeView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UILabel *subtitleLabel;
@property (retain, nonatomic) UILabel *placeholderLabel;
@property (retain, nonatomic) MPAVRoute *route;
@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *subtitle;
@property (copy, nonatomic) NSString *placeholderText;
@property (retain, nonatomic) MRUVisualStylingProvider *stylingProvider;
@property (nonatomic) long long layout;
@property (nonatomic) long long context;
@property (nonatomic) BOOL showPlaceholderText;
@property (nonatomic, getter=isMarqueeEnabled) BOOL marqueeEnabled;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)viewForFirstBaselineLayout;
- (void).cxx_destruct;
- (void)updateVisibility;
- (void)didMoveToWindow;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)updateVisualStyling;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (void)visualStylingProviderDidChange:(id)a0;
- (void)updateContentSizeCategory;
- (void)updateMarquee;

@end
