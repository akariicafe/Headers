@class NPKProtoStandalonePaymentSetupProduct;

@interface NPKProtoStandalonePaymentProvisioningFlowDigitalIssuanceAmountStepContext : PBCodable <NSCopying> {
    struct { unsigned char allowsReaderModeEntry : 1; } _has;
}

@property (readonly, nonatomic) BOOL hasProduct;
@property (retain, nonatomic) NPKProtoStandalonePaymentSetupProduct *product;
@property (nonatomic) BOOL hasAllowsReaderModeEntry;
@property (nonatomic) BOOL allowsReaderModeEntry;

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
