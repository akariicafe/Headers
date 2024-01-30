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
- (void)addCredentials:(id)a0;
- (void)addRemoteCredentials:(id)a0;
- (unsigned long long)remoteCredentialsCount;
- (void)clearRemoteCredentials;
- (id)remoteCredentialsAtIndex:(unsigned long long)a0;
- (unsigned long long)credentialsCount;
- (void)clearCredentials;
- (id)credentialsAtIndex:(unsigned long long)a0;

@end
