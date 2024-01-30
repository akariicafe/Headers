@class NSString, NSMutableDictionary;

@interface _LAKeyStoreBackendFake : NSObject <LAKeyStoreBackend> {
    NSMutableDictionary *_keys;
    NSMutableDictionary *_genps;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void).cxx_destruct;
- (BOOL)createGenericPasswordWithQuery:(id)a0 error:(id *)a1;
- (BOOL)createKeyWithQuery:(id)a0 error:(id *)a1;
- (id)fetchItemWithQuery:(id)a0 error:(id *)a1;
- (id)fetchItemsWithQuery:(id)a0 error:(id *)a1;
- (BOOL)removeItemsWithQuery:(id)a0 error:(id *)a1;

@end
