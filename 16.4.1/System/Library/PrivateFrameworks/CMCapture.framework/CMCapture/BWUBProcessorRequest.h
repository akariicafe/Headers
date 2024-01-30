@class UBDeepFusionOutput, BWUBProcessorInput, UBFusionOutput;
@protocol BWUBProcessorControllerDelegate;

@interface BWUBProcessorRequest : NSObject {
    BWUBProcessorInput *_input;
    UBFusionOutput *_output;
    UBDeepFusionOutput *_deepFusionOutput;
    BOOL _processErrorRecoveryFrame;
    BOOL _processOriginalImage;
    BOOL _processSemanticRendering;
    BOOL _provideInferenceInputImageForProcessing;
    BOOL _inferencesAvailable;
    id<BWUBProcessorControllerDelegate> _delegate;
}

@property (readonly, nonatomic) BWUBProcessorInput *input;
@property (readonly, nonatomic) UBFusionOutput *output;
@property (readonly, nonatomic) UBDeepFusionOutput *deepFusionOutput;
@property (readonly, nonatomic) BOOL provideInferenceInputImageForProcessing;
@property (readonly, nonatomic) BOOL inferencesAvailable;
@property (nonatomic) int err;
@property (nonatomic) int numberOfFramesAddedForMultiFrameProcessing;
@property (nonatomic) float totalExposureTimesOfFramesAddedForMultiFrameProcessing;
@property (nonatomic) float minExposureTimesOfFramesAddedForMultiFrameProcessing;
@property (nonatomic) float maxExposureTimesOfFramesAddedForMultiFrameProcessing;
@property (nonatomic) BOOL deliveredDeferredProxyImage;

- (void)dealloc;
- (id)description;

@end
