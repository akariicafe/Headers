@class PKProtobufCloudStoreZoneInvitation;

@interface PKProtobufCloudStoreZoneInvitationResponse : PBCodable <NSCopying> {
    struct { unsigned char status : 1; } _has;
}

@property (nonatomic) unsigned int version;
@property (readonly, nonatomic) BOOL hasInvitation;
@property (retain, nonatomic) PKProtobufCloudStoreZoneInvitation *invitation;
@property (nonatomic) BOOL hasStatus;
@property (nonatomic) unsigned int status;

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
