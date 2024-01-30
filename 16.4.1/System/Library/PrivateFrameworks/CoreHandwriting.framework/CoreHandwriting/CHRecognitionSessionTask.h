@class CHStrokeClassificationModel, NSArray, CHRecognitionSessionResult, NSSet, NSObject;
@protocol OS_dispatch_queue, CHRecognitionSessionTaskDelegate, CHStrokeProvider;

@interface CHRecognitionSessionTask : NSObject

@property (retain, nonatomic, setter=_setOutputResult:) CHRecognitionSessionResult *outputResult;
@property (nonatomic, setter=_setStatus:) long long status;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *_recognizersQueue;
@property (readonly, nonatomic) CHStrokeClassificationModel *strokeClassificationModel;
@property (readonly, nonatomic) NSArray *subjectStrokeIdentifiers;
@property BOOL cancelled;
@property (copy, nonatomic) id /* block */ partialResultBlock;
@property (readonly, nonatomic) CHRecognitionSessionResult *inputResult;
@property (nonatomic) id<CHRecognitionSessionTaskDelegate> delegate;
@property (readonly, copy, nonatomic) NSArray *recognitionLocales;
@property (readonly, copy, nonatomic) NSArray *preferredLocales;
@property (readonly, nonatomic) id<CHStrokeProvider> strokeProvider;
@property (readonly, nonatomic) long long recognitionEnvironment;
@property (readonly, nonatomic) long long strokeGroupingRequirement;
@property (readonly, nonatomic) BOOL isHighResponsivenessTask;
@property (nonatomic) BOOL saveInputDrawings;
@property (copy, nonatomic) NSSet *forceRecognitionStrokeGroupIdentifiers;
@property (nonatomic) BOOL strokeGroupingOnly;

- (void)main;
- (void)cancel;
- (id)init;
- (void).cxx_destruct;
- (BOOL)_isTransitionValidFromStatus:(long long)a0 toStatus:(long long)a1;
- (void)_logResultsIfAppropriateWithStrokeProvider:(id)a0;
- (id)_recognitionResultsForNonTextStrokeGroup:(id)a0 groupingManager:(id)a1;
- (id)_textRecognitionResultsForTextStrokeGroup:(id)a0 groupingManager:(id)a1;
- (id)_tokenizedTextResultForDrawing:(id)a0 usingRecognizer:(id)a1 isRemoteRecognizer:(BOOL)a2 locale:(id)a3 strokeLimit:(long long)a4 recognitionError:(id *)a5;
- (id)clutterFilter;
- (id)initWithLocales:(id)a0 preferredLocales:(id)a1 strokeProvider:(id)a2 inputResult:(id)a3 recognitionQOSClass:(unsigned int)a4 recognitionEnvironment:(long long)a5;
- (id)initWithLocales:(id)a0 preferredLocales:(id)a1 strokeProvider:(id)a2 inputResult:(id)a3 recognitionQOSClass:(unsigned int)a4 recognitionEnvironment:(long long)a5 isHighResponsivenessTask:(BOOL)a6 strokeClassificationModel:(id)a7 strokeGroupingRequirement:(long long)a8 partialResultBlock:(id /* block */)a9;
- (id)initWithLocales:(id)a0 preferredLocales:(id)a1 strokeProvider:(id)a2 inputResult:(id)a3 recognitionQOSClass:(unsigned int)a4 recognitionEnvironment:(long long)a5 isHighResponsivenessTask:(BOOL)a6 strokeClassificationModel:(id)a7 strokeGroupingRequirement:(long long)a8 subjectStrokeIdentifiers:(id)a9 partialResultBlock:(id /* block */)a10;
- (id)newGroupingManager;
- (id)newStrokeClassifier;
- (id)recognitionResultsForGroupingResult:(id)a0 groupingManager:(id)a1;
- (id)textCorrectionResultsForGroupingResult:(id)a0 groupingManager:(id)a1;

@end
