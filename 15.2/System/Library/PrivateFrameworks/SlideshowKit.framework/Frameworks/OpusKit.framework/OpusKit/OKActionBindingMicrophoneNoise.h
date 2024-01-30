@class AVCaptureSession, NSString, NSMutableDictionary, NSTimer, UILongPressGestureRecognizer;

@interface OKActionBindingMicrophoneNoise : OKActionBinding <UIGestureRecognizerDelegate> {
    NSMutableDictionary *_actionContext;
    AVCaptureSession *_session;
    NSTimer *_timer;
    float _lastMeanAudioLevel;
    BOOL _shouldForwardMotion;
    UILongPressGestureRecognizer *_longPressGestureRecognizer;
    struct CGPoint { double x; double y; } _lastLocation;
}

@property (nonatomic) unsigned long long numberOfTouchesRequired;
@property (nonatomic) double interval;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)supportedSettings;

- (void)unload;
- (id)initWithSettings:(id)a0;
- (BOOL)gestureRecognizer:(id)a0 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)a1;
- (void)handleLongPress:(id)a0;
- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)dealloc;
- (id)settingObjectForKey:(id)a0;
- (void)loadForResponder:(id)a0 scope:(unsigned long long)a1;
- (BOOL)respondsToAction:(id)a0 isTouchCountAgnostic:(BOOL)a1;
- (void)_updateAudioLevels:(id)a0;

@end
