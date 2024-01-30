@class NSHashTable, MRUImageLoader, MRUShadowView, UIView, UIImage, UIImageView, MRUArtwork, MSVTimer, MPArtworkCatalog, UIPointerStyle, NSString, MRUVisualStylingProvider;

@interface MRUArtworkView : UIControl <MRUVisualStylingProviderObserver>

@property (retain, nonatomic) MRUShadowView *artworkShadowView;
@property (retain, nonatomic) MSVTimer *artworkTimer;
@property (nonatomic) long long failedRetryCount;
@property (retain, nonatomic) NSHashTable *observers;
@property (retain, nonatomic) UIImageView *artworkImageView;
@property (retain, nonatomic) UIView *placeholderBackground;
@property (retain, nonatomic) UIImageView *placeholderImageView;
@property (nonatomic) double artworkLoadingTimeout;
@property (retain, nonatomic) MRUImageLoader *imageLoader;
@property (retain, nonatomic) MRUArtwork *artwork;
@property (retain, nonatomic) MPArtworkCatalog *catalog;
@property (retain, nonatomic) UIImage *artworkImage;
@property (retain, nonatomic) UIImage *placeholderImage;
@property (retain, nonatomic) UIImage *iconImage;
@property (readonly, nonatomic) UIPointerStyle *pointerStyle;
@property (retain, nonatomic) MRUVisualStylingProvider *stylingProvider;
@property (nonatomic) long long style;
@property (nonatomic) BOOL showPlaceholder;
@property (nonatomic) struct CGSize { double width; double height; } preferredContentSize;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)updateVisualStyling;
- (void)updateArtworkFittingSize;
- (void)addObserver:(id)a0;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })artworkFrame;
- (BOOL)isSquare:(struct CGSize { double x0; double x1; })a0;
- (void)visualStylingProviderDidChange:(id)a0;
- (void)updateVisibility;
- (void)prepareForReuse;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (BOOL)acuis_wantsPriorityOverTargetOfGestureRecognizer:(id)a0;
- (void)setHighlighted:(BOOL)a0;
- (void)updateStyle;
- (BOOL)isSquareArtwork;
- (void)removeObserver:(id)a0;
- (void)layoutSubviews;
- (void)setFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)traitCollectionDidChange:(id)a0;
- (void).cxx_destruct;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })artworkFrameForSize:(struct CGSize { double x0; double x1; })a0 availableBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;

@end
