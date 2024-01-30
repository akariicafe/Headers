@interface AWDRxPhyErrors : PBCodable <NSCopying> {
    struct { unsigned char bphyBadplcp : 1; unsigned char bphyRxcrsglitch : 1; unsigned char rfdisable : 1; } _has;
}

@property (nonatomic) BOOL hasRfdisable;
@property (nonatomic) unsigned long long rfdisable;
@property (nonatomic) BOOL hasBphyRxcrsglitch;
@property (nonatomic) unsigned long long bphyRxcrsglitch;
@property (nonatomic) BOOL hasBphyBadplcp;
@property (nonatomic) unsigned long long bphyBadplcp;

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
