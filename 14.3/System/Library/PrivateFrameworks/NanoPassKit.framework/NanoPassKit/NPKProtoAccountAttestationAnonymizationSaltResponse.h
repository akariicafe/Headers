@class NSString, NSData;

@interface NPKProtoAccountAttestationAnonymizationSaltResponse : PBCodable <NSCopying>

@property (readonly, nonatomic) BOOL hasAnonymizationSalt;
@property (retain, nonatomic) NSString *anonymizationSalt;
@property (readonly, nonatomic) BOOL hasErrorData;
@property (retain, nonatomic) NSData *errorData;

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
