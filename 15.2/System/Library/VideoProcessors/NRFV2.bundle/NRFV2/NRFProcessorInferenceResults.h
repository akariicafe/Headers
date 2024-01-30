@class NSArray, NSDictionary, NSString;

@interface NRFProcessorInferenceResults : NSObject <IBPNoiseReductionProcessorInferenceResults>

@property (nonatomic) int status;
@property (retain, nonatomic) struct __CVBuffer { } *skinMask;
@property (retain, nonatomic) struct __CVBuffer { } *skyMask;
@property (retain, nonatomic) struct __CVBuffer { } *personMask;
@property (retain, nonatomic) NSArray *faceLandmarks;
@property (retain, nonatomic) NSArray *lowResPersonInstanceMasks;
@property (retain, nonatomic) NSArray *lowResPersonInstanceConfidences;
@property (retain, nonatomic) NSArray *lowResPersonInstanceBoundingBoxes;
@property (retain, nonatomic) NSDictionary *smartCameraClassifications;
@property (retain, nonatomic) NSString *smartCameraSceneType;
@property (retain, nonatomic) NSArray *skinToneClassificationsForFaces;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)dealloc;

@end
