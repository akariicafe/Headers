@class OTCDPRecoveryInformation, OTEscrowAuthenticationInformation;

@interface OTICDPRecordContext : PBCodable <NSCopying>

@property (readonly, nonatomic) BOOL hasCdpInfo;
@property (retain, nonatomic) OTCDPRecoveryInformation *cdpInfo;
@property (readonly, nonatomic) BOOL hasAuthInfo;
@property (retain, nonatomic) OTEscrowAuthenticationInformation *authInfo;

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

@end
