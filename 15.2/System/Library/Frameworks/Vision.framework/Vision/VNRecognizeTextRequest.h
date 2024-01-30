@class NSArray, NSString;

@interface VNRecognizeTextRequest : VNImageBasedRequest <VNRequestProgressProviding>

@property (copy, nonatomic) NSArray *recognitionLanguages;
@property (copy, nonatomic) NSArray *customWords;
@property (nonatomic) long long recognitionLevel;
@property (nonatomic) BOOL usesLanguageCorrection;
@property (nonatomic) float minimumTextHeight;
@property (readonly, copy) NSArray *results;
@property (copy, nonatomic) id /* block */ progressHandler;
@property (readonly) BOOL indeterminate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (const struct { unsigned long long x0; struct { int x0; int x1; } x1; struct { int x0; int x1; } x2; struct { int x0; int x1; } x3; } *)revisionAvailability;
+ (Class)configurationClass;
+ (id)supportedRecognitionLanguagesForTextRecognitionLevel:(long long)a0 revision:(unsigned long long)a1 error:(id *)a2;

- (id)sequencedRequestPreviousObservationsKey;
- (BOOL)internalPerformRevision:(unsigned long long)a0 inContext:(id)a1 error:(id *)a2;
- (void)applyConfigurationOfRequest:(id)a0;
- (id)supportedRecognitionLanguagesAndReturnError:(id *)a0;
- (id /* block */)resultsSortingComparator;
- (BOOL)willAcceptCachedResultsFromRequestWithConfiguration:(id)a0;
- (void).cxx_destruct;
- (BOOL)hasCancellationHook;
- (id)_applicableDetectorAndOptions:(id *)a0 loadedInSession:(id)a1 error:(id *)a2;
- (id)newDefaultDetectorOptionsForRequestRevision:(unsigned long long)a0 session:(id)a1;

@end
