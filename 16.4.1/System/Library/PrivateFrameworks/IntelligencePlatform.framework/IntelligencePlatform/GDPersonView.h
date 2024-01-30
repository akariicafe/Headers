@class _PASSqliteDatabase, GDSQLGraphObjectRetriever;
@protocol GDViewAccessAssertion;

@interface GDPersonView : NSObject <GDPersonView> {
    id<GDViewAccessAssertion> _accessAssertion;
    GDSQLGraphObjectRetriever *_personRetriever;
    _PASSqliteDatabase *_db;
}

- (void).cxx_destruct;
- (void)enumeratePeopleWithBlock:(id /* block */)a0;
- (id)initWithAccessAssertion:(id)a0 database:(id)a1;

@end
