@interface NPKProtoRemoteAdminAvailabilityResponse : PBCodable <NSCopying> {
    struct { unsigned char isAvailable : 1; } _has;
}

@property (nonatomic) BOOL hasIsAvailable;
@property (nonatomic) BOOL isAvailable;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (void)mergeFrom:(id)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void)writeTo:(id)a0;
- (BOOL)readFrom:(id)a0;
- (id)description;

@end
