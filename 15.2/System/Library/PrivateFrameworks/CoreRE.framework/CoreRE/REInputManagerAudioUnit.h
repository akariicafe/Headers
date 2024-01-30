@class AUAudioUnitBus, AUAudioUnitBusArray;

@interface REInputManagerAudioUnit : AUAudioUnit {
    AUAudioUnitBus *_inputBus;
    AUAudioUnitBusArray *_inputBusArray;
    AUAudioUnitBus *_outputBus;
    AUAudioUnitBusArray *_outputBusArray;
    int _inputChannels;
    float *_cachedPCM;
}

@property (readonly) id /* block */ pullInputBlock;

- (void)deallocateRenderResources;
- (void).cxx_destruct;
- (id)outputBusses;
- (id)inputBusses;
- (BOOL)allocateRenderResourcesAndReturnError:(id *)a0;
- (id)channelCapabilities;
- (id /* block */)internalRenderBlock;
- (void)dealloc;
- (id)initWithComponentDescription:(struct AudioComponentDescription { unsigned int x0; unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; })a0 options:(unsigned int)a1 error:(id *)a2;

@end
