@class NSSet;

@interface CNContactStoreFilter : CNContactFilter

@property (retain, nonatomic) NSSet *groupIdentifiers;
@property (retain, nonatomic) NSSet *containerIdentifiers;
@property (readonly, nonatomic) BOOL showsEverything;
@property (nonatomic) BOOL isServerFilter;

+ (id)contactStoreFilterFromPreferencesWithContactStore:(id)a0;
+ (id)excludedContainerIdentifiersDictionaryKey;
+ (id)excludedGroupIdentifiersDictionaryKey;
+ (BOOL)getContainerIdentifiers:(id *)a0 groupIdentifiers:(id *)a1 serverFilter:(BOOL *)a2 fromLegacyDictionary:(id)a3 contactStore:(id)a4;
+ (BOOL)getContainerIdentifiers:(id *)a0 groupIdentifiers:(id *)a1 serverFilter:(BOOL *)a2 fromPreSundanceDictionary:(id)a3 contactStore:(id)a4;
+ (BOOL)getContainerIdentifiers:(id *)a0 groupIdentifiers:(id *)a1 serverFilter:(BOOL *)a2 fromSundanceToOkemoAndAddressBookUIDictionary:(id)a3 contactStore:(id)a4;
+ (id)isServerFilterDictionaryKey;

- (void)addAddressBookUIKeysToDictionaryRepresentation:(id)a0 withAllContainers:(id)a1 excludedContainers:(id)a2 excludedGroups:(id)a3;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithDictionaryRepresentation:(id)a0 contactStore:(id)a1;
- (id)dictionaryRepresentation;
- (void)saveToPreferencesWithContactStore:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)initWithDictionaryRepresentation:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (id)dictionaryRepresentationWithContactStore:(id)a0;
- (id)predicate;
- (BOOL)supportsSections;

@end
