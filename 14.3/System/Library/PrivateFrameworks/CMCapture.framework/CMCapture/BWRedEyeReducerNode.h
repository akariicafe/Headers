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

- (void)prepareForCurrentConfigurationToBecomeLive;
- (void)didSelectFormat:(id)a0 forInput:(id)a1;
- (void)configurationWithID:(long long)a0 updatedFormat:(id)a1 didBecomeLiveForInput:(id)a2;
- (id)nodeType;
- (id)nodeSubType;
- (void)didReachEndOfDataForInput:(id)a0;
- (void)renderSampleBuffer:(struct opaqueCMSampleBuffer { } *)a0 forInput:(id)a1;
- (void)handleNodeError:(id)a0 forInput:(id)a1;
- (id)inferenceAttachmentKey;
- (void)dealloc;
- (int)inferenceType;
- (void)setInferenceType:(int)a0;
- (id)initWithVersion:(int)a0 sensorConfigurationsByPortType:(id)a1;
- (void)setInferenceAttachmentKey:(id)a0;

@end
