@class NSString, MRUEqualizerView, MRUVisualStylingProvider, UILabel;

@interface MRURoutingSubtitleView : UIView <MRUVisualStylingProviderObserver>

@property (retain, nonatomic) UILabel *textLabel;
@property (retain, nonatomic) MRUEqualizerView *equalizerView;
@property (nonatomic) long long state;
@property (copy, nonatomic) NSString *text;
@property (retain, nonatomic) MRUVisualStylingProvider *stylingProvider;
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
- (void)prepareForReuse;
- (void)updateContentSizeCategory;
- (void)visualStylingProviderDidChange:(id)a0;

@end
