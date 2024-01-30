@class NSArray, NSString, VNDetectBarcodesRequest;

@interface VNRecognizeDocumentsRequest : VNImageBasedRequest <VNRequestProgressProviding, VNDocumentObservationsAccepting>

@property (copy, nonatomic) NSArray *recognitionLanguages;
@property (copy, nonatomic) NSArray *customWords;
@property (nonatomic) long long recognitionLevel;
@property (nonatomic) BOOL usesLanguageCorrection;
@property (nonatomic) BOOL usesLanguageDetection;
@property (nonatomic) BOOL usesAlternateLineGrouping;
@property (nonatomic) float minimumTextHeight;
@property (nonatomic) BOOL detectionOnly;
@property (nonatomic) unsigned long long maximumCandidateCount;
@property (retain, nonatomic) VNDetectBarcodesRequest *barcodeRequest;
@property (readonly, copy) NSArray *results;
@property (copy, nonatomic) id /* block */ progressHandler;
@property (readonly) BOOL indeterminate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (copy, nonatomic) NSArray *inputTextBlocks;

+ (Class)configurationClass;
+ (id)supportedRecognitionLanguagesForTextRecognitionLevel:(long long)a0 revision:(unsigned long long)a1 error:(id *)a2;

- (id)sequencedRequestPreviousObservationsKey;
- (BOOL)internalPerformRevision:(unsigned long long)a0 inContext:(id)a1 error:(id *)a2;
- (id)supportedRecognitionLanguagesAndReturnError:(id *)a0;
- (BOOL)willAcceptCachedResultsFromRequestWithConfiguration:(id)a0;
- (BOOL)warmUpSession:(id)a0 error:(id *)a1;
- (void).cxx_destruct;
- (BOOL)hasCancellationHook;
- (id)_applicableDetectorAndOptions:(id *)a0 loadedInSession:(id)a1 error:(id *)a2;
- (id)newDefaultDetectorOptionsForRequestRevision:(unsigned long long)a0 session:(id)a1;

@end
