@class NSMutableArray;

@interface NPKProtoStandalonePaymentProvisioningFlowChooseCredentialsStepContext : PBCodable <NSCopying> {
    struct { unsigned char allowsManualEntry : 1; } _has;
}

@property (retain, nonatomic) NSMutableArray *remoteCredentials;
@property (retain, nonatomic) NSMutableArray *credentials;
@property (nonatomic) BOOL hasAllowsManualEntry;
@property (nonatomic) BOOL allowsManualEntry;

+ (Class)remoteCredentialsType;
+ (Class)credentialsType;

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
- (void)addCredentials:(id)a0;
- (void)addRemoteCredentials:(id)a0;
- (unsigned long long)remoteCredentialsCount;
- (void)clearRemoteCredentials;
- (id)remoteCredentialsAtIndex:(unsigned long long)a0;
- (unsigned long long)credentialsCount;
- (void)clearCredentials;
- (id)credentialsAtIndex:(unsigned long long)a0;

@end
