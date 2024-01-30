@class NSString, MRUArtworkView, UIActivityIndicatorView, UILabel, MRUVisualStylingProvider;

@interface MRUMediaSuggestionCollectionViewCell : UICollectionViewCell <MRUVisualStylingProviderObserver, UIPointerInteractionDelegate>

@property (retain, nonatomic) UIActivityIndicatorView *activityView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UILabel *subtitleLabel;
@property (readonly, nonatomic) MRUArtworkView *artworkView;
@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *subtitle;
@property (retain, nonatomic) MRUVisualStylingProvider *stylingProvider;
@property (nonatomic) long long layout;
@property (nonatomic) BOOL showActivityIndicator;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)pointerInteraction:(id)a0 styleForRegion:(id)a1;
- (void).cxx_destruct;
- (id)pointerInteraction:(id)a0 regionForRequest:(id)a1 defaultRegion:(id)a2;
- (void)prepareForReuse;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)updateVisualStyling;
- (void)setHighlighted:(BOOL)a0;
- (void)visualStylingProviderDidChange:(id)a0;
- (void)updateContentSizeCategory;
- (void)updateVisiblity;

@end
