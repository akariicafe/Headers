@class NSArray, NSMutableArray;

@interface BWStillImageMultiCameraDoserNode : BWNode {
    NSArray *_portTypes;
    long long _currentSettingsID;
    NSMutableArray *_inputIndicesForWhichDosingIsPerformed;
    NSMutableArray *_stashedObjectsByInputIndex;
}

+ (void)initialize;

- (void)handleNodeError:(id)a0 forInput:(id)a1;
- (void)_clearCaptureRequestState;
- (void)configurationWithID:(long long)a0 updatedFormat:(id)a1 didBecomeLiveForInput:(id)a2;
- (id)nodeSubType;
- (void)didReachEndOfDataForInput:(id)a0;
- (id)initWithPortTypes:(id)a0;
- (id)nodeType;
- (void)renderSampleBuffer:(struct opaqueCMSampleBuffer { } *)a0 forInput:(id)a1;
- (void)didSelectFormat:(id)a0 forInput:(id)a1;
- (void)_configureCaptureRequestStateWithRequestedStillImageCaptureSettings:(id)a0 resolvedStillImageCaptureSettings:(id)a1;
- (void)dealloc;
- (id)_outputForNodeInputIndex:(unsigned long long)a0;
- (void)_emitStashedObjectsIfReady;
- (unsigned long long)outputIndexForPortType:(id)a0;

@end
