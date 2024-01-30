@class NSMutableArray;

@interface NPKProtoStandalonePaymentProvisioningFlowChooseFlowStepContext : PBCodable <NSCopying>

@property (retain, nonatomic) NSMutableArray *sections;

+ (Class)sectionsType;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)mergeFrom:(id)a0;
- (void)clearSections;
- (id)sectionsAtIndex:(unsigned long long)a0;
- (void)addSections:(id)a0;
- (BOOL)readFrom:(id)a0;
- (unsigned long long)hash;
- (void)writeTo:(id)a0;
- (id)description;
- (unsigned long long)sectionsCount;
- (void)copyTo:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;

@end
