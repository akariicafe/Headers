@class NPKProtoStandaloneResponseHeader, NPKProtoStandalonePaymentProvisioningFlowStepContext;

@interface NPKProtoStandalonePaymentProvisioningFlowResponse : PBCodable <NSCopying>

@property (retain, nonatomic) NPKProtoStandaloneResponseHeader *responseHeader;
@property (nonatomic) int fromStep;
@property (nonatomic) int toStep;
@property (readonly, nonatomic) BOOL hasContext;
@property (retain, nonatomic) NPKProtoStandalonePaymentProvisioningFlowStepContext *context;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (void)mergeFrom:(id)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void)writeTo:(id)a0;
- (BOOL)readFrom:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (int)StringAsToStep:(id)a0;
- (int)StringAsFromStep:(id)a0;
- (id)toStepAsString:(int)a0;
- (id)fromStepAsString:(int)a0;

@end
