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

- (id)thumbnailImage;
- (void)_handlePinchGesture:(id)a0;
- (id)descriptionText;
- (id)titleTextStyle;
- (id)subtitleText;
- (void)setSubtitleText:(id)a0;
- (void)prepareForReuse;
- (void)setHighlighted:(BOOL)a0;
- (void)setTitleText:(id)a0;
- (void)setDescriptionText:(id)a0;
- (id)titleText;
- (void)dealloc;
- (void)updateConstraints;
- (void).cxx_destruct;
- (void)setThumbnailImage:(id)a0;
- (id)subtitleTextStyle;
- (id)thumbnailImageAccessibilityText;
- (double)_descriptionLabelTopInset;
- (void)_setupDescriptionLabelWithConstraintsAccumulator:(id)a0;
- (void)_setupSubtitleLabelWithConstraintsAccumulator:(id)a0;
- (void)_setupThumbnailImageContainerViewWithConstraintsAccumulator:(id)a0;
- (void)_setupTitleLabelWithConstraintsAccumulator:(id)a0;
- (void)_updateThumbnailArtworkViewBorder;
- (id)descriptionTextStyle;
- (void)finalizeZoomingImageTransitionWithContext:(id)a0 transitionFinished:(BOOL)a1;
- (id)lockupElement;
- (void)performZoomingImageTransitionWithContext:(id)a0;
- (void)prepareZoomingImageTransitionWithContext:(id)a0;
- (void)setThumbnailBorderColor:(id)a0;
- (void)setThumbnailImageAccessibilityText:(id)a0;
- (void)setThumbnailImagePlaceholder:(id)a0;
- (void)setThumbnailMaxSize:(struct CGSize { double x0; double x1; })a0;
- (void)setThumbnailOverlayImage:(id)a0;
- (id)thumbnailImagePlaceholder;
- (struct CGSize { double x0; double x1; })thumbnailMaxSize;

@end
