@class NSString, NSMutableDictionary, NSSet, NSDate, NSArray, NSMutableArray;

@interface CLSPersonIdentity : CLSPrimitive {
    NSMutableArray *_homeAddresses;
    NSMutableArray *_workAddresses;
}

@property (retain, nonatomic) NSString *inferredLastName;
@property (retain, nonatomic) NSString *CNIdentifier;
@property (retain, nonatomic) NSString *localIdentifier;
@property (retain, nonatomic) NSString *fullName;
@property (retain, nonatomic) NSString *firstName;
@property (retain, nonatomic) NSString *localizedShortName;
@property (retain, nonatomic) NSString *middleName;
@property (retain, nonatomic) NSString *lastName;
@property (retain, nonatomic) NSString *nickname;
@property (retain, nonatomic) NSDate *birthdayDate;
@property (retain, nonatomic) NSDate *potentialBirthdayDate;
@property (retain, nonatomic) NSDate *anniversaryDate;
@property (retain, nonatomic) NSString *companyName;
@property (retain, nonatomic) NSMutableDictionary *socialProfiles;
@property (retain, nonatomic) NSSet *emailAddresses;
@property (retain, nonatomic) NSSet *phoneNumbers;
@property (nonatomic) unsigned long long relationship;
@property (nonatomic) unsigned long long sex;
@property (nonatomic) unsigned long long ageCategory;
@property (nonatomic) BOOL isFavorite;
@property (nonatomic) BOOL isUserCreated;
@property (nonatomic) BOOL hasContactProfilePicture;
@property (nonatomic) BOOL hasPhoneNumber;
@property (readonly, nonatomic) NSArray *sourceURLs;
@property (readonly, nonatomic) BOOL isMe;

+ (BOOL)supportsSecureCoding;
+ (id)person;
+ (id)personWithLocalIdentifier:(id)a0;
+ (id)relationshipRegularExpressionForRelationship:(unsigned long long)a0 locale:(id)a1;
+ (id)personWithCNIdentifier:(id)a0;
+ (id)personWithPHPerson:(id)a0;
+ (id)presentationStringForPeople:(id)a0;
+ (id)presentationStringForPeople:(id)a0 withScores:(id)a1;
+ (BOOL)isParentRelationship:(unsigned long long)a0;
+ (BOOL)isChildRelationship:(unsigned long long)a0;
+ (BOOL)isSiblingRelationship:(unsigned long long)a0;
+ (BOOL)isFamilyRelationship:(unsigned long long)a0;
+ (id)_personRelationshipVocabularyByLocaleDictionary;
+ (id)descriptionForPersonRelationship:(unsigned long long)a0;

- (void)encodeWithCoder:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)init;
- (id)initWithCoder:(id)a0;
- (BOOL)isEqualToPerson:(id)a0;
- (BOOL)isOrganization;
- (void)prefetchPersonAddressesIfNeeded;
- (unsigned long long)countOfAddressesOfType:(unsigned long long)a0;
- (void)enumerateAddressesOfType:(unsigned long long)a0 asCLLocationsWithBlock:(id /* block */)a1;
- (BOOL)hasSameFamilyNameAsPerson:(id)a0;
- (BOOL)isSamePersonAs:(id)a0;
- (void)mergeWithPerson:(id)a0;
- (id)_addressArrayFromAddressType:(unsigned long long)a0;
- (void)addAddresses:(id)a0 ofType:(unsigned long long)a1;
- (void)_enumerateAddresses:(id)a0 as:(id)a1 withBlock:(id /* block */)a2;
- (void)enumerateAddressesOfType:(unsigned long long)a0 asPlacemarkWithBlock:(id /* block */)a1;
- (void)sanitize;
- (id)_relationshipAsString;
- (id)presentationString;
- (id)pluralPresentationString;
- (void)setSourceService:(id)a0 andID:(id)a1;
- (BOOL)isLocationCoordinate:(struct CLLocationCoordinate2D { double x0; double x1; })a0 closeToAddressesOfType:(unsigned long long)a1;
- (BOOL)isLocationCoordinate:(struct CLLocationCoordinate2D { double x0; double x1; })a0 farAwayFromAddressesOfType:(unsigned long long)a1;
- (unsigned long long)relationshipHintFromNameUsingLocales:(id)a0;
- (id)_motherAndFatherRelationships;

@end
