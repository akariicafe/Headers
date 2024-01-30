@class CNContactStore, NSString;

@interface CNUICoreContactStoreProductionFacade : NSObject <CNUICoreContactStoreFacade, CNUICoreParentContainerProvider>

@property (readonly, nonatomic) CNContactStore *contactStore;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void).cxx_destruct;
- (BOOL)executeSaveRequest:(id)a0 error:(id *)a1;
- (id)_crossPlatformUnifiedMeContactWithKeysToFetch:(id)a0 error:(id *)a1;
- (id)containerForContact:(id)a0;
- (BOOL)enumerateContactsWithFetchRequest:(id)a0 error:(id *)a1 usingBlock:(id /* block */)a2;
- (id)initWithContactStore:(id)a0;

@end
