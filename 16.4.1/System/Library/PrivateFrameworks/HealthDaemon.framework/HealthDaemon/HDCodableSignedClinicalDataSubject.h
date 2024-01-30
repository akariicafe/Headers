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

- (void)clearEmailAddresses;
- (id)phoneNumbersAtIndex:(unsigned long long)a0;
- (unsigned long long)phoneNumbersCount;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (void)mergeFrom:(id)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void)addPhoneNumbers:(id)a0;
- (void)writeTo:(id)a0;
- (BOOL)readFrom:(id)a0;
- (id)emailAddressesAtIndex:(unsigned long long)a0;
- (unsigned long long)emailAddressesCount;
- (void)addEmailAddresses:(id)a0;
- (id)description;
- (void)clearPhoneNumbers;
- (void).cxx_destruct;

@end
