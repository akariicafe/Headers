@class NSData;

@interface NPKProtoCreateFidoKeyResponse : PBCodable <NSCopying>

@property (readonly, nonatomic) BOOL hasFidoKey;
@property (retain, nonatomic) NSData *fidoKey;
@property (readonly, nonatomic) BOOL hasFidoAttestation;
@property (retain, nonatomic) NSData *fidoAttestation;
@property (readonly, nonatomic) BOOL hasErrorData;
@property (retain, nonatomic) NSData *errorData;
@property (readonly, nonatomic) BOOL hasKeyHash;
@property (retain, nonatomic) NSData *keyHash;

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
