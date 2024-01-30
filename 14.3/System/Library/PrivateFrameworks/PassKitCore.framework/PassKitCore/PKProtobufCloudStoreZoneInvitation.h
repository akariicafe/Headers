@class NSString, NSData;

@interface PKProtobufCloudStoreZoneInvitation : PBCodable <NSCopying> {
    struct { unsigned char dateCreated : 1; } _has;
}

@property (nonatomic) unsigned int version;
@property (readonly, nonatomic) BOOL hasShareURL;
@property (retain, nonatomic) NSString *shareURL;
@property (readonly, nonatomic) BOOL hasShareInvitationToken;
@property (retain, nonatomic) NSData *shareInvitationToken;
@property (readonly, nonatomic) BOOL hasContainerIdentifier;
@property (retain, nonatomic) NSString *containerIdentifier;
@property (readonly, nonatomic) BOOL hasZoneName;
@property (retain, nonatomic) NSString *zoneName;
@property (nonatomic) BOOL hasDateCreated;
@property (nonatomic) double dateCreated;

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
