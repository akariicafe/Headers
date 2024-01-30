@class NSString, UIScreenEdgePanGestureRecognizer;

@interface OKActionBindingEdgePan : OKActionBindingPan <UIGestureRecognizerDelegate> {
    UIScreenEdgePanGestureRecognizer *_edgePanGestureRecognizer;
}

@property (nonatomic) unsigned long long edges;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)supportedSettings;

- (void)unload;
- (id)initWithSettings:(id)a0;
- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)gestureRecognizerShouldBegin:(id)a0;
- (void)dealloc;
- (id)settingObjectForKey:(id)a0;
- (void)loadForResponder:(id)a0 scope:(unsigned long long)a1;
- (BOOL)respondsToAction:(id)a0 isTouchCountAgnostic:(BOOL)a1;
- (BOOL)ownsGestureRecognizer:(id)a0;
- (void)performActionWithState:(unsigned long long)a0 location:(struct CGPoint { double x0; double x1; })a1 touchCount:(unsigned long long)a2 translation:(struct CGPoint { double x0; double x1; })a3 velocity:(struct CGPoint { double x0; double x1; })a4 direction:(unsigned long long)a5 context:(id)a6;

@end
