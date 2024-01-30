@class UBDeepFusionOutput, BWUBProcessorInput, UBFusionOutput;
@protocol BWUBProcessorControllerDelegate;

@interface BWUBProcessorRequest : NSObject {
    BWUBProcessorInput *_input;
    UBFusionOutput *_output;
    UBDeepFusionOutput *_deepFusionOutput;
    BOOL _processErrorRecoveryFrame;
    BOOL _processOriginalImage;
    id<BWUBProcessorControllerDelegate> _delegate;
}

@property (readonly, nonatomic) BWUBProcessorInput *input;
@property (readonly, nonatomic) UBFusionOutput *output;
@property (readonly, nonatomic) UBDeepFusionOutput *deepFusionOutput;
@property (nonatomic) int err;
@property (nonatomic) int numberOfFramesAddedForMultiFrameProcessing;
@property (nonatomic) float totalExposureTimesOfFramesAddedForMultiFrameProcessing;
@property (nonatomic) float minExposureTimesOfFramesAddedForMultiFrameProcessing;
@property (nonatomic) float maxExposureTimesOfFramesAddedForMultiFrameProcessing;
@property (nonatomic) BOOL deliveredDeferredProxyImage;

- (unsigned int)processingType;
- (int)expectedFrameCount;
- (void)dealloc;
- (id)description;
- (BOOL)receivedAllFrames;
- (BOOL)keepFramesUntilReferenceFrameSelected;
- (id)initWithInput:(id)a0 output:(id)a1 deepFusionOutput:(id)a2 processErrorRecoveryFrame:(BOOL)a3 processOriginalImage:(BOOL)a4 delegate:(id)a5;
- (BOOL)processErrorRecoveryFrame;
- (BOOL)processOriginalImage;
- (unsigned long long)fusionErrorRecoveryImageType;
- (BOOL)useFrameForMultiFrameProcessing:(struct opaqueCMSampleBuffer { } *)a0;
- (unsigned long long)imageType;
- (id)delegate;

@end
