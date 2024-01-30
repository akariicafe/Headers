@class NSArray, NSMutableArray;

@interface BWStillImageMultiCameraDoserNode : BWNode {
    NSArray *_portTypes;
    long long _currentSettingsID;
    NSMutableArray *_inputIndicesForWhichDosingIsPerformed;
    NSMutableArray *_stashedObjectsByInputIndex;
}

+ (void)initialize;

- (void)didSelectFormat:(id)a0 forInput:(id)a1;
- (void)configurationWithID:(long long)a0 updatedFormat:(id)a1 didBecomeLiveForInput:(id)a2;
- (id)nodeType;
- (id)nodeSubType;
- (void)didReachEndOfDataForInput:(id)a0;
- (void)renderSampleBuffer:(struct opaqueCMSampleBuffer { } *)a0 forInput:(id)a1;
- (void)handleNodeError:(id)a0 forInput:(id)a1;
- (void)dealloc;
- (void)_clearCaptureRequestState;
- (id)_outputForNodeInputIndex:(unsigned long long)a0;
- (void)_emitStashedObjectsIfReady;
- (unsigned long long)outputIndexForPortType:(id)a0;
- (void)_configureCaptureRequestStateWithRequestedStillImageCaptureSettings:(id)a0 resolvedStillImageCaptureSettings:(id)a1;
- (id)initWithPortTypes:(id)a0;

@end
