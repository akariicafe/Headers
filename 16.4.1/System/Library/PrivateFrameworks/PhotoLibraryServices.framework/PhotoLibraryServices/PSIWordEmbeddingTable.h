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

- (void)cacheSearchableStatements;
- (id)wordEmbeddingsForToken:(id)a0;
- (BOOL)isInsertedWithWord:(id)a0;
- (void)removeWord:(id)a0;
- (void)insertWord:(id)a0 synonyms:(id)a1;
- (id)dumpWordEmbeddingTable;
- (id)wordEmbeddingVersion;
- (void)cacheWritableStatements;
- (void)clear;
- (void)finalizze;
- (void).cxx_destruct;
- (id)initWithDelegate:(id)a0 searchable:(BOOL)a1 writable:(BOOL)a2 locale:(id)a3;
- (id)matchesForToken:(id)a0;

@end
