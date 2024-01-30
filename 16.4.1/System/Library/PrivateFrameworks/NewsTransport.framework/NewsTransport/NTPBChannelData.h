@interface NTPBChannelData : PBCodable <NSCopying> {
    struct { unsigned char isBundleChannel : 1; } _has;
}

@property (nonatomic) BOOL hasIsBundleChannel;
@property (nonatomic) BOOL isBundleChannel;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)dictionaryRepresentation;
- (void)mergeFrom:(id)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void)writeTo:(id)a0;
- (BOOL)readFrom:(id)a0;
- (id)description;

@end
