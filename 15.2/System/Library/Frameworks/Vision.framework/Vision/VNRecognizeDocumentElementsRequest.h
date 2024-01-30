@class VNRecognizeDocumentElementsRequestElementConfiguration, NSArray, NSString;

@interface VNRecognizeDocumentElementsRequest : VNImageBasedRequest <VNImageIdealImageSizeProviding>

@property unsigned long long imageCropAndScaleOption;
@property (readonly) VNRecognizeDocumentElementsRequestElementConfiguration *documentElements;
@property (readonly) VNRecognizeDocumentElementsRequestElementConfiguration *textElements;
@property (readonly) VNRecognizeDocumentElementsRequestElementConfiguration *machineReadableCodeElements;
@property (readonly, copy) NSArray *results;
@property (readonly) NSArray *supportedImageSizeSet;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (const struct { unsigned long long x0; struct { int x0; int x1; } x1; struct { int x0; int x1; } x2; struct { int x0; int x1; } x3; } *)revisionAvailability;
+ (Class)configurationClass;

- (BOOL)internalPerformRevision:(unsigned long long)a0 inContext:(id)a1 error:(id *)a2;
- (id)supportedIdentifiersAndReturnError:(id *)a0;
- (id /* block */)resultsSortingComparator;
- (BOOL)willAcceptCachedResultsFromRequestWithConfiguration:(id)a0;
- (BOOL)warmUpSession:(id)a0 error:(id *)a1;
- (id)_applicableDetectorAndOptions:(id *)a0 loadedInSession:(id)a1 error:(id *)a2;
- (id)newDefaultDetectorOptionsForRequestRevision:(unsigned long long)a0 session:(id)a1;

@end
