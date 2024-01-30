@class NSString, NSArray, NSData, NSDate, WFContactLabeledValue, WFFileRepresentation;

@interface WFContact : NSObject <WFNaming, NSCopying, NSSecureCoding, WFSerializableContent>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) int propertyID;
@property (readonly, nonatomic) long long multivalueIndex;
@property (readonly, nonatomic) NSString *formattedName;
@property (readonly, nonatomic) NSString *namePrefix;
@property (readonly, nonatomic) NSString *firstName;
@property (readonly, nonatomic) NSString *middleName;
@property (readonly, nonatomic) NSString *lastName;
@property (readonly, nonatomic) NSString *nameSuffix;
@property (readonly, nonatomic) NSString *nickname;
@property (readonly, nonatomic) NSString *organization;
@property (readonly, nonatomic) BOOL hasImageData;
@property (readonly, nonatomic) NSData *imageData;
@property (readonly, nonatomic) NSData *thumbnailImageData;
@property (readonly, nonatomic) WFContactLabeledValue *birthday;
@property (readonly, nonatomic) NSDate *creationDate;
@property (readonly, nonatomic) NSDate *modificationDate;
@property (readonly, nonatomic) NSArray *dates;
@property (readonly, nonatomic) NSArray *phoneNumbers;
@property (readonly, nonatomic) NSArray *emailAddresses;
@property (readonly, nonatomic) NSArray *streetAddresses;
@property (readonly, nonatomic) NSArray *URLs;
@property (readonly, nonatomic) NSArray *socialProfiles;
@property (readonly, nonatomic) NSArray *instantMessageAddresses;
@property (readonly, nonatomic) WFFileRepresentation *fullDataVCardRepresentation;
@property (readonly, nonatomic) WFFileRepresentation *vCardRepresentation;
@property (readonly, copy, nonatomic) NSString *wfName;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)objectWithWFSerializedRepresentation:(id)a0;
+ (long long)predictedTypeForHandleValue:(id)a0;
+ (id)firstContactWithPhoneNumber:(id)a0;
+ (id)firstContactWithEmailAddress:(id)a0;
+ (id)cnContactWithINPerson:(id)a0;
+ (long long)predictedTypeForHandleValue:(id)a0 allowsCustomHandles:(BOOL)a1;
+ (id)contactWithVCardData:(id)a0 propertyID:(int)a1 multivalueIndex:(long long)a2;
+ (Class)preferredConcreteSubclass;
+ (id)allContactsWithSortOrder:(long long)a0 passingTest:(id /* block */)a1;
+ (id)allContactsWithSortOrder:(long long)a0;
+ (id)contactsWithName:(id)a0;
+ (id)contactsWithVCardData:(id)a0;
+ (id)addContactsChangeObserver:(id /* block */)a0;
+ (void)removeContactsChangeObserver:(id)a0;
+ (id)labelFromINPersonHandleLabel:(id)a0;

- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)wfSerializedRepresentation;
- (id)INPersonRepresentation;
- (BOOL)hasValueForPropertyID:(int)a0;
- (id)valueForPropertyID:(int)a0;
- (id)contactWithPropertyID:(int)a0 multivalueIndex:(long long)a1;
- (id)vCardRepresentationWithFullData:(BOOL)a0;
- (id)contactIdentifierForINPerson;

@end
