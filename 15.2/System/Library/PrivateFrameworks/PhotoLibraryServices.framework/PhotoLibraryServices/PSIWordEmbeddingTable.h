@class PSIStatement;

@interface PSIWordEmbeddingTable : PSITable {
    PSIStatement *_insertStatement;
    PSIStatement *_insertPrefixStatement;
    PSIStatement *_deleteStatement;
    PSIStatement *_deletePrefixStatement;
    PSIStatement *_checkStatement;
    PSIStatement *_selectMatchesStatement;
    PSIStatement *_selectStatement;
    void *_embeddingRef;
    struct __CFLocale { } *_locale;
    BOOL _localeIsGerman;
}

- (id)dumpWordEmbeddingTable;
- (void)clear;
- (id)wordEmbeddingsForToken:(id)a0;
- (BOOL)isInsertedWithWord:(id)a0;
- (void)insertWord:(id)a0 synonyms:(id)a1;
- (void)cacheWritableStatements;
- (void)removeWord:(id)a0;
- (id)initWithDelegate:(id)a0 searchable:(BOOL)a1 writable:(BOOL)a2 locale:(id)a3;
- (id)matchesForToken:(id)a0;
- (void).cxx_destruct;
- (void)cacheSearchableStatements;
- (void)finalizze;
- (id)wordEmbeddingVersion;

@end
