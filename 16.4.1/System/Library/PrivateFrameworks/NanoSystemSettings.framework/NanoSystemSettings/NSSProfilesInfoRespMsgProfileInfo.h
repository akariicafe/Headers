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
