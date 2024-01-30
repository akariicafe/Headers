@class AUAudioUnitBusArray, AVAudioPCMBuffer, AUAudioUnitBus;

@interface ChannelDataCaptureAudioUnit : AUAudioUnit {
    AVAudioPCMBuffer *_inputBuffer;
    AUAudioUnitBus *_inputBus;
    AUAudioUnitBusArray *_inputBusArray;
    AUAudioUnitBus *_outputBus;
    AUAudioUnitBusArray *_outputBusArray;
    struct array<std::__1::vector<float, std::__1::allocator<float> >, 2> { struct vector<float, std::__1::allocator<float> > { float *__begin_; float *__end_; struct __compressed_pair<float *, std::__1::allocator<float> > { float *__value_; } __end_cap_; } __elems_[2]; } _buffers;
    struct vector<int, std::__1::allocator<int> > { int *__begin_; int *__end_; struct __compressed_pair<int *, std::__1::allocator<int> > { int *__value_; } __end_cap_; } capturedPositions;
    AVAudioPCMBuffer *capturedBuffer;
}

- (id)stopRecording;
- (id)channelCapabilities;
- (void).cxx_destruct;
- (id).cxx_construct;
- (void)deallocateRenderResources;
- (id)initWithComponentDescription:(struct AudioComponentDescription { unsigned int x0; unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; })a0 options:(unsigned int)a1 error:(id *)a2;
- (void)startRecording:(int)a0;
- (id)outputBusses;
- (id)inputBusses;
- (BOOL)allocateRenderResourcesAndReturnError:(id *)a0;
- (id /* block */)internalRenderBlock;

@end
