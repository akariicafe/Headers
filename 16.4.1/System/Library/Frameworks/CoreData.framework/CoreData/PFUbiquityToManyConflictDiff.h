@class NSString, NSMutableSet;

@interface PFUbiquityToManyConflictDiff : NSObject {
    NSMutableSet *_insertedObjectIDs;
    NSMutableSet *_deletedObjectIDs;
    NSString *_relationshipKey;
}

- (void)dealloc;
- (BOOL)isEqual:(id)a0;
- (id)init;
- (id)description;
- (id)initForRelationshipAtKey:(id)a0;

@end
