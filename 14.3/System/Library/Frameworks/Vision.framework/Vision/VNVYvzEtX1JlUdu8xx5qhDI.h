@class NSArray, NSString;

@interface VNVYvzEtX1JlUdu8xx5qhDI : VNImageBasedRequest <VNImageIdealImageSizeProviding>

@property unsigned long long imageCropAndScaleOption;
@property (readonly) NSArray *supportedImageSizeSet;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)defaultProcessingDeviceForRevision:(unsigned long long)a0;
+ (BOOL)supportsPrivateRevision:(unsigned long long)a0;
+ (Class)configurationClass;
+ (id)_observationsForRequestRevision:(unsigned long long)a0 withIdentifiers:(id)a1;
+ (id)knownClassificationsForRevision:(unsigned long long)a0 error:(id *)a1;
+ (id)descriptionForPrivateRevision:(unsigned long long)a0;

- (BOOL)internalPerformRevision:(unsigned long long)a0 inContext:(id)a1 error:(id *)a2;
- (BOOL)warmUpSession:(id)a0 error:(id *)a1;
- (id)newDefaultDetectorOptionsForRequestRevision:(unsigned long long)a0 session:(id)a1;
- (id /* block */)resultsSortingComparator;
- (id)_applicableDetectorAndOptions:(id *)a0 loadedInSession:(id)a1 error:(id *)a2;
- (BOOL)willAcceptCachedResultsFromRequestWithConfiguration:(id)a0;

@end
