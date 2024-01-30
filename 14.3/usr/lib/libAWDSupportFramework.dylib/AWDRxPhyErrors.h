@interface AWDRxPhyErrors : PBCodable <NSCopying> {
    struct { unsigned char bphyBadplcp : 1; unsigned char bphyRxcrsglitch : 1; unsigned char rfdisable : 1; } _has;
}

@property (nonatomic) BOOL hasRfdisable;
@property (nonatomic) unsigned long long rfdisable;
@property (nonatomic) BOOL hasBphyRxcrsglitch;
@property (nonatomic) unsigned long long bphyRxcrsglitch;
@property (nonatomic) BOOL hasBphyBadplcp;
@property (nonatomic) unsigned long long bphyBadplcp;

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
