@class NSString, NSMutableArray;

@interface BMPBPersonEntity : PBCodable <NSCopying>

@property (retain, nonatomic) NSMutableArray *names;
@property (readonly, nonatomic) BOOL hasCustomId;
@property (retain, nonatomic) NSString *customId;
@property (readonly, nonatomic) BOOL hasContactId;
@property (retain, nonatomic) NSString *contactId;
@property (retain, nonatomic) NSMutableArray *emailAddresses;
@property (retain, nonatomic) NSMutableArray *addresses;
@property (retain, nonatomic) NSMutableArray *phoneNumbers;
@property (retain, nonatomic) NSMutableArray *socialMediaHandles;
@property (retain, nonatomic) NSMutableArray *attributes;

+ (Class)emailAddressesType;
+ (Class)phoneNumbersType;
+ (Class)addressesType;
+ (Class)attributesType;
+ (Class)namesType;
+ (Class)socialMediaHandlesType;

- (void)clearEmailAddresses;
- (void)clearAttributes;
- (id)phoneNumbersAtIndex:(unsigned long long)a0;
- (unsigned long long)phoneNumbersCount;
- (void)clearNames;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (void)mergeFrom:(id)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void)addPhoneNumbers:(id)a0;
- (void)writeTo:(id)a0;
- (unsigned long long)attributesCount;
- (BOOL)readFrom:(id)a0;
- (unsigned long long)namesCount;
- (id)emailAddressesAtIndex:(unsigned long long)a0;
- (unsigned long long)emailAddressesCount;
- (void)addEmailAddresses:(id)a0;
- (id)description;
- (void)clearPhoneNumbers;
- (void).cxx_destruct;
- (void)addAttributes:(id)a0;
- (id)attributesAtIndex:(unsigned long long)a0;
- (void)addAddresses:(id)a0;
- (void)addNames:(id)a0;
- (void)addSocialMediaHandles:(id)a0;
- (id)addressesAtIndex:(unsigned long long)a0;
- (unsigned long long)addressesCount;
- (void)clearAddresses;
- (void)clearSocialMediaHandles;
- (id)namesAtIndex:(unsigned long long)a0;
- (id)socialMediaHandlesAtIndex:(unsigned long long)a0;
- (unsigned long long)socialMediaHandlesCount;

@end
