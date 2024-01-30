@class NRPBDeviceDiff;

@interface NRPBDeviceDiffType : PBCodable <NSCopying> {
    struct { unsigned char changeType : 1; } _has;
}

@property (nonatomic) BOOL hasChangeType;
@property (nonatomic) int changeType;
@property (readonly, nonatomic) BOOL hasDiff;
@property (retain, nonatomic) NRPBDeviceDiff *diff;

- (void).cxx_destruct;
- (int)StringAsChangeType:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)mergeFrom:(id)a0;
- (BOOL)readFrom:(id)a0;
- (unsigned long long)hash;
- (void)writeTo:(id)a0;
- (id)description;
- (void)copyTo:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (id)changeTypeAsString:(int)a0;

@end
