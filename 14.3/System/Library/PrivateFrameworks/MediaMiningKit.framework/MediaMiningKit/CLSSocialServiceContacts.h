@class NSString, NSURL, NSMutableDictionary, CNContact, CLSContactCache, CNContactStore, NSMutableSet, CLSPersonIdentity, NSMutableArray;
@protocol CLSSocialServiceContactsDelegate, SGSuggestionsServiceContactsProtocol;

@interface CLSSocialServiceContacts : CLSSocialService <PVVisionIntegrating> {
    CNContactStore *_contactStore;
    CNContact *_meContact;
    CLSPersonIdentity *_mePerson;
    NSMutableArray *_allPersons;
    NSMutableDictionary *_personsForCNIdentifiers;
    NSMutableDictionary *_personsForPHIdentifiers;
    id<SGSuggestionsServiceContactsProtocol> _suggestionsService;
}

@property (retain, nonatomic) NSMutableDictionary *personByFullName;
@property (retain, nonatomic) NSMutableSet *nonFoundFullNames;
@property (retain, nonatomic) NSMutableDictionary *personByHandle;
@property (retain, nonatomic) NSMutableSet *nonFoundHandles;
@property (retain, nonatomic) CLSContactCache *contactCache;
@property (weak, nonatomic) id<CLSSocialServiceContactsDelegate> delegate;
@property (readonly) NSURL *diskCacheURL;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)defaultKeysToFetch;

- (unsigned long long)_ageCategoryFromFaceAgeType:(unsigned short)a0;
- (unsigned long long)_relationshipForContact:(id)a0;
- (id)personForPersonHandle:(id)a0;
- (void)enumeratePersonsForIdentifiers:(id)a0 usingBlock:(id /* block */)a1;
- (id)_personWithContact:(id)a0 createPersonIfNeeded:(BOOL)a1;
- (void).cxx_destruct;
- (id)_lastNameForPersonRecord:(id)a0;
- (void)invalidateMemoryCaches;
- (id)_fullNameForPersonRecord:(id)a0;
- (void)enumeratePersonsAndRelationshipUsingBlock:(id /* block */)a0;
- (void)updateProxy;
- (id)_personResultsForPHPersonIdentifier:(id)a0 isLackingFaces:(out BOOL *)a1 inPhotoLibrary:(id)a2;
- (id)enumeratorForChangeHistoryFetchRequest:(id)a0 error:(id *)a1;
- (id)mePerson;
- (void)enumerateAllPersonsUsingBlock:(id /* block */)a0;
- (id)__newPersonWithContact:(id)a0;
- (float)_confidenceInPersonRecord:(id)a0 forName:(id)a1 components:(id)a2;
- (id)contactHistoryCollector;
- (id)cachedPersonLocalIdentifierMatchingContactPictureForContactIdentifier:(id)a0;
- (id)suggestionsService;
- (void)enumeratePersonsAndHomeAddressUsingBlock:(id /* block */)a0;
- (id)_allPersons;
- (id)_nicknameForPersonRecord:(id)a0;
- (void)invalidateCacheForPersonWithIdentifiers:(id)a0;
- (void)enumerateHomeAddressesForPersonWithContactIdentifier:(id)a0 usingBlock:(id /* block */)a1;
- (void)enumeratePersonsForFullName:(id)a0 usingBlock:(id /* block */)a1;
- (id)personLocalIdentifierMatchingContactPictureForContactIdentifier:(id)a0 usingPersonsModel:(id)a1;
- (id)_fullNameWithContact:(id)a0;
- (unsigned long long)_sexFromFaceBiologicalSex:(unsigned short)a0;
- (id)potentialBirthdayDateForCNIdentifier:(id)a0 fullName:(id)a1;
- (id)_firstNameForPersonRecord:(id)a0;
- (id)personResultsForName:(id)a0 inPhotoLibrary:(id)a1;
- (float)_fuzzyMatchingScoreBetweenNameComponents:(id)a0 andNameComponents:(id)a1;
- (id)_personsMatchingPredicate:(id)a0;
- (id)contactsForIdentifiers:(id)a0;
- (void)_addAddressesToPerson:(id)a0 withContact:(id)a1;
- (void)configureRequest:(id)a0 algorithmUmbrellaVersion:(unsigned int)a1;
- (id)_personResultsForfullName:(id)a0;
- (id)personForIdentifier:(id)a0;
- (void)enumeratePersonsAndPotentialBirthdayDateForContactIdentifiers:(id)a0 usingBlock:(id /* block */)a1;
- (id)_personWithContactIdentifier:(id)a0;
- (id)_maidenNameForPersonRecord:(id)a0;
- (id)matchingDictionaryForContactIdentifier:(id)a0;
- (id)initWithProxyAtURL:(id)a0 andIntent:(unsigned long long)a1;
- (void)enumeratePersonsAndBirthdayDateUsingBlock:(id /* block */)a0;

@end
