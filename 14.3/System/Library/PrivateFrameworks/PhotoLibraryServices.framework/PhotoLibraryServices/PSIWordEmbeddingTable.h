@class PSIStatement;

@interface PSIWordEmbeddingTable : PSITable {
    PSIStatement *_insertStatement;
    PSIStatement *_insertPrefixStatement;
    PSIStatement *_deleteStatement;
    PSIStatement *_deletePrefixStatement;
    PSIStatement *_checkStatement;
    PSIStatement *_selectMatchesStatement;
    PSIStatement *_selectStatement;
    struct __CFLocale { } *_locale;
    BOOL _localeIsGerman;
}

- (void)clear;
- (void)cacheSearchableStatements;
- (void).cxx_destruct;
- (BOOL)isInsertedWithWord:(id)a0;
- (id)wordEmbeddingsForToken:(id)a0;
- (void)removeWord:(id)a0;
- (id)wordEmbeddingVersion;
- (id)initWithDelegate:(id)a0 searchable:(BOOL)a1 writable:(BOOL)a2 locale:(id)a3;
- (id)matchesForToken:(id)a0;
- (void)finalizze;
- (void)insertWord:(id)a0 synonyms:(id)a1;
- (id)dumpWordEmbeddingTable;
- (void)cacheWritableStatements;

@end
