@class AUAudioUnitBus, NSString, AUAudioUnitBusArray, AVAudioPCMBuffer;

@interface RECaptureAudioUnit : AUAudioUnit {
    AVAudioPCMBuffer *_inputBuffer;
    AUAudioUnitBus *_inputBus;
    AUAudioUnitBusArray *_inputBusArray;
    AUAudioUnitBus *_outputBus;
    AUAudioUnitBusArray *_outputBusArray;
    struct shared_ptr<AudioStreamRecordingManager::StreamWriter> { struct StreamWriter *__ptr_; struct __shared_weak_count *__cntrl_; } _recordingStreamWriter;
}

@property (copy, nonatomic) NSString *captureName;

- (void)deallocateRenderResources;
- (void).cxx_destruct;
- (id)outputBusses;
- (id)inputBusses;
- (BOOL)allocateRenderResourcesAndReturnError:(id *)a0;
- (id)channelCapabilities;
- (id /* block */)internalRenderBlock;
- (id).cxx_construct;
- (id)initWithComponentDescription:(struct AudioComponentDescription { unsigned int x0; unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; })a0 options:(unsigned int)a1 error:(id *)a2;

@end
