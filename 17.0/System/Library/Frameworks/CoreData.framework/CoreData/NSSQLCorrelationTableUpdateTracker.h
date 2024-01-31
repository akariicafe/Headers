@class NSSQLManyToMany;

@interface NSSQLCorrelationTableUpdateTracker : NSObject {
    NSSQLManyToMany *_relationship;
    id _inserts;
    id _deletes;
    id _masterUpdates;
    id _otherUpdates;
}

- (void)dealloc;
- (id)initForRelationship:(id)a0;

@end
