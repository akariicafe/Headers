@class NSNumber;

@interface PVMotionEffectTranscriptionComponent : PVMotionEffectComponent <PVEffectTranscript> {
    NSNumber *_isTranscription;
    NSNumber *_isSingleWordTranscription;
    NSNumber *_disableWordFadeOutForPreview;
}

+ (id)motionEffectPropertyKeyToPublishedParameterNameMap;

- (void).cxx_destruct;
- (BOOL)isTranscription;
- (void)clearTranscription;
- (void)computeLoopMarkerBasedOnTranscription_NoLock:(const void *)a0;
- (BOOL)disableWordFadeOutForPreview;
- (void)disableWordFadeOutIfNecessary_NoLock:(const void *)a0;
- (void)effect:(id)a0 updateProperties:(id)a1 allProperties:(id)a2;
- (BOOL)isSingleWordTranscription;
- (void)motionEffect:(id)a0 didBecomeReady:(const void *)a1 properties:(id)a2;
- (void)motionEffect:(id)a0 didLoad:(const void *)a1;
- (void)resetToDefaultTranscriptionForLocaleID:(id)a0;
- (void)setTranscriptionText:(id)a0;
- (void)setupTranscriptionParameters_NoLock:(id)a0 documentInfo:(const void *)a1;
- (BOOL)shouldDisableWordFadeOut_NoLock:(const void *)a0;
- (struct { long long x0; int x1; unsigned int x2; long long x3; })transcriptionDuration;
- (struct { long long x0; int x1; unsigned int x2; long long x3; })transcriptionDuration_NoLock:(const void *)a0;
- (BOOL)transcriptionHitTest:(struct CGPoint { double x0; double x1; })a0 time:(struct { long long x0; int x1; unsigned int x2; long long x3; })a1;
- (void)updateLiveTitlePickerLoopTime:(BOOL)a0;

@end
