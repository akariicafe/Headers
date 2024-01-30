@class _PASSqliteDatabase, GDSQLGraphObjectRetriever;
@protocol GDViewAccessAssertion;

@interface GDVisualIdentifierView : NSObject <GDVisualIdentifierView> {
    id<GDViewAccessAssertion> _accessAssertion;
    _PASSqliteDatabase *_db;
    GDSQLGraphObjectRetriever *_personRetriever;
    GDSQLGraphObjectRetriever *_locationRetriever;
}

- (id)personForIdentifier:(id)a0;
- (void).cxx_destruct;
- (void)enumeratePeopleMatchingName:(id)a0 block:(id /* block */)a1;
- (void)enumeratePeopleWithBlock:(id /* block */)a0;
- (id)initWithAccessAssertion:(id)a0 database:(id)a1;
- (void)linkLocationsForPerson:(id)a0;

@end
