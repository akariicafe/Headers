@class NSString, NSData;

@interface NSSProfilesInfoRespMsgProfileInfo : PBCodable <NSCopying>

@property (readonly, nonatomic) BOOL hasFriendlyName;
@property (retain, nonatomic) NSString *friendlyName;
@property (readonly, nonatomic) BOOL hasProfileDescription;
@property (retain, nonatomic) NSString *profileDescription;
@property (readonly, nonatomic) BOOL hasIdentifier;
@property (retain, nonatomic) NSString *identifier;
@property (readonly, nonatomic) BOOL hasUUID;
@property (retain, nonatomic) NSString *uUID;
@property (readonly, nonatomic) BOOL hasOrganization;
@property (retain, nonatomic) NSString *organization;
@property (readonly, nonatomic) BOOL hasExpiryDate;
@property (retain, nonatomic) NSData *expiryDate;

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
