@class NSArray, NSString;

@interface VNRecognizeTextRequest : VNImageBasedRequest <VNRequestProgressProviding>

@property (copy, nonatomic) NSArray *recognitionLanguages;
@property (copy, nonatomic) NSArray *customWords;
@property (nonatomic) long long recognitionLevel;
@property (nonatomic) BOOL usesLanguageCorrection;
@property (nonatomic) float minimumTextHeight;
@property (copy, nonatomic) id /* block */ progressHandler;
@property (readonly) BOOL indeterminate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (const struct { unsigned long long x0; struct { int x0; int x1; } x1; struct { int x0; int x1; } x2; struct { int x0; int x1; } x3; } *)revisionAvailability;
+ (id)supportedRecognitionLanguagesForTextRecognitionLevel:(long long)a0 revision:(unsigned long long)a1 error:(id *)a2;
+ (Class)configurationClass;

- (id)initWithCompletionHandler:(id /* block */)a0;
- (void).cxx_destruct;
- (BOOL)internalPerformRevision:(unsigned long long)a0 inContext:(id)a1 error:(id *)a2;
- (BOOL)hasCancellationHook;
- (void)applyConfigurationOfRequest:(id)a0;
- (BOOL)_detectTextWithRequestPerformingContext:(id)a0 requestRevision:(unsigned long long)a1 error:(id *)a2;
- (id)sequencedRequestPreviousObservationsKey;
- (BOOL)willAcceptCachedResultsFromRequestWithConfiguration:(id)a0;

@end
