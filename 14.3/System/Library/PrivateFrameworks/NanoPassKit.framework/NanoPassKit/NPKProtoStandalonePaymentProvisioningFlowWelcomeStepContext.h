@class NSMutableArray;

@interface NPKProtoStandalonePaymentProvisioningFlowWelcomeStepContext : PBCodable <NSCopying>

@property (retain, nonatomic) NSMutableArray *heroImages;

+ (Class)heroImagesType;

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
- (void)addHeroImages:(id)a0;
- (unsigned long long)heroImagesCount;
- (void)clearHeroImages;
- (id)heroImagesAtIndex:(unsigned long long)a0;

@end
