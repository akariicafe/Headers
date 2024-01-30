@class NSString;

@interface NPKProtoStandalonePaymentCredential : PBCodable <NSCopying>

@property (readonly, nonatomic) BOOL hasSanitizedPrimaryAccountNumber;
@property (retain, nonatomic) NSString *sanitizedPrimaryAccountNumber;
@property (readonly, nonatomic) BOOL hasExpiration;
@property (retain, nonatomic) NSString *expiration;
@property (readonly, nonatomic) BOOL hasLongDescription;
@property (retain, nonatomic) NSString *longDescription;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)mergeFrom:(id)a0;
- (BOOL)readFrom:(id)a0;
- (unsigned long long)hash;
- (void)writeTo:(id)a0;
- (id)description;
- (void)copyTo:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;

@end
