@class NSString, NSMutableDictionary, UIPanGestureRecognizer;

@interface OKActionBindingPan : OKActionBinding <UIGestureRecognizerDelegate> {
    NSMutableDictionary *_actionContext;
    UIPanGestureRecognizer *_panGestureRecognizer;
    struct CGPoint { double x; double y; } _previousLocation;
    struct CGPoint { double x; double y; } _previousTranslation;
    struct CGPoint { double x; double y; } _previousVelocity;
    struct CGPoint { double x; double y; } _direction;
    struct CGPoint { double x; double y; } _directionLastLocation;
}

@property (nonatomic) unsigned long long minimumNumberOfTouches;
@property (nonatomic) unsigned long long maximumNumberOfTouches;
@property (nonatomic) BOOL canPanHorizontally;
@property (nonatomic) BOOL canPanVertically;
@property (nonatomic) double directionThreshold;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)supportedSettings;

- (void)handlePan:(id)a0;
- (BOOL)gestureRecognizerShouldBegin:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)dealloc;
- (id)settingObjectForKey:(id)a0;
- (id)initWithSettings:(id)a0;
- (id)init;
- (void)unload;
- (void)loadForResponder:(id)a0 scope:(unsigned long long)a1;
- (BOOL)ownsGestureRecognizer:(id)a0;
- (void)performActionWithState:(unsigned long long)a0 location:(struct CGPoint { double x0; double x1; })a1 touchCount:(unsigned long long)a2 translation:(struct CGPoint { double x0; double x1; })a3 velocity:(struct CGPoint { double x0; double x1; })a4 direction:(unsigned long long)a5 context:(id)a6;
- (BOOL)respondsToAction:(id)a0 isTouchCountAgnostic:(BOOL)a1;

@end
