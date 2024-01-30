@class NSURL, CKVFilesystemBase, NSLocale;

@interface CKVSkitWriter : NSObject <CKVSkitWriteAccess> {
    NSURL *_directoryURL;
    CKVFilesystemBase *_base;
    struct unique_ptr<skitbridge::Indexer, std::default_delete<skitbridge::Indexer>> { struct __compressed_pair<skitbridge::Indexer *, std::default_delete<skitbridge::Indexer>> { struct Indexer *__value_; } __ptr_; } _indexer;
    NSLocale *_skitLocale;
    NSLocale *_transactionLocale;
}

@property (readonly, nonatomic) unsigned long long flushThreshold;

+ (void)initialize;

- (BOOL)clearWithError:(id *)a0;
- (BOOL)commitTransactionWithError:(id *)a0;
- (BOOL)rollbackTransactionWithError:(id *)a0;
- (void).cxx_destruct;
- (id)init;
- (BOOL)beginTransactionWithError:(id *)a0;
- (id).cxx_construct;
- (BOOL)cleanupWithError:(id *)a0;
- (BOOL)setTransactionLocale:(id)a0 assetPath:(id)a1 error:(id *)a2;
- (BOOL)addVocabularyItemWithBuffer:(id)a0 originAppId:(id)a1 recordId:(id)a2 error:(id *)a3;
- (BOOL)removeVocabularyItemWithRecordId:(id)a0 error:(id *)a1;
- (BOOL)shouldMerge:(BOOL *)a0 error:(id *)a1;
- (id)initWithSkitDirectoryURL:(id)a0 filesystemBase:(id)a1 flushThreshold:(unsigned long long)a2;
- (BOOL)_loadLocaleWithError:(id *)a0;
- (BOOL)_saveLocaleWithError:(id *)a0;
- (BOOL)_setTransactionLocaleWithAssetPath:(id)a0 error:(id *)a1;

@end
