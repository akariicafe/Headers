@class NSString, UIImageView, UIRotationGestureRecognizer, WFOverlayImageTransform;

@interface WFOverlayImageEditorCanvasView : UIView <UIGestureRecognizerDelegate>

@property (readonly, weak, nonatomic) UIRotationGestureRecognizer *rotateRecognizer;
@property (readonly, weak, nonatomic) UIImageView *backgroundImageView;
@property (readonly, weak, nonatomic) UIImageView *overlayImageView;
@property (nonatomic, getter=isRotationEnabled) BOOL rotationEnabled;
@property (readonly, nonatomic) WFOverlayImageTransform *imageTransform;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)layoutSubviews;
- (BOOL)gestureRecognizer:(id)a0 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)a1;
- (void)handlePanGesture:(id)a0;
- (void).cxx_destruct;
- (void)handlePinchGesture:(id)a0;
- (void)reset;
- (id)initWithBackgroundImage:(id)a0 overlayImage:(id)a1 transform:(id)a2;
- (void)handleRotateGesture:(id)a0;
- (void)setOverlayImageOpacity:(double)a0;

@end
