@class NSSet;

@interface CNContactStoreFilter : CNContactFilter

@property (retain, nonatomic) NSSet *groupIdentifiers;
@property (retain, nonatomic) NSSet *containerIdentifiers;
@property (readonly, nonatomic) BOOL showsEverything;
@property (nonatomic) BOOL isServerFilter;

+ (id)contactStoreFilterFromPreferencesWithContactStore:(id)a0;
+ (BOOL)getContainerIdentifiers:(id *)a0 groupIdentifiers:(id *)a1 serverFilter:(BOOL *)a2 fromSundanceToOkemoAndAddressBookUIDictionary:(id)a3 contactStore:(id)a4;
+ (BOOL)getContainerIdentifiers:(id *)a0 groupIdentifiers:(id *)a1 serverFilter:(BOOL *)a2 fromLegacyDictionary:(id)a3 contactStore:(id)a4;
+ (BOOL)getContainerIdentifiers:(id *)a0 groupIdentifiers:(id *)a1 serverFilter:(BOOL *)a2 fromPreSundanceDictionary:(id)a3 contactStore:(id)a4;

- (id)initWithDictionaryRepresentation:(id)a0;
- (id)dictionaryRepresentationWithContactStore:(id)a0;
- (id)description;
- (id)predicate;
- (void)addAddressBookUIKeysToDictionaryRepresentation:(id)a0 withAllContainers:(id)a1 excludedContainers:(id)a2 excludedGroups:(id)a3;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithDictionaryRepresentation:(id)a0 contactStore:(id)a1;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)saveToPreferencesWithContactStore:(id)a0;
- (BOOL)supportsSections;
- (id)dictionaryRepresentation;

@end
