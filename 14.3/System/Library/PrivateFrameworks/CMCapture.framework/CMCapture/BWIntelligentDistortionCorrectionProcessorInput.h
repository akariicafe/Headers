@class NSArray;
@protocol BWIntelligentDistortionCorrectionProcessorInputDelegate;

@interface BWIntelligentDistortionCorrectionProcessorInput : BWStillImageProcessorInput {
    struct opaqueCMSampleBuffer { } *_image;
    BOOL _imageSet;
    unsigned long long _imageBufferType;
    struct __CVBuffer { } *_lowResPersonSegmentationMask;
    BOOL _lowResPersonSegmentationMaskSet;
    NSArray *_faceDetectionObservations;
    BOOL _faceDetectionObservationsSet;
}

@property (nonatomic) BOOL receivedAllInputs;
@property (retain, nonatomic) id<BWIntelligentDistortionCorrectionProcessorInputDelegate> delegate;
@property (nonatomic) BOOL processIntelligentDistortionCorrection;
@property (nonatomic) BOOL processGeometricDistortionCorrection;
@property (readonly, nonatomic) struct opaqueCMSampleBuffer { } *image;
@property (nonatomic) unsigned long long imageBufferType;
@property (readonly, nonatomic) struct __CVBuffer { } *lowResPersonSegmentationMask;
@property (readonly, nonatomic) NSArray *faceDetectionObservations;

- (void)dealloc;
- (id)description;
- (id)initWithSettings:(id)a0 portType:(id)a1;
- (void)addImage:(struct opaqueCMSampleBuffer { } *)a0;
- (void)addLowResPersonSegmentationMask:(struct __CVBuffer { } *)a0;
- (void)addFaceDetectionObservations:(id)a0;

@end
