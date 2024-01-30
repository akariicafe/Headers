@class NSString, PKTextInputRecognitionManager, PKTextInputLanguageSpec, PKTextInputStrokeProvider, PKTextInputDebugArchivedLogEntry;

@interface PKTextInputDebugLogEntryRerun : NSObject <PKTextInputRecognitionManagerDataSource> {
    PKTextInputRecognitionManager *_recognitionManager;
    id /* block */ _completionBlock;
    PKTextInputLanguageSpec *_languageSpec;
    PKTextInputStrokeProvider *_strokeProvider;
}

@property (readonly, nonatomic) PKTextInputDebugArchivedLogEntry *logEntry;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)runWithCompletion:(id /* block */)a0;
- (void).cxx_destruct;
- (void)recognitionManager:(id)a0 recognitionDidFinishWithQueryItems:(id)a1 duration:(double)a2;
- (void)_finishRerunWithQueryItems:(id)a0 error:(id)a1;
- (id)initWithLogEntry:(id)a0;
- (void)recognitionManager:(id)a0 fetchContentInfoForTextInputTarget:(id)a1 strokeIdentifiers:(id)a2 completion:(id /* block */)a3;
- (id)recognitionManager:(id)a0 textInputTargetForItemStableIdentifier:(id)a1 strokeIdentifiers:(id)a2 simultaneousItemStableIdentifiers:(id)a3;
- (id)recognitionManagerStrokeProvider:(id)a0;
- (id)recognitionManagerTextInputTargets:(id)a0;

@end
