@interface HDAWDHealthKitStandHourEvent : PBCodable <NSCopying> {
    struct { unsigned char standHourTimestamp : 1; unsigned char timestamp : 1; unsigned char didStand : 1; } _has;
}

@property (nonatomic) BOOL hasTimestamp;
@property (nonatomic) unsigned long long timestamp;
@property (nonatomic) BOOL hasStandHourTimestamp;
@property (nonatomic) long long standHourTimestamp;
@property (nonatomic) BOOL hasDidStand;
@property (nonatomic) BOOL didStand;

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
