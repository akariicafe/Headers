@class NSString, CKVIndexManager;

@interface CKVDatabaseSearcherFactory : NSObject <CKVDatabaseSearcherProvider> {
    CKVIndexManager *_indexManager;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
