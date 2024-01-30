@class NSString, CKVSpanMatcherFactory, NSObject;
@protocol CKVDatabaseSearcherProvider;

@interface CKVSearchServiceFactory : NSObject <CKVSearchServiceProvider> {
    NSObject<CKVDatabaseSearcherProvider> *_databaseSearcherProvider;
    CKVSpanMatcherFactory *_spanMatcherProvider;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)initWithIndexManager:(id)a0 settings:(id)a1;
- (id)searchServiceWithUserId:(id)a0;

@end
