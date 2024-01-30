@interface AWDLibnetcoreConnectionDataUsageSnapshot : PBCodable <NSCopying> {
    struct { unsigned char bytesIn : 1; unsigned char bytesOut : 1; unsigned char multipathBytesInCell : 1; unsigned char multipathBytesInInitial : 1; unsigned char multipathBytesInWiFi : 1; unsigned char multipathBytesOutCell : 1; unsigned char multipathBytesOutInitial : 1; unsigned char multipathBytesOutWiFi : 1; } _has;
}

@property (nonatomic) BOOL hasBytesIn;
@property (nonatomic) unsigned long long bytesIn;
@property (nonatomic) BOOL hasBytesOut;
@property (nonatomic) unsigned long long bytesOut;
@property (nonatomic) BOOL hasMultipathBytesInCell;
@property (nonatomic) unsigned long long multipathBytesInCell;
@property (nonatomic) BOOL hasMultipathBytesOutCell;
@property (nonatomic) unsigned long long multipathBytesOutCell;
@property (nonatomic) BOOL hasMultipathBytesInWiFi;
@property (nonatomic) unsigned long long multipathBytesInWiFi;
@property (nonatomic) BOOL hasMultipathBytesOutWiFi;
@property (nonatomic) unsigned long long multipathBytesOutWiFi;
@property (nonatomic) BOOL hasMultipathBytesInInitial;
@property (nonatomic) unsigned long long multipathBytesInInitial;
@property (nonatomic) BOOL hasMultipathBytesOutInitial;
@property (nonatomic) unsigned long long multipathBytesOutInitial;

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
