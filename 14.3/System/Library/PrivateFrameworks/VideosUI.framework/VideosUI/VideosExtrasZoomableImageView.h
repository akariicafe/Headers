@class UIImageView, UIImage, NSString;

@interface VideosExtrasZoomableImageView : UIScrollView <UIScrollViewDelegate, VideosExtrasZoomingImageTransitionParticipant>

@property (nonatomic) struct CGSize { double width; double height; } imageSize;
@property (nonatomic) struct CGPoint { double x; double y; } pointToCenterAfterResize;
@property (nonatomic) double scaleToRestoreAfterResize;
@property (retain, nonatomic) UIImageView *zoomView;
@property (retain, nonatomic) UIImage *image;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)dealloc;
- (struct CGPoint { double x0; double x1; })_minimumContentOffset;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)viewForZoomingInScrollView:(id)a0;
- (struct CGPoint { double x0; double x1; })_maximumContentOffset;
- (void)setFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)prepareZoomingImageTransitionWithContext:(id)a0;
- (void)performZoomingImageTransitionWithContext:(id)a0;
- (void)finalizeZoomingImageTransitionWithContext:(id)a0 transitionFinished:(BOOL)a1;
- (void)zoomToPoint:(struct CGPoint { double x0; double x1; })a0 animated:(BOOL)a1;
- (void)_prepareToResize;
- (void)_recoverFromResizing;
- (void)_updateMinimumAndMaximumZoomScalesForCurrentBounds;

@end
