@class NSString, NSData;

@interface PBBProtoSendTinkerAccountCredentials : PBCodable <NSCopying>

@property (readonly, nonatomic) BOOL hasUsername;
@property (retain, nonatomic) NSString *username;
@property (readonly, nonatomic) BOOL hasPassword;
@property (retain, nonatomic) NSString *password;
@property (readonly, nonatomic) BOOL hasAcceptedTermsData;
@property (retain, nonatomic) NSData *acceptedTermsData;
@property (readonly, nonatomic) BOOL hasPairingParentAltDSID;
@property (retain, nonatomic) NSString *pairingParentAltDSID;
@property (readonly, nonatomic) BOOL hasPairingParentAppleID;
@property (retain, nonatomic) NSString *pairingParentAppleID;

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
