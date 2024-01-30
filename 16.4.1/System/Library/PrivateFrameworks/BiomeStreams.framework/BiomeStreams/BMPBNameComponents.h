@class NSString;

@interface BMPBNameComponents : PBCodable <NSCopying>

@property (readonly, nonatomic) BOOL hasNamePrefix;
@property (retain, nonatomic) NSString *namePrefix;
@property (readonly, nonatomic) BOOL hasGivenName;
@property (retain, nonatomic) NSString *givenName;
@property (readonly, nonatomic) BOOL hasMiddleName;
@property (retain, nonatomic) NSString *middleName;
@property (readonly, nonatomic) BOOL hasPreviousFamilyName;
@property (retain, nonatomic) NSString *previousFamilyName;
@property (readonly, nonatomic) BOOL hasFamilyName;
@property (retain, nonatomic) NSString *familyName;
@property (readonly, nonatomic) BOOL hasNameSuffix;
@property (retain, nonatomic) NSString *nameSuffix;
@property (readonly, nonatomic) BOOL hasNickname;
@property (retain, nonatomic) NSString *nickname;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (void)mergeFrom:(id)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void)writeTo:(id)a0;
- (BOOL)readFrom:(id)a0;
- (id)description;
- (void).cxx_destruct;

@end
