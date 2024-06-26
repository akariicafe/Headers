@class NSSQLModel, NSSQLCore;

@interface NSSQLiteAdapter : NSObject {
    NSSQLCore *_sqlCore;
    NSSQLModel *_model;
    struct __CFDictionary { } *_cachedDeleteTriggersByEntity;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
}

+ (id)generateSubselectForColumn:(id)a0 givenObjects:(id)a1;
+ (id)generateStatementForCheckingUniqueProperties:(id)a0 onObjects:(id)a1 usingSQLCore:(id)a2;
+ (id)generateStatementForCheckingMulticolumnConstraint:(id)a0 onObjects:(id)a1 usingSQLCore:(id)a2;

- (id)sqlCore;
- (void)_cacheTriggers:(id)a0 forEntity:(id)a1;
- (id)newGeneratorWithStatement:(id)a0;
- (id)newComplexPrimaryKeyUpdateStatementForEntity:(id)a0;
- (id)_generateExternalDataRefStatementsForEntities:(id)a0 inRequestContext:(id)a1;
- (id)newCountStatementWithFetchRequestContext:(id)a0;
- (id)newConstrainedValuesUpdateStatementWithRow:(id)a0;
- (id)generateRTreeIndexStatementsForIndex:(id)a0 onEntity:(id)a1;
- (id)createSQLStatementsForRTreeTriggersForLocationAttribute:(id)a0 withSQLEntity:(id)a1 existingRtreeTables:(id)a2;
- (id)generateDeleteStatementsForRequest:(id)a0 error:(id *)a1;
- (id)newCreateIndexStatementsForEntity:(id)a0 defaultIndicesOnly:(BOOL)a1;
- (id)newCreateIndexStatementForColumnWithName:(id)a0 inTableWithName:(id)a1;
- (id)newSimplePrimaryKeyUpdateStatementForEntity:(id)a0;
- (id)newSelectStatementWithFetchRequestContext:(id)a0 ignoreInheritance:(BOOL)a1;
- (id)newStatementWithEntity:(id)a0;
- (id)newCreateTriggersForEntity:(id)a0 existingRtreeTables:(id)a1;
- (id)newCorrelationReorderStatementForRelationship:(id)a0;
- (id)generateBatchDeleteUpdateHistoryStatementEntity:(id)a0 andRelationship:(id)a1 useInverse:(BOOL)a2;
- (id)generateDeleteHistoryTriggerForEntity:(id)a0 error:(id *)a1;
- (void)dealloc;
- (id)newInsertStatementWithRow:(id)a0;
- (id)typeStringForSQLType:(unsigned char)a0;
- (id)newPrimaryKeyInitializeStatementForEntity:(id)a0 withInitialMaxPK:(long long)a1;
- (id)newCorrelationMasterReorderStatementForRelationship:(id)a0;
- (id)newCreateIndexStatementForColumn:(id)a0;
- (void)_useModel:(id)a0;
- (id)newCreateIndexStatementForColumns:(id)a0 name:(id)a1;
- (id)newCreateTempTableStatementForEntity:(id)a0 withAttributesToConstrain:(id)a1;
- (id)generateSQLStatmentForSourcesAndOrderKeysForDestination:(id)a0 inManyToMany:(id)a1;
- (id)newCreateTableStatementForEntity:(id)a0;
- (id)generateSQLStatmentForSourcesAndOrderKeysForDestination:(id)a0 inToMany:(id)a1;
- (id)newCreateTableStatementForManyToMany:(id)a0;
- (id)newRenameTableStatementFrom:(id)a0 to:(id)a1;
- (id)newStatementWithSQLString:(id)a0;
- (id)generateBatchDeleteUpdateHistoryStatementEntity:(id)a0 andRelationship:(id)a1;
- (id)newDropTableStatementOrFailForTableNamed:(id)a0;
- (id)newUpdateStatementWithRow:(id)a0 originalRow:(id)a1 withMask:(struct __CFBitVector { } *)a2;
- (id)newDropIndexStatementsForEntity:(id)a0 defaultIndicesOnly:(BOOL)a1;
- (id)newCorrelationMasterReorderStatementPart2ForRelationship:(id)a0;
- (id)createSQLStatementsForTriggerAttribute:(id)a0 withSQLEntity:(id)a1;
- (BOOL)generateBatchDeleteUpdateHistoryTriggerForEntity:(id)a0 andRelationship:(id)a1 batchHistory:(struct __CFDictionary { } *)a2 error:(id *)a3;
- (id)generateDropBinaryIndexStatementsForIndex:(id)a0 onEntity:(id)a1;
- (id)_cachedTriggersForEntity:(id)a0;
- (id)createCleanupSQLForRelationship:(id)a0 existing:(struct __CFDictionary { } *)a1 correlationTableTriggers:(struct __CFDictionary { } *)a2 batchHistory:(struct __CFDictionary { } *)a3 error:(id *)a4;
- (id)newCreatePrimaryKeyTableStatement;
- (BOOL)generateTriggerForEntity:(id)a0 alreadyCreated:(struct __CFDictionary { } *)a1 correlations:(struct __CFDictionary { } *)a2 batchHistory:(struct __CFDictionary { } *)a3 fragments:(id)a4 error:(id *)a5;
- (id)newDropTableStatementForTableNamed:(id)a0;
- (id)newCreateIndexStatementsForEntity:(id)a0;
- (id)newDropIndexStatementsForEntity:(id)a0;
- (id)newDeleteStatementWithRow:(id)a0;
- (id)newCorrelationInsertStatementForRelationship:(id)a0;
- (id)newStatementWithoutEntity;
- (id)newCopyAndInsertStatementForManyToMany:(id)a0 toManyToMany:(id)a1 intermediateTableName:(id)a2 invertColumns:(BOOL)a3;
- (id)generateDropRTreeIndexStatementsForIndex:(id)a0 onEntity:(id)a1;
- (id)initWithSQLCore:(id)a0;
- (unsigned char)sqlTypeForExpressionConstantValue:(id)a0;
- (id)generateBinaryIndexStatementsForIndex:(id)a0 onEntity:(id)a1;
- (id)generateTriggerStatementsForEntity:(id)a0 usingRelationshipCleanupSQL:(id)a1 error:(id *)a2;
- (id)newCreateIndexStatementForCorrelationTable:(id)a0;
- (id)sqliteVersion;
- (id)newCreateIndexStatementForOrderedRelationship:(id)a0;
- (id)newDropIndexStatementForCorrelationTable:(id)a0;
- (id)newDropIndexStatementForColumn:(id)a0;
- (void)_generateFragmentsForEntity:(id)a0 inArray:(id)a1;
- (id)newCorrelationDeleteStatementForRelationship:(id)a0;
- (id)typeStringForColumn:(id)a0;
- (id)newDropIndexStatementForColumnWithName:(id)a0 inTableWithName:(id)a1;
- (BOOL)generateCorrelationTableTriggerStatementsForRelationship:(id)a0 existing:(struct __CFDictionary { } *)a1 correlationTableTriggers:(struct __CFDictionary { } *)a2 error:(id *)a3;
- (id)newSelectStatementWithFetchRequest:(id)a0 ignoreInheritance:(BOOL)a1;
- (id)_statementForFetchRequestContext:(id)a0 ignoreInheritance:(BOOL)a1 countOnly:(BOOL)a2 nestingLevel:(unsigned int)a3;
- (id)newRenameTableStatementFromManyToMany:(id)a0 toManyToMany:(id)a1 orToRandomSpot:(id)a2;

@end
