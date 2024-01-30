@class BWStillImageSettings, NSMutableDictionary, NSDictionary, NSMutableArray;

@interface BWStillImageFrameCoordinatorNode : BWNode {
    NSDictionary *_portTypeToInput;
    NSDictionary *_portTypeToOutput;
    NSDictionary *_portTypeToSensorRawInput;
    NSDictionary *_portTypeToSensorRawOutput;
    NSMutableDictionary *_portTypeToFrameCounters;
    BWStillImageSettings *_currentStillImageSettings;
    BOOL _holdMessagesUntilAllInputsAreLive;
    NSMutableArray *_queuedMessages;
    NSMutableArray *_inputsForQueuedMessages;
}

+ (void)initialize;

- (void)didSelectFormat:(id)a0 forInput:(id)a1;
- (id)outputForPortType:(id)a0;
- (id)nodeType;
- (void)configurationWithID:(long long)a0 updatedFormat:(id)a1 didBecomeLiveForInput:(id)a2;
- (void)handleDroppedSample:(id)a0 forInput:(id)a1;
- (void)didReachEndOfDataForInput:(id)a0;
- (void)handleNodeError:(id)a0 forInput:(id)a1;
- (id)nodeSubType;
- (void)renderSampleBuffer:(struct opaqueCMSampleBuffer { } *)a0 forInput:(id)a1;
- (id)inputForPortType:(id)a0;
- (id)sensorRawOutputForPortType:(id)a0;
- (void)dealloc;
- (id)sensorRawInputForPortType:(id)a0;
- (void)_handleMessage:(id)a0 fromInput:(id)a1;
- (id)initWithPortTypes:(id)a0 sensorRawInputPortTypes:(id)a1;

@end
