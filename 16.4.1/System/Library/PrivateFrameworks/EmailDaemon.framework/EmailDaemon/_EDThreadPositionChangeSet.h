@class NSMutableDictionary, NSMutableSet;

@interface _EDThreadPositionChangeSet : NSObject <NSCopying>

@property (retain, nonatomic) NSMutableDictionary *objectIDsToAddByBeforeObjectID;
@property (retain, nonatomic) NSMutableDictionary *objectIDsToMoveByBeforeObjectID;
@property (retain, nonatomic) NSMutableSet *objectIDsToDelete;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init;
- (id)description;
- (void).cxx_destruct;
- (BOOL)_isMovingObjectID:(id)a0;
- (BOOL)addObjectIDToAdd:(id)a0 before:(id)a1;
- (void)addObjectIDToDelete:(id)a0;
- (BOOL)addObjectIDToMove:(id)a0 before:(id)a1;
- (BOOL)isAddingObjectID:(id)a0;
- (BOOL)isDeletingObjectID:(id)a0;

@end
