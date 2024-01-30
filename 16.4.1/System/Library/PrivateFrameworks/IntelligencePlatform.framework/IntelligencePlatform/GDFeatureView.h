@class _PASSqliteDatabase, GDSQLFeatureRetriever;
@protocol GDViewAccessAssertion;

@interface GDFeatureView : NSObject <GDFeatureView> {
    id<GDViewAccessAssertion> _accessAssertion;
    _PASSqliteDatabase *_db;
    GDSQLFeatureRetriever *_featureRetriever;
}

- (void).cxx_destruct;
- (id)expectedFeatureKeysWithError:(id *)a0;
- (id)featureForKey:(id)a0 error:(id *)a1;
- (id)featureKeysWithError:(id *)a0;
- (id)initWithAccessAssertion:(id)a0 database:(id)a1;

@end
