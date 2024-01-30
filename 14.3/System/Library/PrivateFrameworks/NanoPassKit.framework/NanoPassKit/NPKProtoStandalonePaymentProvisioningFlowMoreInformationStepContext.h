@class NSMutableArray, NPKProtoStandalonePaymentPass;

@interface NPKProtoStandalonePaymentProvisioningFlowMoreInformationStepContext : PBCodable <NSCopying>

@property (retain, nonatomic) NSMutableArray *moreInfoItems;
@property (readonly, nonatomic) BOOL hasPaymentPass;
@property (retain, nonatomic) NPKProtoStandalonePaymentPass *paymentPass;

+ (Class)moreInfoItemsType;

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
- (void)addMoreInfoItems:(id)a0;
- (unsigned long long)moreInfoItemsCount;
- (void)clearMoreInfoItems;
- (id)moreInfoItemsAtIndex:(unsigned long long)a0;

@end
