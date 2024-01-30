@class NSArray, CNContact, NSString, NSError;

@interface CNUICoreContactStoreTestFacade : NSObject <CNUICoreContactStoreFacade>

@property (retain, nonatomic) CNContact *meContact;
@property (retain, nonatomic) NSArray *contacts;
@property (retain, nonatomic) NSError *saveError;
@property (retain, nonatomic) NSError *fetchError;
@property (retain, nonatomic) NSArray *executedSaveRequests;
@property (retain, nonatomic) NSArray *executedFetchRequests;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)contactsBySimulatingExecutionOfSaveRequest:(id)a0 onContacts:(id)a1;

- (BOOL)executeSaveRequest:(id)a0 error:(id *)a1;
- (id)init;
- (id)_crossPlatformUnifiedMeContactWithKeysToFetch:(id)a0 error:(id *)a1;
- (void).cxx_destruct;
- (BOOL)enumerateContactsWithFetchRequest:(id)a0 error:(id *)a1 usingBlock:(id /* block */)a2;
- (id)initWithContacts:(id)a0;
- (void)commonInitWithMeContact:(id)a0 contacts:(id)a1 saveError:(id)a2 fetchError:(id)a3;
- (id)initWithMeContact:(id)a0 contacts:(id)a1;
- (id)initWithSaveError:(id)a0 fetchError:(id)a1;

@end
