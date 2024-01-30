@class NRPBDeviceCollectionDiff;

@interface NRPBDeviceCollectionHistoryEntry : PBCodable <NSCopying> {
    struct { unsigned char date : 1; unsigned char index : 1; } _has;
}

@property (nonatomic) BOOL hasIndex;
@property (nonatomic) long long index;
@property (nonatomic) BOOL hasDate;
@property (nonatomic) double date;
@property (readonly, nonatomic) BOOL hasDiff;
@property (retain, nonatomic) NRPBDeviceCollectionDiff *diff;

- (BOOL)readFrom:(id)a0;
- (id)description;
- (void)mergeFrom:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (void)writeTo:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)copyTo:(id)a0;
- (unsigned long long)hash;
- (id)dictionaryRepresentation;

@end
