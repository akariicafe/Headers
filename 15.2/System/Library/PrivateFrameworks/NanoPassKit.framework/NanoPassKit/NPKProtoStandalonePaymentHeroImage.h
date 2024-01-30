@class NSString, NSData;

@interface NPKProtoStandalonePaymentHeroImage : PBCodable <NSCopying>

@property (retain, nonatomic) NSString *identifier;
@property (readonly, nonatomic) BOOL hasImageHash;
@property (retain, nonatomic) NSString *imageHash;
@property (readonly, nonatomic) BOOL hasImageData;
@property (retain, nonatomic) NSData *imageData;
@property (readonly, nonatomic) BOOL hasImageURL;
@property (retain, nonatomic) NSString *imageURL;

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
