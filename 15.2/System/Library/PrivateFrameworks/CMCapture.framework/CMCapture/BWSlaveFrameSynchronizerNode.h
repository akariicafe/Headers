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

- (void)didSelectFormat:(id)a0 forInput:(id)a1 forAttachedMediaKey:(id)a2;
- (void)handleNodeError:(id)a0 forInput:(id)a1;
- (void)configurationWithID:(long long)a0 updatedFormat:(id)a1 didBecomeLiveForInput:(id)a2;
- (id)nodeSubType;
- (void)handleStillImageReferenceFrameBracketedCaptureSequenceNumber:(int)a0 forInput:(id)a1;
- (void)didReachEndOfDataForInput:(id)a0;
- (id)nodeType;
- (void)prepareForCurrentConfigurationToBecomeLive;
- (void)renderSampleBuffer:(struct opaqueCMSampleBuffer { } *)a0 forInput:(id)a1;
- (void)handleDroppedSample:(id)a0 forInput:(id)a1;
- (void)_setupDepthMediaConfigurationForInput:(id)a0 attachedMediaKey:(id)a1;
- (void)dealloc;
- (void)_tryToEmitBuffers;
- (id)initWithDepthEnabled:(BOOL)a0 numberOfInputs:(int)a1;
- (void)_setupDepthMediaConfigurationForOutput:(id)a0 attachedMediaKey:(id)a1 inputIndexesDrivingDepthOutput:(id)a2;
- (void)_purgeAllBuffers;
- (void)_printState;
- (void)_purgeAllPurgeableBuffers;
- (void)_emitIncomingFrameKtraces:(struct opaqueCMSampleBuffer { } *)a0 withInput:(id)a1;

@end
