@class UIView, UIPointerStyle, UIImage, MRUShadowView, NSString, UIImageView, MPArtworkCatalog, MSVTimer, MRUVisualStylingProvider;

@interface MRUArtworkView : UIView <MRUVisualStylingProviderObserver>

@property (retain, nonatomic) UIView *placeholderBackground;
@property (retain, nonatomic) UIImageView *placeholderImageView;
@property (retain, nonatomic) MRUShadowView *artworkShadowView;
@property (retain, nonatomic) UIImageView *artworkImageView;
@property (retain, nonatomic) MRUShadowView *iconShadowView;
@property (retain, nonatomic) UIImageView *iconView;
@property (retain, nonatomic) MSVTimer *artworkTimer;
@property (nonatomic) long long failedRetryCount;
@property (retain, nonatomic) MPArtworkCatalog *catalog;
@property (retain, nonatomic) UIImage *artworkImage;
@property (retain, nonatomic) UIImage *placeholderImage;
@property (retain, nonatomic) UIImage *iconImage;
@property (readonly, nonatomic) UIPointerStyle *pointerStyle;
@property (retain, nonatomic) MRUVisualStylingProvider *stylingProvider;
@property (nonatomic) long long style;
@property (nonatomic) BOOL showPlaceholder;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)layoutSubviews;
- (void)updatePlaceholderSymbolConfiguration;
- (void)updateVisualStyling;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (void)updateVisibility;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })artworkFrame;
- (BOOL)isSquare:(struct CGSize { double x0; double x1; })a0;
- (BOOL)isDeviceIcon;
- (BOOL)isSquareArtwork;
- (void).cxx_destruct;
- (void)prepareForReuse;
- (void)visualStylingProviderDidChange:(id)a0;
- (void)dealloc;
- (void)updateStyle;

@end
