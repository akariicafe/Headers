@class NPKProtoStandaloneError;

@interface NPKProtoStandalonePaymentProvisioningFlowProvisioningResultStepContext : PBCodable <NSCopying> {
    struct { unsigned char cardAdded : 1; } _has;
}

@property (nonatomic) BOOL hasCardAdded;
@property (nonatomic) BOOL cardAdded;
@property (readonly, nonatomic) BOOL hasError;
@property (retain, nonatomic) NPKProtoStandaloneError *error;

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
