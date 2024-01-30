@class NSArray, NSString;

@interface VNRecognizeObjectsRequest : VNImageBasedRequest <VNImageIdealImageSizeProviding>

@property unsigned long long imageCropAndScaleOption;
@property BOOL useImageAnalyzerScaling;
@property float modelMinimumDetectionConfidence;
@property float modelNonMaximumSuppressionThreshold;
@property (readonly, copy) NSArray *results;
@property (readonly) NSArray *supportedImageSizeSet;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (const struct { unsigned long long x0; struct { int x0; int x1; } x1; struct { int x0; int x1; } x2; struct { int x0; int x1; } x3; } *)revisionAvailability;
+ (id)descriptionForPrivateRevision:(unsigned long long)a0;
+ (Class)configurationClass;
+ (id)knownObjectIdentifiersRecognizedByRequestRevision:(unsigned long long)a0 error:(id *)a1;

- (id)supportedIdentifiersAndReturnError:(id *)a0;
- (id /* block */)resultsSortingComparator;
- (BOOL)willAcceptCachedResultsFromRequestWithConfiguration:(id)a0;
- (BOOL)warmUpSession:(id)a0 error:(id *)a1;
- (id)newDefaultDetectorOptionsForRequestRevision:(unsigned long long)a0 session:(id)a1;
- (id)_applicableDetectorAndGetConfigurationOptions:(id *)a0 loadedInSession:(id)a1 error:(id *)a2;

@end
