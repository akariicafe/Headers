@class NSString, NSDictionary, CIDualRedEyeRepairSession, CIContext;

@interface BWRedEyeReducerNode : BWNode {
    NSDictionary *_redEyeReductionParametersByPortType;
    struct opaqueCMFormatDescription { } *_outputFormatDescription;
    CIContext *_ciContext;
    CIDualRedEyeRepairSession *_redEyeRepairSession;
    struct opaqueCMSampleBuffer { } *_primaryImageSampleBuffer;
    BOOL _skipRepair;
    int _redEyeReductionVersion;
    int _inferenceType;
    NSString *_inferenceAttachmentKey;
}

+ (void)initialize;

- (void)handleNodeError:(id)a0 forInput:(id)a1;
- (void)configurationWithID:(long long)a0 updatedFormat:(id)a1 didBecomeLiveForInput:(id)a2;
- (id)nodeSubType;
- (void)didReachEndOfDataForInput:(id)a0;
- (id)nodeType;
- (void)prepareForCurrentConfigurationToBecomeLive;
- (void)renderSampleBuffer:(struct opaqueCMSampleBuffer { } *)a0 forInput:(id)a1;
- (void)didSelectFormat:(id)a0 forInput:(id)a1;
- (void)dealloc;
- (int)inferenceType;
- (id)initWithVersion:(int)a0 sensorConfigurationsByPortType:(id)a1;
- (void)setInferenceType:(int)a0;
- (void)setInferenceAttachmentKey:(id)a0;
- (id)inferenceAttachmentKey;

@end
