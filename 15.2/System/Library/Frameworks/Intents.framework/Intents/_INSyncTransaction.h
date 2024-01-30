@class _INVocabularyGenerationDocument, NSString, _INVocabularyStoreManager;

@interface _INSyncTransaction : NSObject {
    NSString *_pathToLatestVocabularyDocument;
    NSString *_pathToStagedVocabularyDocument;
    NSString *_pathToSentVocabularyDocument;
    NSString *_syncSlot;
    _INVocabularyStoreManager *_storeManager;
    BOOL _deleteExistingVocabulary;
    BOOL _vocabularyUpdatesEnabled;
}

@property (readonly, nonatomic) _INVocabularyGenerationDocument *latestVocabularyDocument;
@property (readonly, nonatomic) _INVocabularyGenerationDocument *sentVocabularyDocument;
@property (nonatomic) BOOL fullResetRequired;

+ (id)beginTransactionForBundleID:(id)a0 bundlePath:(id)a1 syncSlot:(id)a2;

- (id)calculateDiff;
- (void).cxx_destruct;
- (void)_saveAndCleanup;
- (void)endTransactionWithFinalAnchor:(id)a0;
- (id)_initWithVocabularyManager:(id)a0 syncSlot:(id)a1 deleteExistingVocabulary:(BOOL)a2;
- (id)_emptySentDocument;
- (void)_deleteInvalidSavedData;
- (BOOL)_isMissingLatestFileError:(id)a0;
- (void)_beginTransaction;

@end
