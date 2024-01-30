@class NSString, NSMutableSet;

@interface PFUbiquityToManyConflictDiff : NSObject

@property (readonly, nonatomic) NSMutableSet *insertedObjectIDs;
@property (readonly, nonatomic) NSMutableSet *deletedObjectIDs;
@property (readonly, nonatomic) NSString *relationshipKey;

- (id)init;
- (void)dealloc;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (id)initForRelationshipAtKey:(id)a0;
- (void)diffWithLogSnapshot:(id)a0 andPreviousSnapshot:(id)a1;

@end
