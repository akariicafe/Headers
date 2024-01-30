@class NSDictionary, NSMutableDictionary, BWStillImageCaptureSettings;

@interface BWStillImageTimeMachineFrameCoordinatorNode : BWNode {
    NSDictionary *_portTypeToInput;
    NSDictionary *_portTypeToOutput;
    NSMutableDictionary *_portTypeToFrameCounts;
    BWStillImageCaptureSettings *_currentResolvedStillImageCaptureSettings;
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
- (int)_setupStillImageCaptureStateWithResolvedStillImageCaptureSettings:(id)a0;
- (void)_handleSampleBuffer:(struct opaqueCMSampleBuffer { } *)a0;
- (BOOL)_isCaptureComplete;
- (void)_resetStillImageCaptureState;
- (id)initWithPortTypes:(id)a0;
- (id)inputForPortType:(id)a0;

@end
