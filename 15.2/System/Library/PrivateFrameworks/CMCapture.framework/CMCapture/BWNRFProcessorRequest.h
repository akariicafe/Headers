@class NRFUBFusionOutput, BWNRFProcessorInput, NRFDeepFusionOutput;
@protocol BWNRFProcessorControllerDelegate;

@interface BWNRFProcessorRequest : NSObject {
    BWNRFProcessorInput *_input;
    NRFUBFusionOutput *_output;
    NRFDeepFusionOutput *_deepFusionOutput;
    BOOL _processErrorRecoveryFrame;
    BOOL _processOriginalImage;
    int _clientBracketSequenceNumber;
    id<BWNRFProcessorControllerDelegate> _delegate;
}

@property (readonly, nonatomic) BWNRFProcessorInput *input;
@property (readonly, nonatomic) NRFUBFusionOutput *output;
@property (readonly, nonatomic) NRFDeepFusionOutput *deepFusionOutput;
@property (nonatomic) int err;
@property (nonatomic) int demosaicedRawErr;
@property (nonatomic) int numberOfFramesAddedForMultiFrameProcessing;
@property (nonatomic) float totalExposureTimesOfFramesAddedForMultiFrameProcessing;
@property (nonatomic) float minExposureTimesOfFramesAddedForMultiFrameProcessing;
@property (nonatomic) float maxExposureTimesOfFramesAddedForMultiFrameProcessing;
@property (nonatomic) BOOL deliveredDeferredProxyImage;
@property (nonatomic) BOOL deliveredAdaptiveBracketingErrorRecoveryFrame;
@property (nonatomic) BOOL gainMapEnabled;

- (id)description;
- (int)expectedFrameCount;
- (unsigned long long)imageType;
- (id)delegate;
- (void)dealloc;
- (unsigned int)processingType;
- (BOOL)receivedAllFrames;
- (BOOL)keepFramesUntilReferenceFrameSelected;
- (BOOL)processErrorRecoveryFrame;
- (BOOL)processOriginalImage;
- (unsigned long long)fusionErrorRecoveryImageType;
- (BOOL)useFrameForMultiFrameProcessing:(struct opaqueCMSampleBuffer { } *)a0;
- (struct opaqueCMSampleBuffer { } *)clientBracketFrame;
- (id)initWithInput:(id)a0 output:(id)a1 deepFusionOutput:(id)a2 processErrorRecoveryFrame:(BOOL)a3 processOriginalImage:(BOOL)a4 clientBracketSequenceNumber:(int)a5 delegate:(id)a6;
- (BOOL)processClientBracketFrame;

@end
