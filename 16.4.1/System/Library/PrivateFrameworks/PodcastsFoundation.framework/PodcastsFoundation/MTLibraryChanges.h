@class NSString, NSMutableDictionary;

@interface MTLibraryChanges : NSObject <NSCopying>

@property (retain, nonatomic) NSMutableDictionary *changesByEntityName;
@property (readonly, nonatomic) NSString *contextName;

- (void)removeAllChanges;
- (BOOL)hasChanges;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)hasUpdates;
- (id)init;
- (id)description;
- (id)entityNames;
- (void).cxx_destruct;
- (BOOL)hasDeletes;
- (void)combineChanges:(id)a0;
- (void)addChangeWith:(id)a0 entityName:(id)a1 changeType:(int)a2;
- (id)changesForEntityName:(id)a0;
- (BOOL)hasChangesForEntityNames:(id)a0;
- (BOOL)hasDeletesForEntityNames:(id)a0;
- (BOOL)hasInserts;
- (BOOL)hasInsertsForEntityNames:(id)a0;
- (BOOL)hasUpdatesForEntityNames:(id)a0;
- (id)initWithContextName:(id)a0;

@end
