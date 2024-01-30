@class VideosExtrasZoomingImageInteractiveTransitionSourceContext, UIView, NSArray, NSString, UIPinchGestureRecognizer, MPUContentSizeLayoutConstraint, NSLayoutConstraint, UILabel, VideosExtrasConstrainedArtworkContainerView;

@interface VideosExtrasCarouselCollectionViewCell : UICollectionViewCell <UIGestureRecognizerDelegate, VideosExtrasCarouselCollectionViewCell>

@property (retain, nonatomic) VideosExtrasConstrainedArtworkContainerView *thumbnailImageContainerView;
@property (retain, nonatomic) NSLayoutConstraint *thumbnailImageContainerViewHeightConstraint;
@property (retain, nonatomic) NSArray *thumbnailImageContainerViewConstraints;
@property (retain, nonatomic) MPUContentSizeLayoutConstraint *subtitleBaselineConstraint;
@property (retain, nonatomic) MPUContentSizeLayoutConstraint *descriptionLabelBaselineConstraint;
@property (retain, nonatomic) UIView *textContainer;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UILabel *subtitleLabel;
@property (retain, nonatomic) UILabel *descriptionLabel;
@property (nonatomic) unsigned long long itemIndex;
@property (retain, nonatomic) VideosExtrasZoomingImageInteractiveTransitionSourceContext *interactiveTransitionSourceContext;
@property (retain, nonatomic) UIPinchGestureRecognizer *pinchGestureRecognizer;
@property (nonatomic) BOOL allowsPinchingThumbnailImageForInteractiveZoomingImageTransition;
@property (copy, nonatomic) NSString *zoomingImageTransitionIdentifier;
@property (nonatomic) struct CGSize { double width; double height; } windowSize;
@property (readonly, nonatomic) double thumbnailImageContainerHeight;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)_handlePinchGesture:(id)a0;
- (void)setHighlighted:(BOOL)a0;
- (id)thumbnailImage;
- (id)descriptionText;
- (id)subtitleText;
- (void)setTitleText:(id)a0;
- (void)setThumbnailImage:(id)a0;
- (id)titleText;
- (void).cxx_destruct;
- (void)updateConstraints;
- (void)setDescriptionText:(id)a0;
- (void)setSubtitleText:(id)a0;
- (void)prepareForReuse;
- (void)dealloc;
- (id)titleTextStyle;
- (id)subtitleTextStyle;
- (void)prepareZoomingImageTransitionWithContext:(id)a0;
- (void)performZoomingImageTransitionWithContext:(id)a0;
- (void)finalizeZoomingImageTransitionWithContext:(id)a0 transitionFinished:(BOOL)a1;
- (id)descriptionTextStyle;
- (void)setThumbnailImagePlaceholder:(id)a0;
- (void)setThumbnailOverlayImage:(id)a0;
- (void)_updateThumbnailArtworkViewBorder;
- (void)_setupThumbnailImageContainerViewWithConstraintsAccumulator:(id)a0;
- (void)_setupTitleLabelWithConstraintsAccumulator:(id)a0;
- (void)_setupSubtitleLabelWithConstraintsAccumulator:(id)a0;
- (void)_setupDescriptionLabelWithConstraintsAccumulator:(id)a0;
- (void)setThumbnailMaxSize:(struct CGSize { double x0; double x1; })a0;
- (struct CGSize { double x0; double x1; })thumbnailMaxSize;
- (void)setThumbnailBorderColor:(id)a0;
- (void)setThumbnailImageAccessibilityText:(id)a0;
- (id)thumbnailImagePlaceholder;
- (id)thumbnailImageAccessibilityText;
- (id)lockupElement;
- (double)_descriptionLabelTopInset;

@end
