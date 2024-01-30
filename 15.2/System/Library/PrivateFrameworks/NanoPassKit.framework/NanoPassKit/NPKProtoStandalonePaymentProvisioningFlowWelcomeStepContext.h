@class NSMutableArray;

@interface NPKProtoStandalonePaymentProvisioningFlowWelcomeStepContext : PBCodable <NSCopying>

@property (retain, nonatomic) NSMutableArray *heroImages;

+ (Class)heroImagesType;

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
- (void)addHeroImages:(id)a0;
- (unsigned long long)heroImagesCount;
- (void)clearHeroImages;
- (id)heroImagesAtIndex:(unsigned long long)a0;

@end
