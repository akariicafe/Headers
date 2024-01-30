@class NSString, NSData;

@interface NPKProtoAcceptSubcredentialInvitationWithIdentifierRequest : PBRequest <NSCopying>

@property (readonly, nonatomic) BOOL hasInvitationIdentifier;
@property (retain, nonatomic) NSString *invitationIdentifier;
@property (readonly, nonatomic) BOOL hasMetadataData;
@property (retain, nonatomic) NSData *metadataData;

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
