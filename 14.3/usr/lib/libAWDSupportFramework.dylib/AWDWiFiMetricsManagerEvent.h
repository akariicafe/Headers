@interface AWDWiFiMetricsManagerEvent : PBCodable <NSCopying> {
    struct { unsigned char timestamp : 1; unsigned char reason : 1; unsigned char status : 1; } _has;
}

@property (nonatomic) BOOL hasTimestamp;
@property (nonatomic) unsigned long long timestamp;
@property (nonatomic) BOOL hasStatus;
@property (nonatomic) unsigned int status;
@property (nonatomic) BOOL hasReason;
@property (nonatomic) unsigned int reason;

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
