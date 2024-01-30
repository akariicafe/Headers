@class NSData;

@interface NPKProtoMatchingInvitationOnDeviceRequest : PBRequest <NSCopying> {
    struct { unsigned char timeoutInSeconds : 1; } _has;
}

@property (readonly, nonatomic) BOOL hasInvitationData;
@property (retain, nonatomic) NSData *invitationData;
@property (nonatomic) BOOL hasTimeoutInSeconds;
@property (nonatomic) unsigned long long timeoutInSeconds;

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
