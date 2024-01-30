@class UIColor, NSArray;

@interface AUAppleViewControllerBase : UIViewController {
    struct AUListenerBase { } *eventListener;
    double lastRenderedSampleTime;
    BOOL auRendering;
    BOOL initialized;
    struct OpaqueAudioComponentInstance { } *AU;
    NSArray *topLevelObjects;
}

@property (retain, nonatomic) UIColor *tintColor;
@property BOOL needsRealtimeDrawing;
@property double realtimeDrawingInterval;

+ (id)getLocalizedString:(id)a0;
+ (id)customViewLogger;

- (struct OpaqueAudioComponentInstance { } *)au;
- (void)viewDidLoad;
- (void)viewWillAppear:(BOOL)a0;
- (void)viewWillDisappear:(BOOL)a0;
- (void)cleanup;
- (void).cxx_destruct;
- (void)setAU:(struct OpaqueAudioComponentInstance { } *)a0;
- (void)prepareData;
- (void)registerParameters;
- (void)postBeginGestureNotificationForParameter:(unsigned int)a0;
- (void)postEndGestureNotificationForParameter:(unsigned int)a0;
- (void)priv_addListenerForParameter:(unsigned int)a0 scope:(unsigned int)a1 element:(unsigned int)a2;
- (struct AudioUnitParameterInfo { char x0[52]; struct __CFString *x1; unsigned int x2; struct __CFString *x3; unsigned int x4; float x5; float x6; float x7; unsigned int x8; })getParameterInfo:(unsigned int)a0 scope:(unsigned int)a1;
- (void)priv_eventListener:(void *)a0 event:(const struct AudioUnitEvent { unsigned int x0; union { struct AudioUnitParameter { struct OpaqueAudioComponentInstance *x0; unsigned int x1; unsigned int x2; unsigned int x3; } x0; struct AudioUnitProperty { struct OpaqueAudioComponentInstance *x0; unsigned int x1; unsigned int x2; unsigned int x3; } x1; } x1; } *)a1 value:(float)a2;
- (void)handleBeginGesture:(unsigned int)a0;
- (void)handleEndGesture:(unsigned int)a0;
- (void)synchronizeUIWithParameterValues;
- (void)priv_removeListeners;
- (void)handleParameterListChanged;
- (void)doRealtimeDrawing;
- (void)priv_removeListenerForParameter:(unsigned int)a0 scope:(unsigned int)a1 element:(unsigned int)a2;

@end
