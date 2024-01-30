@class NPKProtoStandalonePaymentProvisioningFlowManualEntryStepContext, NPKProtoStandalonePaymentCredentialUnion, NPKProtoStandalonePaymentRemoteCredential;

@interface NPKProtoStandalonePaymentProvisioningFlowSecondaryManualEntryStepContext : PBCodable <NSCopying> {
    struct { unsigned char allowsAddingDifferentCard : 1; } _has;
}

@property (retain, nonatomic) NPKProtoStandalonePaymentProvisioningFlowManualEntryStepContext *manualEntryStepContext;
@property (readonly, nonatomic) BOOL hasRemoteCredential;
@property (retain, nonatomic) NPKProtoStandalonePaymentRemoteCredential *remoteCredential;
@property (readonly, nonatomic) BOOL hasCredential;
@property (retain, nonatomic) NPKProtoStandalonePaymentCredentialUnion *credential;
@property (nonatomic) BOOL hasAllowsAddingDifferentCard;
@property (nonatomic) BOOL allowsAddingDifferentCard;

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
