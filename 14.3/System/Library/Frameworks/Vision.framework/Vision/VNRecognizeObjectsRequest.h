@class NSArray, NSString;

@interface VNRecognizeObjectsRequest : VNImageBasedRequest <VNImageIdealImageSizeProviding>

@property unsigned long long imageCropAndScaleOption;
@property BOOL useImageAnalyzerScaling;
@property float modelMinimumDetectionConfidence;
@property float modelNonMaximumSuppressionThreshold;
@property (readonly) NSArray *supportedImageSizeSet;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)defaultProcessingDeviceForRevision:(unsigned long long)a0;
+ (BOOL)supportsPrivateRevision:(unsigned long long)a0;
+ (Class)configurationClass;
+ (id)knownObjectIdentifiersRecognizedByRequestRevision:(unsigned long long)a0 error:(id *)a1;
+ (id)descriptionForPrivateRevision:(unsigned long long)a0;

- (BOOL)warmUpSession:(id)a0 error:(id *)a1;
- (id)newDefaultDetectorOptionsForRequestRevision:(unsigned long long)a0 session:(id)a1;
- (id /* block */)resultsSortingComparator;
- (id)_recognizedObjectsIdentifiersAndReturnError:(id *)a0;
- (id)_applicableDetectorAndGetConfigurationOptions:(id *)a0 loadedInSession:(id)a1 error:(id *)a2;
- (BOOL)willAcceptCachedResultsFromRequestWithConfiguration:(id)a0;

@end
