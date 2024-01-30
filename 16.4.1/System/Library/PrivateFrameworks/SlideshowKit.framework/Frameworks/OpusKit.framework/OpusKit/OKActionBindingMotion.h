@class NSString, NSMutableDictionary, CMMotionManager, CMAttitude, NSOperationQueue, UILongPressGestureRecognizer;

@interface OKActionBindingMotion : OKActionBinding <UIGestureRecognizerDelegate> {
    NSMutableDictionary *_motionContext;
    BOOL _shouldForwardMotion;
    CMMotionManager *_motionManager;
    NSOperationQueue *_motionQueue;
    double _lastYaw;
    double _lastRoll;
    double _lastPitch;
    double _lastRotationX;
    double _lastRotationY;
    double _lastRotationZ;
    struct CGPoint { double x; double y; } _lastLocation;
    UILongPressGestureRecognizer *_longPressGestureRecognizer;
}

@property (retain) CMAttitude *motionAttitudeReference;
@property (nonatomic) unsigned long long numberOfTouchesRequired;
@property (nonatomic) double motionInterval;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)supportedSettings;

- (void)handleLongPress:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)dealloc;
- (id)settingObjectForKey:(id)a0;
- (id)initWithSettings:(id)a0;
- (id)init;
- (BOOL)gestureRecognizer:(id)a0 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)a1;
- (void)unload;
- (void)loadForResponder:(id)a0 scope:(unsigned long long)a1;
- (BOOL)respondsToAction:(id)a0 isTouchCountAgnostic:(BOOL)a1;

@end
