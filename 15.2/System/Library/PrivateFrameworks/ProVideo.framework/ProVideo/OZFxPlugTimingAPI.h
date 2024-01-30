@class NSString;

@interface OZFxPlugTimingAPI : NSObject <FxTimingAPI, FxTimingAPI_v2, FxTimingAPI_v3, FxTimingInfo_Private, PROAPIObject> {
    void *_plugin;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (const struct OZSceneSettings { void /* function */ **x0; int x1; int x2; unsigned int x3; BOOL x4; unsigned int x5; double x6; BOOL x7; double x8; int x9; int x10; int x11; int x12; struct PCColor { struct ColorComponents { int x0; double x1[5]; } x0; struct PCColorSpaceHandle { struct CGColorSpace *x0; } x1; } x13; int x14; BOOL x15; unsigned int x16; unsigned int x17; double x18; BOOL x19; BOOL x20; double x21; int x22; struct PCString { struct __CFString *x0; } x23; unsigned int x24; unsigned int x25; double x26; unsigned int x27; unsigned int x28; unsigned int x29; BOOL x30; float x31; int x32; BOOL x33; int x34; BOOL x35; double x36; int x37; int x38; BOOL x39; int x40; struct { long long x0; int x1; unsigned int x2; long long x3; } x41; BOOL x42; } *)sceneSettings;
- (void *)scene;
- (id)initWithPlugin:(void *)a0;
- (double)startTimeOfInputToFilter:(id)a0;
- (double)startTimeOfInputAToTransition:(id)a0;
- (double)startTimeOfInputBToTransition:(id)a0;
- (double)startTimeOfImageParm:(unsigned int)a0 forEffect:(id)a1;
- (double)durationOfInputToFilter:(id)a0;
- (double)durationOfInputAToTransition:(id)a0;
- (double)durationOfInputBToTransition:(id)a0;
- (double)durationOfImageParm:(unsigned int)a0 forEffect:(id)a1;
- (unsigned long long)fieldOrderForInputToFilter:(id)a0;
- (unsigned long long)fieldOrderForInputAToTransition:(id)a0;
- (unsigned long long)fieldOrderForInputBToTransition:(id)a0;
- (unsigned long long)fieldOrderForImageParm:(unsigned int)a0 forEffect:(id)a1;
- (unsigned long long)timelineFpsNumeratorForEffect:(id)a0;
- (unsigned long long)timelineFpsDenominatorForEffect:(id)a0;
- (double)inPointOfTimelineForEffect:(id)a0;
- (double)outPointOfTimelineForEffect:(id)a0;
- (double)startTimeForEffect:(id)a0;
- (double)durationForEffect:(id)a0;
- (double)timelineTimeFromInputTime:(double)a0 forFilter:(id)a1;
- (double)timelineTimeFromInputATime:(double)a0 forTransition:(id)a1;
- (double)timelineTimeFromInputBTime:(double)a0 forTransition:(id)a1;
- (double)timelineTimeFromImageTime:(double)a0 forParmId:(unsigned int)a1 forEffect:(id)a2;
- (double)inputTimeForFilter:(id)a0 fromTimelineTime:(double)a1;
- (double)inputATimeForTransition:(id)a0 fromTimelineTime:(double)a1;
- (double)inputBTimeForTransition:(id)a0 fromTimelineTime:(double)a1;
- (double)imageTimeForParmId:(unsigned int)a0 forEffect:(id)a1 fromTimelineTime:(double)a2;
- (double)transitionTimeFractionAtTime:(double)a0;
- (void)frameDuration:(union { double x0; struct *x1; } *)a0;
- (void)sampleDuration:(union { double x0; struct *x1; } *)a0;
- (void)startFxTimeForEffect:(union { double x0; struct *x1; } *)a0;
- (void)durationFxTimeForEffect:(union { double x0; struct *x1; } *)a0;
- (void)startFxTimeOfInputAToTransition:(union { double x0; struct *x1; } *)a0;
- (void)startFxTimeOfInputBToTransition:(union { double x0; struct *x1; } *)a0;
- (void)durationFxTimeOfInputAToTransition:(union { double x0; struct *x1; } *)a0;
- (void)durationFxTimeOfInputBToTransition:(union { double x0; struct *x1; } *)a0;
- (void)startFxTimeOfInputToFilter:(union { double x0; struct *x1; } *)a0;
- (void)durationFxTimeOfInputToFilter:(union { double x0; struct *x1; } *)a0;
- (void)startFxTime:(union { double x0; struct *x1; } *)a0 ofImageParam:(unsigned int)a1;
- (void)durationFxTime:(union { double x0; struct *x1; } *)a0 ofImageParm:(unsigned int)a1;
- (void)inPointFxTimeOfTimelineForEffect:(union { double x0; struct *x1; } *)a0;
- (void)outPointFxTimeOfTimelineForEffect:(union { double x0; struct *x1; } *)a0;
- (void)timelineFxTime:(union { double x0; struct *x1; } *)a0 fromInputTime:(union { double x0; struct *x1; })a1;
- (void)timelineFxTime:(union { double x0; struct *x1; } *)a0 fromInputATime:(union { double x0; struct *x1; })a1;
- (void)timelineFxTime:(union { double x0; struct *x1; } *)a0 fromInputBTime:(union { double x0; struct *x1; })a1;
- (void)timelineFxTime:(union { double x0; struct *x1; } *)a0 fromImageTime:(union { double x0; struct *x1; })a1 forParmId:(unsigned int)a2;
- (void)inputFxTime:(union { double x0; struct *x1; } *)a0 fromTimelineTime:(union { double x0; struct *x1; })a1;
- (void)inputAFxTime:(union { double x0; struct *x1; } *)a0 fromTimelineTime:(union { double x0; struct *x1; })a1;
- (void)inputBFxTime:(union { double x0; struct *x1; } *)a0 fromTimelineTime:(union { double x0; struct *x1; })a1;
- (void)imageFxTime:(union { double x0; struct *x1; } *)a0 forParmId:(unsigned int)a1 fromTimelineTime:(union { double x0; struct *x1; })a2;
- (BOOL)conformsToProtocol:(id)a0 version:(unsigned int)a1;
- (void)copyFxTime:(union { double x0; struct *x1; })a0 toFxTime:(union { double x0; struct *x1; } *)a1;
- (union { double x0; struct *x1; })zeroTime;
- (union { double x0; struct *x1; })invalidTime;
- (struct { long long x0; int x1; unsigned int x2; long long x3; })timeOffsetForImageParameter:(unsigned int)a0;
- (double)timelineDurationForEffect:(id)a0;

@end
