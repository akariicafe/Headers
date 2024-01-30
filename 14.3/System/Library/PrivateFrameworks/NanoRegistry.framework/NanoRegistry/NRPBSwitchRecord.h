@class NSData;

@interface NRPBSwitchRecord : PBCodable <NSCopying> {
    struct { unsigned char dateTimeInterval : 1; unsigned char switchIndex : 1; } _has;
}

@property (readonly, nonatomic) BOOL hasDeviceIDBytes;
@property (retain, nonatomic) NSData *deviceIDBytes;
@property (nonatomic) BOOL hasDateTimeInterval;
@property (nonatomic) double dateTimeInterval;
@property (nonatomic) BOOL hasSwitchIndex;
@property (nonatomic) int switchIndex;

- (void).cxx_destruct;
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
