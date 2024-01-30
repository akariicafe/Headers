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

- (id)initWithEntity:(id)a0;
- (void)dealloc;

@end
