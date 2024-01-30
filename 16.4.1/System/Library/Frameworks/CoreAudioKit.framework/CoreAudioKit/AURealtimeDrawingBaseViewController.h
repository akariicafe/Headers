@class NSTimer, NSNumberFormatter;

@interface AURealtimeDrawingBaseViewController : AUAppleViewControllerBase {
    NSTimer *meterTimer;
    NSNumberFormatter *decimalFormatter;
}

@property double realtimeDrawingInterval;
@property (readonly) unsigned int numChannels;

- (void)cleanup;
- (void)viewDidLoad;
- (void).cxx_destruct;
- (void)priv_eventListener:(void *)a0 event:(const struct AudioUnitEvent { unsigned int x0; union { struct AudioUnitParameter { struct OpaqueAudioComponentInstance *x0; unsigned int x1; unsigned int x2; unsigned int x3; } x0; struct AudioUnitProperty { struct OpaqueAudioComponentInstance *x0; unsigned int x1; unsigned int x2; unsigned int x3; } x1; } x1; } *)a1 value:(float)a2;
- (void)checkLastRenderedTime:(id)a0;
- (unsigned int)getNumChannelsFromAudioUnit;
- (float)maxValueFor:(unsigned int)a0;
- (float)minValueFor:(unsigned int)a0;
- (void)priv_removeListeners;
- (void)setAU:(struct OpaqueAudioComponentInstance { } *)a0;
- (void)setNeedsRealtimeDrawing:(BOOL)a0;
- (float)valueFor:(unsigned int)a0;

@end
