@class NSString, NSData;

@interface NPKProtoAccountAttestationAnonymizationSaltResponse : PBCodable <NSCopying>

@property (readonly, nonatomic) BOOL hasAnonymizationSalt;
@property (retain, nonatomic) NSString *anonymizationSalt;
@property (readonly, nonatomic) BOOL hasErrorData;
@property (retain, nonatomic) NSData *errorData;

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
