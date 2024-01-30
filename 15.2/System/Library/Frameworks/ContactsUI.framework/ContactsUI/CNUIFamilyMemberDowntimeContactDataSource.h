@class CNContactStore, NSArray, CNContact, NSString, NSMutableArray;

@interface CNUIFamilyMemberDowntimeContactDataSource : NSObject

@property (retain, nonatomic) CNContactStore *store;
@property (nonatomic) BOOL meContactNeedsUpdate;
@property (retain, nonatomic) CNContact *meContact;
@property (retain, nonatomic) NSArray *familyMembers;
@property (retain, nonatomic) NSArray *filteredSections;
@property (retain, nonatomic) NSArray *sections;
@property (retain, nonatomic) NSMutableArray *selectedContactItems;
@property (readonly, nonatomic) NSArray *requiredKeys;
@property (copy, nonatomic) NSString *filterString;
@property (nonatomic) BOOL isShowingFamilyMemberContacts;

+ (BOOL)isErrorPossiblyRelatedToExtraStores:(id)a0;

- (long long)sortOrder;
- (long long)numberOfSections;
- (id)preferredForNameMeContactWithKeysToFetch:(id)a0;
- (id)completeContactFromContact:(id)a0 fromMainStoreOnly:(BOOL)a1 keysToFetch:(id)a2;
- (id)preferredForNameMeContactIdentifier;
- (id)selectedContacts;
- (long long)numberOfRowsInSection:(long long)a0;
- (void).cxx_destruct;
- (id)initWithStore:(id)a0 familyMembers:(id)a1 requiredKeys:(id)a2;
- (id)contactItemForIndexPath:(id)a0;
- (void)setContactItemSelected:(BOOL)a0 forIndexPath:(id)a1;
- (void)filterSectionsForString:(id)a0;
- (id)labelForFamilyMember:(id)a0;
- (void)_loadAllContactsIfNeeded;
- (void)postProcessForFamilyMembersWithContacts:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)titleForSection:(long long)a0;

@end
