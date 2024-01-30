@class NSString, CKVIndexManager, CKVSettings, NSObject, CKVAuxiliaryFilesystemBase;
@protocol CKVDonatorProvider, OS_dispatch_queue, CKVSearcherProvider;

@interface CKVocabularySandbox : NSObject {
    NSObject<OS_dispatch_queue> *_queue;
    NSString *_sandboxBaseName;
    CKVAuxiliaryFilesystemBase *_base;
    BOOL _sandboxIsSaved;
}

@property (readonly, nonatomic) CKVIndexManager *indexManager;
@property (readonly, nonatomic) NSObject<CKVDonatorProvider> *donatorProvider;
@property (readonly, nonatomic) NSObject<CKVSearcherProvider> *searcherProvider;
@property (nonatomic) double synchronousDonatorTimeout;
@property (readonly, nonatomic) CKVSettings *settings;
@property (readonly, nonatomic) NSString *sandboxId;

+ (void)initialize;
+ (id)_sandboxWithRawSpeechProfile:(id)a0 rawSpeechProfileMetadata:(id)a1 error:(id *)a2;
+ (id)sandboxWithRawSpeechProfile:(id)a0 error:(id *)a1;
+ (id)sandboxWithRawSpeechProfile:(id)a0 rawSpeechProfileMetadata:(id)a1 error:(id *)a2;
+ (id)_sandboxBaseNameWithId:(id)a0;
+ (id)loadWithSandboxId:(id)a0 error:(id *)a1;

- (id)save;
- (id)initWithSettings:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (id)searcher;
- (void)dealloc;
- (void)reset;
- (BOOL)_donateVocabularyItemsOfClass:(Class)a0 originAppId:(id)a1 fromRawSpeechProfile:(id)a2 metadata:(id)a3 error:(id *)a4;
- (long long)synchronousDonatorWithOriginAppId:(id)a0 replaceAllVocabularyOfClass:(Class)a1 withVocabulary:(id)a2;
- (id)donatorWithOriginAppId:(id)a0;
- (id)initWithSandboxId:(id)a0 sandboxIsSaved:(BOOL)a1 settings:(id)a2;
- (BOOL)_saveSettings;
- (id)_loadSavedSettings;

@end
