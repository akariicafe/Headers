@class NPKProtoStandalonePass, NSString, NPKProtoStandalonePaymentApplication;

@interface NPKProtoStandalonePaymentPass : PBCodable <NSCopying> {
    struct { unsigned char activationState : 1; } _has;
}

@property (retain, nonatomic) NPKProtoStandalonePass *pass;
@property (readonly, nonatomic) BOOL hasPrimaryAccountIdentifier;
@property (retain, nonatomic) NSString *primaryAccountIdentifier;
@property (readonly, nonatomic) BOOL hasPrimaryAccountNumberSuffix;
@property (retain, nonatomic) NSString *primaryAccountNumberSuffix;
@property (readonly, nonatomic) BOOL hasDeviceAccountIdentifier;
@property (retain, nonatomic) NSString *deviceAccountIdentifier;
@property (readonly, nonatomic) BOOL hasDeviceAccountNumberSuffix;
@property (retain, nonatomic) NSString *deviceAccountNumberSuffix;
@property (nonatomic) BOOL hasActivationState;
@property (nonatomic) int activationState;
@property (readonly, nonatomic) BOOL hasDevicePrimaryPaymentApplication;
@property (retain, nonatomic) NPKProtoStandalonePaymentApplication *devicePrimaryPaymentApplication;

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
- (id)activationStateAsString:(int)a0;
- (int)StringAsActivationState:(id)a0;

@end
