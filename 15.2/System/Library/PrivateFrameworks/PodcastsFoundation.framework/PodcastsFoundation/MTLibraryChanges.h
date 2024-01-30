@class NSMutableDictionary;

@interface MTLibraryChanges : NSObject <NSCopying>

@property (retain, nonatomic) NSMutableDictionary *changesByEntityName;

- (BOOL)hasUpdates;
- (BOOL)hasChanges;
- (id)description;
- (void)removeAllChanges;
- (void).cxx_destruct;
- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)entityNames;
- (BOOL)hasDeletes;
- (void)addChangeWith:(id)a0 entityName:(id)a1 changeType:(int)a2;
- (BOOL)hasInserts;
- (void)combineChanges:(id)a0;
- (id)changesForEntityName:(id)a0;
- (BOOL)hasChangesForEntityNames:(id)a0;
- (BOOL)hasInsertsForEntityNames:(id)a0;
- (BOOL)hasDeletesForEntityNames:(id)a0;
- (BOOL)hasUpdatesForEntityNames:(id)a0;

@end
