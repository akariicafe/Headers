@interface AWDWiFiRetStats : PBCodable <NSCopying> {
    struct { unsigned char retDuration : 1; unsigned char rxDuration : 1; unsigned char timestamp : 1; } _has;
}

@property (nonatomic) BOOL hasTimestamp;
@property (nonatomic) unsigned long long timestamp;
@property (nonatomic) BOOL hasRetDuration;
@property (nonatomic) unsigned long long retDuration;
@property (nonatomic) BOOL hasRxDuration;
@property (nonatomic) unsigned long long rxDuration;

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
