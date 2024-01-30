@class NSMutableDictionary, NSDictionary, BWStillImageCaptureSettings, NSMutableArray;

@interface BWStillImageFrameCoordinatorNode : BWNode {
    NSDictionary *_portTypeToInput;
    NSDictionary *_portTypeToOutput;
    NSMutableDictionary *_portTypeToFrameCounters;
    BWStillImageCaptureSettings *_currentResolvedStillImageCaptureSettings;
    BOOL _holdMessagesUntilAllInputsAreLive;
    NSMutableArray *_queuedMessages;
    NSMutableArray *_inputsForQueuedMessages;
}

+ (void)initialize;

- (void)handleDroppedSample:(id)a0 forInput:(id)a1;
- (void)didSelectFormat:(id)a0 forInput:(id)a1;
- (void)configurationWithID:(long long)a0 updatedFormat:(id)a1 didBecomeLiveForInput:(id)a2;
- (id)nodeType;
- (id)nodeSubType;
- (void)didReachEndOfDataForInput:(id)a0;
- (void)renderSampleBuffer:(struct opaqueCMSampleBuffer { } *)a0 forInput:(id)a1;
- (void)handleNodeError:(id)a0 forInput:(id)a1;
- (void)dealloc;
- (id)outputForPortType:(id)a0;
- (void)_handleMessage:(id)a0 fromInput:(id)a1;
- (int)_setupStillImageCaptureStateWithResolvedStillImageCaptureSettings:(id)a0;
- (void)_handleSampleBuffer:(struct opaqueCMSampleBuffer { } *)a0;
- (void)_handleZeroShutterLagSampleBuffer:(struct opaqueCMSampleBuffer { } *)a0;
- (BOOL)_isCaptureComplete;
- (void)_resetStillImageCaptureState;
- (id)initWithPortTypes:(id)a0;
- (id)inputForPortType:(id)a0;
- (void)_deliverQueuedMessages;

@end
