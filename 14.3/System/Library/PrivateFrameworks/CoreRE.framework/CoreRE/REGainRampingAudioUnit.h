@class AUAudioUnitBus, AUAudioUnitBusArray;

@interface REGainRampingAudioUnit : AUAudioUnit {
    AUAudioUnitBus *_inputBus;
    AUAudioUnitBusArray *_inputBusArray;
    AUAudioUnitBus *_outputBus;
    AUAudioUnitBusArray *_outputBusArray;
    struct unique_ptr<boost::lockfree::queue<GainRampCommand>, std::__1::default_delete<boost::lockfree::queue<GainRampCommand> > > { struct __compressed_pair<boost::lockfree::queue<GainRampCommand> *, std::__1::default_delete<boost::lockfree::queue<GainRampCommand> > > { struct queue<GainRampCommand> *__value_; } __ptr_; } _rampGainQueue;
    float _targetGain;
    unsigned int _remainingRampFrames;
}

@property (readonly) float currentGain;

- (id)channelCapabilities;
- (void).cxx_destruct;
- (id).cxx_construct;
- (void)deallocateRenderResources;
- (id)initWithComponentDescription:(struct AudioComponentDescription { unsigned int x0; unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; })a0 options:(unsigned int)a1 error:(id *)a2;
- (id)outputBusses;
- (id)inputBusses;
- (BOOL)allocateRenderResourcesAndReturnError:(id *)a0;
- (id /* block */)internalRenderBlock;
- (void)fadeToGain:(float)a0 duration:(double)a1;

@end
