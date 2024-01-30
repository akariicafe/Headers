@interface _WKWebsiteDataStore : NSObject {
    struct RetainPtr<WKWebsiteDataStore> { void *m_ptr; } _dataStore;
}

@property (readonly, getter=isNonPersistent) BOOL nonPersistent;

+ (id)nonPersistentDataStore;
+ (id)defaultDataStore;

- (id)initWithDataStore:(id)a0;
- (void)removeDataOfTypes:(unsigned long long)a0 forDataRecords:(id)a1 completionHandler:(id /* block */)a2;
- (void)fetchDataRecordsOfTypes:(unsigned long long)a0 completionHandler:(id /* block */)a1;
- (void).cxx_destruct;
- (id).cxx_construct;
- (void)removeDataOfTypes:(unsigned long long)a0 modifiedSince:(id)a1 completionHandler:(id /* block */)a2;

@end
