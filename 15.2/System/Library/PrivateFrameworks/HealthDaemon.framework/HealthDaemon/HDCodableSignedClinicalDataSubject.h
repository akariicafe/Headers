@class NSString, HDCodableMedicalDate, NSMutableArray;

@interface HDCodableSignedClinicalDataSubject : PBCodable <NSCopying>

@property (readonly, nonatomic) BOOL hasFullName;
@property (retain, nonatomic) NSString *fullName;
@property (readonly, nonatomic) BOOL hasBirthDate;
@property (retain, nonatomic) HDCodableMedicalDate *birthDate;
@property (readonly, nonatomic) BOOL hasGender;
@property (retain, nonatomic) NSString *gender;
@property (retain, nonatomic) NSMutableArray *emailAddresses;
@property (retain, nonatomic) NSMutableArray *phoneNumbers;

+ (Class)emailAddressesType;
+ (Class)phoneNumbersType;

- (void)addEmailAddresses:(id)a0;
- (BOOL)readFrom:(id)a0;
- (void)clearPhoneNumbers;
- (id)description;
- (unsigned long long)emailAddressesCount;
- (void)addPhoneNumbers:(id)a0;
- (id)emailAddressesAtIndex:(unsigned long long)a0;
- (id)phoneNumbersAtIndex:(unsigned long long)a0;
- (void)mergeFrom:(id)a0;
- (void).cxx_destruct;
- (void)clearEmailAddresses;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)phoneNumbersCount;
- (void)writeTo:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)copyTo:(id)a0;
- (unsigned long long)hash;
- (id)dictionaryRepresentation;

@end
