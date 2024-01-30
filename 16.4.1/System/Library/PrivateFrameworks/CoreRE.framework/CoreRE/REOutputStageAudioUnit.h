@class AUAudioUnitBusArray, AVAudioPCMBuffer, AUAudioUnitBus;

@interface REOutputStageAudioUnit : AUAudioUnit {
    AVAudioPCMBuffer *_inputBuffer;
    AUAudioUnitBus *_inputBus;
    AUAudioUnitBusArray *_inputBusArray;
    AUAudioUnitBus *_outputBus;
    AUAudioUnitBusArray *_outputBusArray;
    struct atomic<int> { struct __cxx_atomic_impl<int, std::__cxx_atomic_base_impl<int>> { _Atomic int __a_value; } __a_; } _clipCount;
}

- (id /* block */)internalRenderBlock;
- (id)initWithComponentDescription:(struct AudioComponentDescription { unsigned int x0; unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; })a0 options:(unsigned int)a1 error:(id *)a2;
- (BOOL)allocateRenderResourcesAndReturnError:(id *)a0;
- (id)outputBusses;
- (void).cxx_destruct;
- (id)channelCapabilities;
- (void)deallocateRenderResources;
- (id)inputBusses;

@end
