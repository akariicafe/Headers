@interface CKDPSetBadgeCountRequest : PBRequest <NSCopying> {
    struct { unsigned char badgeCount : 1; unsigned char forDevice : 1; } _has;
}

@property (nonatomic) BOOL hasBadgeCount;
@property (nonatomic) unsigned int badgeCount;
@property (nonatomic) BOOL hasForDevice;
@property (nonatomic) BOOL forDevice;

+ (id)options;

- (unsigned int)requestTypeCode;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)dictionaryRepresentation;
- (Class)responseClass;
- (void)copyTo:(id)a0;
- (void)mergeFrom:(id)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void)writeTo:(id)a0;
- (BOOL)readFrom:(id)a0;
- (id)description;

@end
