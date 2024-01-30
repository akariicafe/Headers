@class BWNodeInput, BWStillImageSettings, NSDictionary, BWNodeError, BWStillImageNodeConfiguration, FigDisparityGenerator;

@interface BWStillImageBravoDisparityNode : BWNode {
    NSDictionary *_sensorConfigurationsByPortType;
    FigDisparityGenerator *_disparityGenerator;
    unsigned long long _disparityMapWidth;
    unsigned long long _disparityMapHeight;
    struct opaqueCMFormatDescription { } *_disparityFormatDescription;
    BWStillImageSettings *_currentStillImageSettings;
    int _expectedDisparityCount;
    int _deliveredDisparityCount;
    int _processingMode;
    struct opaqueCMSampleBuffer { } *_teleSbuf;
    struct opaqueCMSampleBuffer { } *_wideSbuf;
    BOOL _emitTeleFrame;
    BOOL _emitWideFrame;
    BWNodeError *_errorForWide;
    BWNodeError *_errorForTele;
    BOOL _shouldComputeDisparityWhenCalibrationFails;
    BOOL _disparityInputIsRaw;
    BWStillImageNodeConfiguration *_nodeConfiguration;
}

@property (readonly, nonatomic) BWNodeInput *wideInput;
@property (readonly, nonatomic) BWNodeInput *telephotoInput;

+ (void)initialize;

- (void)prepareForCurrentConfigurationToBecomeLive;
- (void)didSelectFormat:(id)a0 forInput:(id)a1 forAttachedMediaKey:(id)a2;
- (id)nodeType;
- (void)configurationWithID:(long long)a0 updatedFormat:(id)a1 didBecomeLiveForInput:(id)a2;
- (void)didReachEndOfDataForInput:(id)a0;
- (void)handleNodeError:(id)a0 forInput:(id)a1;
- (id)nodeSubType;
- (void)renderSampleBuffer:(struct opaqueCMSampleBuffer { } *)a0 forInput:(id)a1;
- (BOOL)attachesInputBracketToOutputSampleBuffer;
- (BOOL)shouldComputeDisparityWhenCalibrationFails;
- (void)dealloc;
- (void)setAttachesInputBracketToOutputSampleBuffer:(BOOL)a0;
- (void)setShouldComputeDisparityWhenCalibrationFails:(BOOL)a0;
- (id)initWithNodeConfiguration:(id)a0 sensorConfigurationsByPortType:(id)a1 disparityMapWidth:(unsigned long long)a2 disparityMapHeight:(unsigned long long)a3 outputDisparityBufferCount:(int)a4;

@end
