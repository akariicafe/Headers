@class VideosExtrasZoomingImageInteractiveTransitionSourceContext, UIView, NSArray, VideosExtrasZoomableImageView, UIImage, NSAttributedString, NSString, MPUContentSizeLayoutConstraint, UIActivityIndicatorView, UILabel;

@interface VideosExtrasImageViewController : UIViewController <VideosExtrasZoomingImageTransitionParticipant>

@property (retain, nonatomic) UIActivityIndicatorView *activityIndicatorView;
@property (retain, nonatomic) VideosExtrasZoomableImageView *zoomableImageView;
@property (copy, nonatomic) NSArray *gestureRecognizers;
@property (retain, nonatomic) VideosExtrasZoomingImageInteractiveTransitionSourceContext *interactiveTransitionSourceContext;
@property (retain, nonatomic) UIView *textContainmentView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UILabel *subtitleLabel;
@property (retain, nonatomic) UILabel *descriptionLabel;
@property (retain, nonatomic) MPUContentSizeLayoutConstraint *topLabelConstraint;
@property (retain, nonatomic) MPUContentSizeLayoutConstraint *subtitleLeadingConstraint;
@property (retain, nonatomic) MPUContentSizeLayoutConstraint *descriptionLeadingConstraint;
@property (retain, nonatomic) MPUContentSizeLayoutConstraint *bottomLabelConstraint;
@property (nonatomic) BOOL overlayHidden;
@property (retain, nonatomic) UIImage *image;
@property (retain, nonatomic) NSAttributedString *titleString;
@property (retain, nonatomic) NSAttributedString *subtitleString;
@property (retain, nonatomic) NSAttributedString *descriptionString;
@property (nonatomic) unsigned long long imageIndex;
@property (nonatomic) BOOL allowsPinchingImageForInteractiveZoomingImageTransition;
@property (copy, nonatomic) NSString *zoomingImageTransitionIdentifier;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)_handlePinch:(id)a0;
- (void)_handleDoubleTap:(id)a0;
- (BOOL)prefersStatusBarHidden;
- (void)updateViewConstraints;
- (void)dealloc;
- (void)viewDidLoad;
- (void)viewDidAppear:(BOOL)a0;
- (void).cxx_destruct;
- (void)viewWillAppear:(BOOL)a0;
- (void)_handleSingleTap:(id)a0;
- (void)finalizeZoomingImageTransitionWithContext:(id)a0 transitionFinished:(BOOL)a1;
- (void)performZoomingImageTransitionWithContext:(id)a0;
- (void)prepareZoomingImageTransitionWithContext:(id)a0;

@end
