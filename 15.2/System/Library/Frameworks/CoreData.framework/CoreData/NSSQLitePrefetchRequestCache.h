@class NSSQLCore;

@interface NSSQLitePrefetchRequestCache : NSObject {
    NSSQLCore *_sqlCore;
    unsigned long long _length;
    id *_prefetchRequestsByEntity;
}

- (id)manyToManyPrefetchRequestsForRelationshipNamed:(id)a0 onEntity:(id)a1;
- (id)manyToOnePrefetchRequestForRelationshipNamed:(id)a0 onEntity:(id)a1;
- (id)inverseIsToOnePrefetchRequestForRelationshipNamed:(id)a0 onEntity:(id)a1;
- (id)initWithSQLCore:(id)a0;
- (void).cxx_destruct;
- (void)dealloc;

@end
