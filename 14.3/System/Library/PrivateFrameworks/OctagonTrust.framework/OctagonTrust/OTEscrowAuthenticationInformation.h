@class NSString;

@interface OTEscrowAuthenticationInformation : PBCodable <NSCopying> {
    struct { unsigned char fmipRecovery : 1; unsigned char idmsRecovery : 1; } _has;
}

@property (readonly, nonatomic) BOOL hasAuthenticationPassword;
@property (retain, nonatomic) NSString *authenticationPassword;
@property (readonly, nonatomic) BOOL hasAuthenticationDsid;
@property (retain, nonatomic) NSString *authenticationDsid;
@property (readonly, nonatomic) BOOL hasAuthenticationAppleid;
@property (retain, nonatomic) NSString *authenticationAppleid;
@property (readonly, nonatomic) BOOL hasFmipUuid;
@property (retain, nonatomic) NSString *fmipUuid;
@property (nonatomic) BOOL hasFmipRecovery;
@property (nonatomic) BOOL fmipRecovery;
@property (nonatomic) BOOL hasIdmsRecovery;
@property (nonatomic) BOOL idmsRecovery;
@property (readonly, nonatomic) BOOL hasAuthenticationAuthToken;
@property (retain, nonatomic) NSString *authenticationAuthToken;
@property (readonly, nonatomic) BOOL hasAuthenticationEscrowproxyUrl;
@property (retain, nonatomic) NSString *authenticationEscrowproxyUrl;
@property (readonly, nonatomic) BOOL hasAuthenticationIcloudEnvironment;
@property (retain, nonatomic) NSString *authenticationIcloudEnvironment;

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

@end
