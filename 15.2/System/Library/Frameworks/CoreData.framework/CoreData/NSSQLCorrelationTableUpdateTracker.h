@class NSSQLManyToMany;

@interface NSSQLCorrelationTableUpdateTracker : NSObject {
    NSSQLManyToMany *_relationship;
    id _inserts;
    id _deletes;
    id _masterUpdates;
    id _otherUpdates;
}

- (id)initForRelationship:(id)a0;
- (void)dealloc;

@end
