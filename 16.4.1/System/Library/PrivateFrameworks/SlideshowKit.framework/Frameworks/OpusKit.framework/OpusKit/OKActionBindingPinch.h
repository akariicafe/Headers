@class NSString, NSMutableDictionary, OFUITrackingPinchGestureRecognizer;

@interface OKActionBindingPinch : OKActionBinding <UIGestureRecognizerDelegate> {
    OFUITrackingPinchGestureRecognizer *_pinchGestureRecognizer;
    struct CGPoint { double x; double y; } _startLocation;
    double _isRotating;
    double _startAngle;
    NSMutableDictionary *_actionContext;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)supportedSettings;

- (void)handlePinch:(id)a0;
- (void)dealloc;
- (id)settingObjectForKey:(id)a0;
- (id)initWithSettings:(id)a0;
- (id)init;
- (void)unload;
- (void)loadForResponder:(id)a0 scope:(unsigned long long)a1;
- (BOOL)ownsGestureRecognizer:(id)a0;
- (void)performActionWithState:(unsigned long long)a0 location:(struct CGPoint { double x0; double x1; })a1 touchCount:(unsigned long long)a2 scale:(double)a3 angle:(double)a4 translation:(struct CGPoint { double x0; double x1; })a5 velocity:(double)a6 context:(id)a7;
- (BOOL)respondsToAction:(id)a0 isTouchCountAgnostic:(BOOL)a1;

@end
