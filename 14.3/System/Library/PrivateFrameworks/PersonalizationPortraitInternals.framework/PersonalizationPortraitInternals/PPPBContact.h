@class NSString, NSMutableArray, PPPBDateComponents;

@interface PPPBContact : PBCodable <NSCopying> {
    struct { unsigned char createdAt : 1; unsigned char displayNameOrder : 1; } _has;
}

@property (readonly, nonatomic) BOOL hasIdentifier;
@property (retain, nonatomic) NSString *identifier;
@property (readonly, nonatomic) BOOL hasGivenName;
@property (retain, nonatomic) NSString *givenName;
@property (readonly, nonatomic) BOOL hasMiddleName;
@property (retain, nonatomic) NSString *middleName;
@property (readonly, nonatomic) BOOL hasFamilyName;
@property (retain, nonatomic) NSString *familyName;
@property (readonly, nonatomic) BOOL hasNickname;
@property (retain, nonatomic) NSString *nickname;
@property (retain, nonatomic) NSMutableArray *phoneNumbers;
@property (retain, nonatomic) NSMutableArray *emailAddresses;
@property (retain, nonatomic) NSMutableArray *postalAddresses;
@property (readonly, nonatomic) BOOL hasOrganizationName;
@property (retain, nonatomic) NSString *organizationName;
@property (readonly, nonatomic) BOOL hasBirthday;
@property (retain, nonatomic) PPPBDateComponents *birthday;
@property (readonly, nonatomic) BOOL hasNonGregorianBirthday;
@property (retain, nonatomic) PPPBDateComponents *nonGregorianBirthday;
@property (retain, nonatomic) NSMutableArray *socialProfiles;
@property (readonly, nonatomic) BOOL hasNamePrefix;
@property (retain, nonatomic) NSString *namePrefix;
@property (readonly, nonatomic) BOOL hasNameSuffix;
@property (retain, nonatomic) NSString *nameSuffix;
@property (nonatomic) BOOL hasDisplayNameOrder;
@property (nonatomic) int displayNameOrder;
@property (readonly, nonatomic) BOOL hasSortingGivenName;
@property (retain, nonatomic) NSString *sortingGivenName;
@property (readonly, nonatomic) BOOL hasSortingFamilyName;
@property (retain, nonatomic) NSString *sortingFamilyName;
@property (nonatomic) BOOL hasCreatedAt;
@property (nonatomic) long long createdAt;

+ (Class)phoneNumbersType;
+ (Class)emailAddressesType;
+ (Class)postalAddressesType;
+ (Class)socialProfilesType;

- (unsigned long long)postalAddressesCount;
- (void).cxx_destruct;
- (unsigned long long)phoneNumbersCount;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)mergeFrom:(id)a0;
- (id)socialProfilesAtIndex:(unsigned long long)a0;
- (void)addPostalAddresses:(id)a0;
- (BOOL)readFrom:(id)a0;
- (unsigned long long)hash;
- (void)addEmailAddresses:(id)a0;
- (void)writeTo:(id)a0;
- (void)clearSocialProfiles;
- (id)description;
- (void)copyTo:(id)a0;
- (void)addPhoneNumbers:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (unsigned long long)socialProfilesCount;
- (void)clearPhoneNumbers;
- (void)addSocialProfiles:(id)a0;
- (id)emailAddressesAtIndex:(unsigned long long)a0;
- (unsigned long long)emailAddressesCount;
- (void)clearPostalAddresses;
- (id)postalAddressesAtIndex:(unsigned long long)a0;
- (void)clearEmailAddresses;
- (id)phoneNumbersAtIndex:(unsigned long long)a0;

@end
