@interface BWSlaveFrameSynchronizerNode : BWNode {
    int _numEODMessagesReceived;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _bufferServicingLock;
    struct opaqueCMSimpleQueue **_inputSampleBufferQueues;
    int _numBufferedFrames;
    BOOL _slaveStreamHasStarted;
    int _numSlaveFramesReceived;
    int _numSlaveFramesToSkip;
    BOOL _startEmittingMasterFramesBeforeSlaveStreamStarts;
}

+ (void)initialize;

- (void)handleDroppedSample:(id)a0 forInput:(id)a1;
- (void)handleStillImageReferenceFrameBracketedCaptureSequenceNumber:(int)a0 forInput:(id)a1;
- (void)prepareForCurrentConfigurationToBecomeLive;
- (void)didSelectFormat:(id)a0 forInput:(id)a1 forAttachedMediaKey:(id)a2;
- (void)configurationWithID:(long long)a0 updatedFormat:(id)a1 didBecomeLiveForInput:(id)a2;
- (id)nodeType;
- (id)nodeSubType;
- (void)didReachEndOfDataForInput:(id)a0;
- (id)initWithDepthEnabled:(BOOL)a0 numberOfInputs:(int)a1;
- (void)renderSampleBuffer:(struct opaqueCMSampleBuffer { } *)a0 forInput:(id)a1;
- (void)handleNodeError:(id)a0 forInput:(id)a1;
- (void)dealloc;
- (void)_printState;
- (void)_setupDepthMediaConfigurationForOutput:(id)a0 attachedMediaKey:(id)a1 inputIndexesDrivingDepthOutput:(id)a2;
- (void)_purgeAllBuffers;
- (void)_purgeAllPurgeableBuffers;
- (void)_tryToEmitBuffers;
- (void)_emitIncomingFrameKtraces:(struct opaqueCMSampleBuffer { } *)a0 withInput:(id)a1;
- (void)_setupDepthMediaConfigurationForInput:(id)a0 attachedMediaKey:(id)a1;

@end
