@class NSString, UIImpactFeedbackGenerator, UIPanGestureRecognizer, UITapGestureRecognizer;

@interface PXUILivePhotoTrimScrubber : PXLivePhotoTrimScrubber <UIGestureRecognizerDelegate>

@property (retain, nonatomic) UIPanGestureRecognizer *panGesture;
@property (retain, nonatomic) UITapGestureRecognizer *tapGesture;
@property (retain, nonatomic) UIImpactFeedbackGenerator *impactGenerator;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)_stretchableImageNamed:(id)a0 withCapInsets:(struct UIEdgeInsets { double x0; double x1; double x2; double x3; })a1;
+ (id)trimStartImage;
+ (id)trimStartHighlightedImage;
+ (id)trimEndImage;
+ (id)trimEndHighlightedImage;
+ (id)trimStartImageMini;
+ (id)trimEndImageMini;
+ (id)trimStartHighlightedImageMini;
+ (id)trimEndHighlightedImageMini;
+ (id)createSnappingControllerWithSnappingTarget:(double)a0;

- (void)setDisabled:(BOOL)a0;
- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (void).cxx_destruct;
- (void)_PXUILivePhotoTrimScrubber_commonInit;
- (BOOL)gestureRecognizer:(id)a0 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)a1;
- (id)initWithFilmStripViewClass:(Class)a0 spec:(id)a1;
- (void)_handlePan:(id)a0;
- (void)_handleTap:(id)a0;
- (BOOL)gestureRecognizerShouldBegin:(id)a0;
- (void)impactOccured;
- (void)_handleBeginPanGesture:(id)a0;
- (void)_handleChangePanGesture:(id)a0;
- (void)prepareForImpact;

@end
