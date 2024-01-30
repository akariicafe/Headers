@class NGMPBP256Key, NSData;

@interface NGMPBDevicePreKey : PBCodable <NSCopying>

@property (readonly, nonatomic) BOOL hasDhKey;
@property (retain, nonatomic) NGMPBP256Key *dhKey;
@property (nonatomic) double timestamp;
@property (retain, nonatomic) NSData *prekeySignature;

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
