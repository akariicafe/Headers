@class NSString, CNContact;

@interface WFCNContact : WFContact {
    int _propertyID;
    long long _multivalueIndex;
}

@property (readonly, nonatomic) BOOL fromVCard;
@property (readonly, copy, nonatomic) CNContact *contact;
@property (readonly, copy, nonatomic) NSString *contactIdentifier;
@property (readonly, copy, nonatomic) NSString *accountIdentifier;

+ (BOOL)supportsSecureCoding;
+ (id)contactWithIdentifier:(id)a0;
+ (void)contactStoreDidChange:(id)a0;
+ (id)changeObservers;
+ (id)firstContactWithPhoneNumber:(id)a0;
+ (id)firstContactWithEmailAddress:(id)a0;
+ (id)contactWithCNContact:(id)a0;
+ (id)contactWithCNContact:(id)a0 propertyID:(int)a1 multivalueIndex:(long long)a2;
+ (id)requiredKeysToFetch;
+ (id)contactWithVCardData:(id)a0 propertyID:(int)a1 multivalueIndex:(long long)a2;
+ (id)allContactsWithSortOrder:(long long)a0 passingTest:(id /* block */)a1;
+ (id)allContactsWithSortOrder:(long long)a0;
+ (id)contactsWithName:(id)a0;
+ (id)contactsWithVCardData:(id)a0;
+ (id)addContactsChangeObserver:(id /* block */)a0;
+ (void)removeContactsChangeObserver:(id)a0;
+ (id)contactsWithName:(id)a0 keysToFetch:(id)a1;
+ (id)firstContactWithPredicate:(id)a0 propertyID:(int)a1 valueEqualityBlock:(id /* block */)a2;
+ (void)updateContactStoreObservation;

- (id)dates;
- (id)imageData;
- (id)middleName;
- (id)socialProfiles;
- (id)nickname;
- (void)encodeWithCoder:(id)a0;
- (id)nameSuffix;
- (id)emailAddresses;
- (id)namePrefix;
- (void).cxx_destruct;
- (id)organization;
- (BOOL)isEqual:(id)a0;
- (BOOL)hasImageData;
- (id)initWithCoder:(id)a0;
- (id)instantMessageAddresses;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)phoneNumbers;
- (id)lastName;
- (unsigned long long)hash;
- (id)birthday;
- (id)thumbnailImageData;
- (id)URLs;
- (id)firstName;
- (id)formattedName;
- (int)propertyID;
- (long long)multivalueIndex;
- (id)streetAddresses;
- (BOOL)hasValueForPropertyID:(int)a0;
- (id)valueForPropertyID:(int)a0;
- (id)contactWithPropertyID:(int)a0 multivalueIndex:(long long)a1;
- (id)vCardRepresentationWithFullData:(BOOL)a0;
- (id)initWithCNContact:(id)a0 propertyID:(int)a1 multivalueIndex:(long long)a2 fromVCard:(BOOL)a3;
- (void)refetchContact;
- (id)contactIdentifierForINPerson;
- (BOOL)isPropertyIDRepresented:(int)a0;

@end
