@class CNContactStore, NSString;

@interface CHPhoneBookIOSManager : NSObject <CHPhoneBookManagerProtocol>

@property (retain, nonatomic) CNContactStore *fContactsStore;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)get;

- (id)getLocalizedCallerIdLabelForContact:(id)a0 forCallerId:(id)a1 withCallerIdIsEmail:(BOOL)a2;
- (id)init;
- (void).cxx_destruct;
- (id)fetchFullCNContactForContactIdentifier:(id)a0 isEmail:(BOOL)a1;
- (id)fetchCNContactsMatchingPredicate:(id)a0 keysToKetch:(id)a1 error:(id *)a2;
- (id)fetchContactIdentifiersForHandles:(id)a0 error:(id *)a1;
- (void)fetchAndCacheContactIdentifiersForCalls:(id)a0;
- (id)getPersonsNameForContact:(id)a0;
- (id)fetchCNContact:(id)a0 countryCode:(id)a1 isEmail:(BOOL)a2;
- (id)getRecordId:(id)a0 countryCode:(id)a1 isEmail:(BOOL)a2;
- (BOOL)isABContactASuggestion;

@end
