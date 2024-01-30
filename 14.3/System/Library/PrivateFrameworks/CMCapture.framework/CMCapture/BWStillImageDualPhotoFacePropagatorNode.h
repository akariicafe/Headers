@class BWNodeInput, NSArray, BWNodeError, BWNodeOutput;

@interface BWStillImageDualPhotoFacePropagatorNode : BWNode {
    long long _currentSettingsID;
    NSArray *_baseZoomFactors;
    struct opaqueCMSampleBuffer { } *_widerFOVBuffer;
    struct opaqueCMSampleBuffer { } *_narrowerFOVBuffer;
    BWNodeError *_widerFOVError;
    BWNodeError *_narrowerFOVError;
    BWNodeInput *_widerFOVInput;
    BWNodeInput *_narrowerFOVInput;
    BWNodeOutput *_widerFOVOutput;
    BWNodeOutput *_narrowerFOVOutput;
}

+ (void)initialize;

- (void)didSelectFormat:(id)a0 forInput:(id)a1;
- (void)configurationWithID:(long long)a0 updatedFormat:(id)a1 didBecomeLiveForInput:(id)a2;
- (id)nodeType;
- (void)_processWiderAndNarrowerFOVInput;
- (void)_emitBuffersAndErrorsToOutputs;
- (id)nodeSubType;
- (void)didReachEndOfDataForInput:(id)a0;
- (void)renderSampleBuffer:(struct opaqueCMSampleBuffer { } *)a0 forInput:(id)a1;
- (void)handleNodeError:(id)a0 forInput:(id)a1;
- (void)dealloc;
- (void)_clearCaptureRequestState;
- (id)initWithBaseZoomFactors:(id)a0;
- (void)_configureCaptureRequestStateWithStillImageSettings:(id)a0;

@end
