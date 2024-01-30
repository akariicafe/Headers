@class HMIBoundingBoxExtractor, CIContext, HMIPackageCandidateDetectorConfiguration, CIImage, HMIAverageImage;

@interface HMIPackageCandidateDetector : HMFObject

@property (readonly) HMIAverageImage *temporalAverageImage;
@property (readonly) HMIBoundingBoxExtractor *boxExtractor;
@property (readonly) CIContext *context;
@property (readonly) CIImage *referenceImage;
@property (readonly) HMIPackageCandidateDetectorConfiguration *config;

- (BOOL)updateWithFrame:(id)a0;
- (void).cxx_destruct;
- (id)initWithReferenceImage:(id)a0 config:(id)a1;
- (id)detectedPackageCandidates;

@end
