@interface AVAudioIONode : AVAudioNode

@property (readonly, nonatomic) double presentationLatency;
@property (readonly, nonatomic) struct OpaqueAudioComponentInstance { } *audioUnit;
@property (readonly, nonatomic, getter=isVoiceProcessingEnabled) BOOL voiceProcessingEnabled;

- (id)initWithIOUnit:(struct AVAudioIOUnit { void /* function */ **x0; id x1; struct AVAudioEngineImpl *x2; struct unique_ptr<AUInterfaceIOV3, std::__1::default_delete<AUInterfaceIOV3> > { struct __compressed_pair<AUInterfaceIOV3 *, std::__1::default_delete<AUInterfaceIOV3> > { struct AUInterfaceIOV3 *x0; } x0; } x3; id x4; id x5; struct AudioComponentDescription { unsigned int x0; unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; } x6; } *)a0 isInput:(BOOL)a1;
- (void)didAttachToEngine:(id)a0;
- (void)didDetachFromEngine:(id)a0 error:(id *)a1;
- (BOOL)setVoiceProcessingEnabled:(BOOL)a0 error:(id *)a1;
- (BOOL)enableManualRenderingMode:(long long)a0 isInput:(BOOL)a1;
- (BOOL)enableRealtimeRenderingModeWithIOUnit:(struct AVAudioIOUnit { void /* function */ **x0; id x1; struct AVAudioEngineImpl *x2; struct unique_ptr<AUInterfaceIOV3, std::__1::default_delete<AUInterfaceIOV3> > { struct __compressed_pair<AUInterfaceIOV3 *, std::__1::default_delete<AUInterfaceIOV3> > { struct AUInterfaceIOV3 *x0; } x0; } x3; id x4; id x5; struct AudioComponentDescription { unsigned int x0; unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; } x6; } *)a0 isInput:(BOOL)a1 forceIOUnitReset:(BOOL)a2;
- (BOOL)isInManualRenderingMode;
- (long long)manualRenderingMode;

@end
