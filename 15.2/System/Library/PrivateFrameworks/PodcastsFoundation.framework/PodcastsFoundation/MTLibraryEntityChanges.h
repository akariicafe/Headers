@class NSString, NSMutableSet;

@interface MTLibraryEntityChanges : NSObject <NSCopying>

@property (retain, nonatomic) NSMutableSet *insertedObjectIDs;
@property (retain, nonatomic) NSMutableSet *deletedObjectIDs;
@property (retain, nonatomic) NSMutableSet *updatedObjectIDs;
@property (readonly, nonatomic) NSString *entityName;

- (id)initWithEntityName:(id)a0;
- (BOOL)hasUpdates;
- (BOOL)hasChanges;
- (id)description;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)hasDeletes;
- (BOOL)hasInserts;
- (id)insertedAndUpdatedObjectIDs;
- (void)combineChanges:(id)a0;
- (void)add:(id)a0 changeType:(int)a1;

@end
