@class NSString;

@interface NPKProtoStandalonePaymentCredential : PBCodable <NSCopying>

@property (readonly, nonatomic) BOOL hasSanitizedPrimaryAccountNumber;
@property (retain, nonatomic) NSString *sanitizedPrimaryAccountNumber;
@property (readonly, nonatomic) BOOL hasExpiration;
@property (retain, nonatomic) NSString *expiration;
@property (readonly, nonatomic) BOOL hasLongDescription;
@property (retain, nonatomic) NSString *longDescription;

- (BOOL)readFrom:(id)a0;
- (id)description;
- (void)mergeFrom:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (void)writeTo:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)copyTo:(id)a0;
- (unsigned long long)hash;
- (id)dictionaryRepresentation;

@end
