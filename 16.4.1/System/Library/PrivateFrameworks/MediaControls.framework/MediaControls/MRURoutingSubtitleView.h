@class NSString, MRUEqualizerView, UIImageView, UILabel, UIImage, MRUVisualStylingProvider;

@interface MRURoutingSubtitleView : UIView <MRUVisualStylingProviderObserver>

@property (retain, nonatomic) UILabel *textLabel;
@property (retain, nonatomic) MRUEqualizerView *equalizerView;
@property (retain, nonatomic) UIImageView *iconImageView;
@property (nonatomic) long long state;
@property (copy, nonatomic) NSString *text;
@property (retain, nonatomic) UIImage *icon;
@property (retain, nonatomic) MRUVisualStylingProvider *stylingProvider;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)updateVisualStyling;
- (void)updateContentSizeCategory;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (void)visualStylingProviderDidChange:(id)a0;
- (void)updateVisibility;
- (void)prepareForReuse;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layoutSubviews;
- (void).cxx_destruct;

@end
