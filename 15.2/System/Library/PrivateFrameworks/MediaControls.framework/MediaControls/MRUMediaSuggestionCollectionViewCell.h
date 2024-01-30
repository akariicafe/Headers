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

- (void)layoutSubviews;
- (void)updateVisualStyling;
- (void)setHighlighted:(BOOL)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;
- (void)prepareForReuse;
- (void)updateContentSizeCategory;
- (id)pointerInteraction:(id)a0 regionForRequest:(id)a1 defaultRegion:(id)a2;
- (void)visualStylingProviderDidChange:(id)a0;
- (id)pointerInteraction:(id)a0 styleForRegion:(id)a1;
- (void)updateVisiblity;

@end
