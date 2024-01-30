@class NSMutableArray;

@interface CKDPCodeFunctionInvokeResponseAttestationResponse : PBCodable <NSCopying>

@property (retain, nonatomic) NSMutableArray *attestations;

+ (Class)attestationsType;

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
- (void)addAttestations:(id)a0;
- (unsigned long long)attestationsCount;
- (void)clearAttestations;
- (id)attestationsAtIndex:(unsigned long long)a0;

@end
