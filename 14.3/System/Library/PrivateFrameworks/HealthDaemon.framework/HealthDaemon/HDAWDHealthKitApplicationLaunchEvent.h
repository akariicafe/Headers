@interface HDAWDHealthKitApplicationLaunchEvent : PBCodable <NSCopying> {
    struct { unsigned char timestamp : 1; unsigned char application : 1; } _has;
}

@property (nonatomic) BOOL hasTimestamp;
@property (nonatomic) unsigned long long timestamp;
@property (nonatomic) BOOL hasApplication;
@property (nonatomic) int application;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)mergeFrom:(id)a0;
- (BOOL)readFrom:(id)a0;
- (unsigned long long)hash;
- (void)writeTo:(id)a0;
- (id)description;
- (void)copyTo:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (id)applicationAsString:(int)a0;
- (int)StringAsApplication:(id)a0;

@end
