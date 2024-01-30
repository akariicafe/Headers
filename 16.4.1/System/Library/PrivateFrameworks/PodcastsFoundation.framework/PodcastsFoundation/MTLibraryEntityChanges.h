@class NSString, NSMutableSet;

@interface MTLibraryEntityChanges : NSObject <NSCopying>

@property (retain, nonatomic) NSMutableSet *insertedObjectIDs;
@property (retain, nonatomic) NSMutableSet *deletedObjectIDs;
@property (retain, nonatomic) NSMutableSet *updatedObjectIDs;
@property (readonly, nonatomic) NSString *entityName;

- (id)initWithEntityName:(id)a0;
- (BOOL)hasChanges;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)hasUpdates;
- (id)description;
- (void).cxx_destruct;
- (BOOL)hasDeletes;
- (void)add:(id)a0 changeType:(int)a1;
- (void)combineChanges:(id)a0;
- (BOOL)hasInserts;
- (id)insertedAndUpdatedObjectIDs;

@end
