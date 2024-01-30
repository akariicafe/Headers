@class AUAudioUnitBus, AUAudioUnitBusArray;

@interface REGainRampingAudioUnit : AUAudioUnit {
    AUAudioUnitBus *_inputBus;
    AUAudioUnitBusArray *_inputBusArray;
    AUAudioUnitBus *_outputBus;
    AUAudioUnitBusArray *_outputBusArray;
    struct unique_ptr<re::audio::FixedSpscAudioQueue<GainRampCommand>, std::default_delete<re::audio::FixedSpscAudioQueue<GainRampCommand>>> { struct __compressed_pair<re::audio::FixedSpscAudioQueue<GainRampCommand> *, std::default_delete<re::audio::FixedSpscAudioQueue<GainRampCommand>>> { void *__value_; } __ptr_; } _rampGainQueue;
    float _targetGain;
    unsigned int _remainingRampFrames;
}

@property (readonly) float currentGain;

- (void)deallocateRenderResources;
- (void).cxx_destruct;
- (id)outputBusses;
- (id)inputBusses;
- (BOOL)allocateRenderResourcesAndReturnError:(id *)a0;
- (id)channelCapabilities;
- (id /* block */)internalRenderBlock;
- (id).cxx_construct;
- (id)initWithComponentDescription:(struct AudioComponentDescription { unsigned int x0; unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; })a0 options:(unsigned int)a1 error:(id *)a2;
- (void)fadeToGain:(float)a0 duration:(double)a1;

@end
