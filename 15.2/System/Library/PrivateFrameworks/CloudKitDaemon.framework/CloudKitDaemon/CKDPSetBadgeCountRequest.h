@interface CKDPSetBadgeCountRequest : PBRequest <NSCopying> {
    struct { unsigned char badgeCount : 1; unsigned char forDevice : 1; } _has;
}

@property (nonatomic) BOOL hasBadgeCount;
@property (nonatomic) unsigned int badgeCount;
@property (nonatomic) BOOL hasForDevice;
@property (nonatomic) BOOL forDevice;

+ (id)options;

- (unsigned int)requestTypeCode;
- (Class)responseClass;
- (BOOL)readFrom:(id)a0;
- (id)description;
- (void)mergeFrom:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void)writeTo:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)copyTo:(id)a0;
- (unsigned long long)hash;
- (id)dictionaryRepresentation;

@end
