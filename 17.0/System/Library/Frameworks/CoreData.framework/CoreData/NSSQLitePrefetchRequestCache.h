@class NSSQLCore;

@interface NSSQLitePrefetchRequestCache : NSObject {
    NSSQLCore *_sqlCore;
    unsigned long long _length;
    id *_prefetchRequestsByEntity;
}

- (id)manyToOnePrefetchRequestForRelationshipNamed:(id)a0 onEntity:(id)a1;
- (id)manyToManyPrefetchRequestsForRelationshipNamed:(id)a0 onEntity:(id)a1;
- (id)inverseIsToOnePrefetchRequestForRelationshipNamed:(id)a0 onEntity:(id)a1;
- (void)dealloc;
- (void).cxx_destruct;
- (id)initWithSQLCore:(id)a0;

@end
