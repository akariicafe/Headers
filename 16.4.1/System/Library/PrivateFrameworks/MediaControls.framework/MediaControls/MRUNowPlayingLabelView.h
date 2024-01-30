@class MPRouteLabel, NSString, MRUVisualStylingProvider, MRUMarqueeLabel, UIView, MPAVRoute;

@interface MRUNowPlayingLabelView : UIControl <MRUVisualStylingProviderObserver>

@property (retain, nonatomic) UIView *contentView;
@property (retain, nonatomic) MPRouteLabel *routeLabel;
@property (retain, nonatomic) MRUMarqueeLabel *titleMarqueeView;
@property (retain, nonatomic) MRUMarqueeLabel *subtitleMarqueeView;
@property (retain, nonatomic) MRUMarqueeLabel *placeholderMarqueeView;
@property (retain, nonatomic) MPAVRoute *route;
@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *subtitle;
@property (copy, nonatomic) NSString *placeholder;
@property (retain, nonatomic) MRUVisualStylingProvider *stylingProvider;
@property (nonatomic) long long textAlignment;
@property (nonatomic) long long layout;
@property (nonatomic) BOOL showRoute;
@property (nonatomic) BOOL showSubtitle;
@property (nonatomic) BOOL showPlaceholder;
@property (nonatomic, getter=isMarqueeEnabled) BOOL marqueeEnabled;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)updateVisualStyling;
- (void)updateContentSizeCategory;
- (void)didMoveToWindow;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (void)updateMarquee;
- (void)visualStylingProviderDidChange:(id)a0;
- (void)updateVisibility;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (BOOL)acuis_wantsPriorityOverTargetOfGestureRecognizer:(id)a0;
- (void)setHighlighted:(BOOL)a0;
- (void)layoutSubviews;
- (struct CGSize { double x0; double x1; })sizeForText:(id)a0 font:(id)a1 layout:(long long)a2 availableSize:(struct CGSize { double x0; double x1; })a3;
- (id)viewForFirstBaselineLayout;
- (void).cxx_destruct;

@end
