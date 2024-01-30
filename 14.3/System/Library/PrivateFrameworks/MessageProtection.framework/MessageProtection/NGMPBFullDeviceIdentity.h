@class NGMPBP256Key, NSMutableArray;

@interface NGMPBFullDeviceIdentity : PBCodable <NSCopying>

@property (retain, nonatomic) NGMPBP256Key *signingKey;
@property (retain, nonatomic) NSMutableArray *prekeys;

+ (Class)prekeysType;

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
- (void)addPrekeys:(id)a0;
- (id)prekeysAtIndex:(unsigned long long)a0;
- (void)clearPrekeys;
- (unsigned long long)prekeysCount;

@end
