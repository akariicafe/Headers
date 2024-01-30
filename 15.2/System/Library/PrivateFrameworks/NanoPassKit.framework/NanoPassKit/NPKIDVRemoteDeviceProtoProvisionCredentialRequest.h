@class NSData, NSString;

@interface NPKIDVRemoteDeviceProtoProvisionCredentialRequest : PBRequest <NSCopying>

@property (nonatomic) int credentialType;
@property (readonly, nonatomic) BOOL hasMetadataData;
@property (retain, nonatomic) NSData *metadataData;
@property (readonly, nonatomic) BOOL hasPolicyIdentifier;
@property (retain, nonatomic) NSString *policyIdentifier;
@property (readonly, nonatomic) BOOL hasCredentialIdentifier;
@property (retain, nonatomic) NSString *credentialIdentifier;
@property (readonly, nonatomic) BOOL hasAttestationsData;
@property (retain, nonatomic) NSData *attestationsData;

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
- (id)credentialTypeAsString:(int)a0;
- (int)StringAsCredentialType:(id)a0;

@end
