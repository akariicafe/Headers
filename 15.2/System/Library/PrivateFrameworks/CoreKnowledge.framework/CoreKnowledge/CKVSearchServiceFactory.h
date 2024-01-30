@class NSString, NSObject;
@protocol CKVSpanMatcherProvider, CKVDatabaseSearcherProvider;

@interface CKVSearchServiceFactory : CKVServiceFactory <CKVSearchServiceProvider> {
    NSObject<CKVDatabaseSearcherProvider> *_databaseSearcherProvider;
    NSObject<CKVSpanMatcherProvider> *_spanMatcherProvider;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)initWithQueue:(id)a0 indexManager:(id)a1 settings:(id)a2;
- (id)searchService;

@end
