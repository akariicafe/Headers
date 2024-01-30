@class NSSQLEntity, NSSQLiteStatement, NSMutableDictionary;

@interface NSSQLiteStatementCache : NSObject {
    NSSQLEntity *_entity;
    NSSQLiteStatement *_insertStatementCache;
    NSSQLiteStatement *_batchInsertStatementCache;
    NSSQLiteStatement *_deletionStatementCache;
    NSSQLiteStatement *_faultingStatementCache;
    NSMutableDictionary *_toManyRelationshipStatementCache;
    struct __CFDictionary { } *_correlationInsertCache;
    struct __CFDictionary { } *_correlationDeleteCache;
    struct __CFDictionary { } *_correlationMasterReorderCache;
    struct __CFDictionary { } *_correlationMasterReorderCachePart2;
    struct __CFDictionary { } *_correlationReorderCache;
}

- (id)correlationDeleteStatementForRelationship:(id)a0;
- (void)cacheCorrelationReorderStatement:(id)a0 forRelationship:(id)a1;
- (void)cacheCorrelationMasterReorderStatementPart2:(id)a0 forRelationship:(id)a1;
- (void)cacheFaultingStatement:(id)a0;
- (id)insertStatement;
- (void)cacheBatchInsertStatement:(id)a0;
- (void)dealloc;
- (void)clearCachedStatements;
- (void)cacheInsertStatement:(id)a0;
- (id)deletionStatement;
- (void)cacheCorrelationMasterReorderStatement:(id)a0 forRelationship:(id)a1;
- (void)cacheDeletionStatement:(id)a0;
- (void)insertOrReplaceStatement:(id)a0 forRelationship:(id)a1 inDictionary:(struct __CFDictionary { } *)a2;
- (void)_clearSaveGeneratedCachedStatements;
- (id)preparedFaultingCachesForRelationship:(id)a0;
- (id)correlationMasterReorderStatementPart2ForRelationship:(id)a0;
- (id)batchInsertStatement;
- (id)initWithEntity:(id)a0;
- (id)correlationReorderStatementForRelationship:(id)a0;
- (id)faultingStatement;
- (void)cacheCorrelationInsertStatement:(id)a0 forRelationship:(id)a1;
- (id)correlationMasterReorderStatementForRelationship:(id)a0;
- (id)correlationInsertStatementForRelationship:(id)a0;
- (struct __CFDictionary { } *)createCorrelationCacheDictionary;
- (void)cacheCorrelationDeleteStatement:(id)a0 forRelationship:(id)a1;
- (void)cacheFaultingStatement:(id)a0 andFetchRequest:(id)a1 forRelationship:(id)a2;

@end
