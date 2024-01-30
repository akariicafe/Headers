@class NSString, UITouchForceGestureRecognizer;

@interface _UIPreviewInteractionGestureRecognizerTouchForceProvider : NSObject <UIGestureRecognizerDelegate, _UIPreviewInteractionTouchForceProviding>

@property (nonatomic, getter=isActive) BOOL active;
@property (retain, nonatomic) UITouchForceGestureRecognizer *gestureRecognizer;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) double touchForce;

- (struct CGPoint { double x0; double x1; })locationInCoordinateSpace:(id)a0;
- (void)cancelInteraction;
- (BOOL)gestureRecognizerShouldBegin:(id)a0;
- (void)dealloc;
- (void)_handleGestureRecognizer:(id)a0;
- (void).cxx_destruct;
- (id)initWithGestureRecognizer:(id)a0;
- (id)initWithView:(id)a0 configuration:(id /* block */)a1;

@end
