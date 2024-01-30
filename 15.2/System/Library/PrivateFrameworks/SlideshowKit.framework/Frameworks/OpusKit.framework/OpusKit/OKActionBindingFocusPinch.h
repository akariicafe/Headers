@class NSString, OFUITrackingPinchGestureRecognizer;

@interface OKActionBindingFocusPinch : OKActionBinding <UIGestureRecognizerDelegate> {
    OFUITrackingPinchGestureRecognizer *_pinchGestureRecognizer;
    unsigned long long _presentationMode;
}

@property (nonatomic) unsigned long long mode;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)supportedSettings;

- (void)unload;
- (id)initWithSettings:(id)a0;
- (void)handlePinch:(id)a0;
- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)gestureRecognizer:(id)a0 shouldReceiveTouch:(id)a1;
- (void)dealloc;
- (id)settingObjectForKey:(id)a0;
- (void)loadForResponder:(id)a0 scope:(unsigned long long)a1;
- (BOOL)respondsToAction:(id)a0 isTouchCountAgnostic:(BOOL)a1;
- (BOOL)ownsGestureRecognizer:(id)a0;
- (void)_setFocusSize:(struct CGSize { double x0; double x1; })a0 angle:(float)a1 toWidgetView:(id)a2;

@end
