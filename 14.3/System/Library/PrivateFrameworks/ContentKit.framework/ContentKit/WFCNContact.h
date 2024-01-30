@class NSString, CNContact;

@interface WFCNContact : WFContact {
    int _propertyID;
    long long _multivalueIndex;
}

@property (readonly, nonatomic) BOOL fromVCard;
@property (readonly, copy, nonatomic) CNContact *contact;
@property (readonly, copy, nonatomic) NSString *contactIdentifier;
@property (readonly, copy, nonatomic) NSString *accountIdentifier;

+ (void)contactStoreDidChange:(id)a0;
+ (BOOL)supportsSecureCoding;
+ (id)changeObservers;
+ (id)contactWithCNContact:(id)a0;
+ (id)requiredKeysToFetch;
+ (id)contactWithVCardData:(id)a0 propertyID:(int)a1 multivalueIndex:(long long)a2;
+ (id)allContactsWithSortOrder:(long long)a0 passingTest:(id /* block */)a1;
+ (id)allContactsWithSortOrder:(long long)a0;
+ (id)contactsWithName:(id)a0;
+ (id)contactsWithVCardData:(id)a0;
+ (id)addContactsChangeObserver:(id /* block */)a0;
+ (void)removeContactsChangeObserver:(id)a0;
+ (id)contactWithCNContact:(id)a0 propertyID:(int)a1 multivalueIndex:(long long)a2;
+ (id)contactsWithName:(id)a0 keysToFetch:(id)a1;
+ (void)updateContactStoreObservation;

- (id)imageData;
- (id)dates;
- (id)birthday;
- (id)firstName;
- (id)socialProfiles;
- (id)lastName;
- (void).cxx_destruct;
- (id)organization;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)nameSuffix;
- (id)nickname;
- (id)middleName;
- (id)namePrefix;
- (id)URLs;
- (id)emailAddresses;
- (id)instantMessageAddresses;
- (unsigned long long)hash;
- (id)initWithCoder:(id)a0;
- (id)formattedName;
- (BOOL)isEqual:(id)a0;
- (id)thumbnailImageData;
- (id)phoneNumbers;
- (void)encodeWithCoder:(id)a0;
- (BOOL)hasImageData;
- (BOOL)hasValueForPropertyID:(int)a0;
- (id)valueForPropertyID:(int)a0;
- (id)contactWithPropertyID:(int)a0 multivalueIndex:(long long)a1;
- (id)vCardRepresentationWithFullData:(BOOL)a0;
- (id)streetAddresses;
- (int)propertyID;
- (long long)multivalueIndex;
- (id)initWithCNContact:(id)a0 propertyID:(int)a1 multivalueIndex:(long long)a2 fromVCard:(BOOL)a3;
- (void)refetchContact;
- (BOOL)isPropertyIDRepresented:(int)a0;

@end
