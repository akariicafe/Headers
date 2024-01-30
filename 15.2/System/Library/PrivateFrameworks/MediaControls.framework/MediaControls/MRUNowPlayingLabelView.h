@class BSUIEmojiLabelView, MPRouteLabel, MPUMarqueeView, NSString, UILabel, MPAVRoute, MRUVisualStylingProvider;

@interface MRUNowPlayingLabelView : UIView <MRUVisualStylingProviderObserver>

@property (retain, nonatomic) MPRouteLabel *routeLabel;
@property (retain, nonatomic) MPUMarqueeView *titleMarqueeView;
@property (retain, nonatomic) MPUMarqueeView *subtitleMarqueeView;
@property (retain, nonatomic) BSUIEmojiLabelView *titleLabel;
@property (retain, nonatomic) BSUIEmojiLabelView *subtitleLabel;
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
- (void)layoutSubviews;
- (void)updateVisualStyling;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (void)updateVisibility;
- (void).cxx_destruct;
- (void)updateContentSizeCategory;
- (void)visualStylingProviderDidChange:(id)a0;
- (void)didMoveToWindow;
- (void)updateMarquee;

@end
