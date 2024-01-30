@class NSData, NSMutableArray;

@interface NPKProtoGenerateISOEncryptionCertificateForSubCredentialIdResponse : PBCodable <NSCopying>

@property (retain, nonatomic) NSMutableArray *attestations;
@property (readonly, nonatomic) BOOL hasAuthorization;
@property (retain, nonatomic) NSData *authorization;
@property (readonly, nonatomic) BOOL hasErrorData;
@property (retain, nonatomic) NSData *errorData;

+ (Class)attestationType;

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
- (unsigned long long)attestationsCount;
- (void)clearAttestations;
- (void)addAttestation:(id)a0;
- (id)attestationAtIndex:(unsigned long long)a0;

@end
