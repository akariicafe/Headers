@class CKContainer, CKDatabase;

@interface WFCloudKitWebServiceRequest : NSObject

@property (readonly, nonatomic) CKContainer *container;
@property (readonly, nonatomic) CKDatabase *database;

- (id)databaseName;
- (void).cxx_destruct;
- (id)initWithContainer:(id)a0 database:(id)a1;
- (id)fetchRecordsWithItemType:(Class)a0 filter:(id)a1 cacheKey:(id)a2 completionHandler:(id /* block */)a3;
- (id)fetchProxiedRecordWithIdentifier:(id)a0 possibleItemTypes:(id)a1 completionHandler:(id /* block */)a2;
- (id)queryWithItemType:(Class)a0 filter:(id)a1;
- (id)postJSON:(id)a0 toURL:(id)a1 cacheKey:(id)a2 completionHandler:(id /* block */)a3;
- (id)getJSONFromURL:(id)a0 completionHandler:(id /* block */)a1;
- (id)getJSONFromURL:(id)a0 headers:(id)a1 completionHandler:(id /* block */)a2;
- (unsigned long long)webServiceForRequestType:(unsigned long long)a0;
- (id)pathComponentsForType:(unsigned long long)a0 parameters:(id)a1;
- (id)cloudKitEnvironment;
- (id)cloudKitAPIToken;
- (id)urlForType:(unsigned long long)a0 parameters:(id)a1;
- (id)recordsFromQueryResponse:(id)a0;
- (id)extractRecordDictFromRecordIfNecessary:(id)a0 recordType:(id)a1;
- (void)parseRecord:(id)a0 intoItem:(id)a1 allKeys:(BOOL)a2;

@end
