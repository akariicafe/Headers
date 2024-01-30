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
- (id)nodeType;
- (void)configurationWithID:(long long)a0 updatedFormat:(id)a1 didBecomeLiveForInput:(id)a2;
- (void)didReachEndOfDataForInput:(id)a0;
- (void)handleNodeError:(id)a0 forInput:(id)a1;
- (id)nodeSubType;
- (void)renderSampleBuffer:(struct opaqueCMSampleBuffer { } *)a0 forInput:(id)a1;
- (void)dealloc;
- (id)initWithBaseZoomFactors:(id)a0;

@end
