@class AVAudioFormat, VCAudioIOControllerClient, AUAudioUnitBusArray;

@interface VCSpatialAudioUnit : AUAudioUnit {
    AVAudioFormat *_format;
    AUAudioUnitBusArray *_outputBusArray;
    AUAudioUnitBusArray *_inputBusArray;
    double _currentTempBufferSampleTime;
}

@property struct opaqueVCAudioBufferList { } *renderBuffer;
@property struct opaqueVCAudioBufferList { } *tempBuffer;
@property struct _VCAudioIOControllerIOState { BOOL timestampInitialized; double lastHostTime; unsigned int lastInputTimestamp; unsigned int lastInputSampleCount; double lastBlockSize; unsigned long long lastTimestamp; struct _VCSingleLinkedList { struct _VCSingleLinkedListEntry *head; BOOL initialized; void /* function */ *compare; unsigned long long countEntries; } clientIOList; struct opaqueCMSimpleQueue *eventQueue; struct opaqueVCAudioLimiter *audioLimiter; struct opaqueVCAudioBufferList *secondarySampleBuffer; } ioState;
@property (retain, nonatomic) VCAudioIOControllerClient *client;

+ (void)registerAudioUnitDescription;
+ (void)instantiate:(id /* block */)a0;

- (void)dealloc;
- (void)deallocateRenderResources;
- (id)initWithComponentDescription:(struct AudioComponentDescription { unsigned int x0; unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; })a0 options:(unsigned int)a1 error:(id *)a2;
- (id)outputBusses;
- (id)inputBusses;
- (BOOL)allocateRenderResourcesAndReturnError:(id *)a0;
- (id /* block */)internalRenderBlock;
- (id)initWithComponentDescription:(struct AudioComponentDescription { unsigned int x0; unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; })a0 options:(unsigned int)a1 error:(id *)a2 client:(id)a3;

@end
