@class NSString, NSMutableSet;

@interface PFUbiquityToManyConflictDiff : NSObject {
    NSMutableSet *_insertedObjectIDs;
    NSMutableSet *_deletedObjectIDs;
    NSString *_relationshipKey;
}

- (id)initForRelationshipAtKey:(id)a0;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (id)init;
- (void)dealloc;

@end
