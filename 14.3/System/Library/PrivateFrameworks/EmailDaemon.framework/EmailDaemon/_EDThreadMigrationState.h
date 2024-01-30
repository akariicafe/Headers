@class NSCountedSet;

@interface _EDThreadMigrationState : NSObject {
    NSCountedSet *_objectIDsToMigrate;
    NSCountedSet *_recentlyMigratedObjectIDs;
    NSCountedSet *_recentlyDeletedObjectIDs;
}

@property (nonatomic) unsigned long long state;
@property (readonly, nonatomic) unsigned long long generation;
@property (readonly, nonatomic) unsigned long long unmigratedCount;
@property (readonly, nonatomic) BOOL isEmpty;
@property (readonly, nonatomic) BOOL isFullyMigrated;

- (void)cancel;
- (void)fail;
- (id)init;
- (id)nextBatch;
- (void).cxx_destruct;
- (void)reset;
- (BOOL)verifyIsMigratingGeneration:(unsigned long long)a0 andIsInState:(unsigned long long)a1 logIdentifier:(id)a2 logAction:(id)a3 logCount:(unsigned long long)a4;
- (BOOL)verifyIsMigratingGeneration:(unsigned long long)a0 andIsInState:(unsigned long long)a1 orState:(unsigned long long)a2 logIdentifier:(id)a3 logAction:(id)a4 logCount:(unsigned long long)a5;
- (void)removeDeletedObjectIDs:(id)a0;
- (void)removeMigratedObjectIDs:(id)a0;
- (void)addObjectIDs:(id)a0;
- (BOOL)isRecentlyMigrated:(id)a0;
- (void)removeObjectIDs:(id)a0;
- (void)addDeletedObjectIDs:(id)a0;
- (void)_removeAllObjectIDs;
- (BOOL)_verifyIsMigratingGeneration:(unsigned long long)a0 stateVerifier:(id /* block */)a1 logIdentifier:(id)a2 logAction:(id)a3 logCount:(unsigned long long)a4;

@end
