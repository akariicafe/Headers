@class NRPBDevicePropertyDiff;

@interface NRPBDevicePropertyDiffType : PBCodable <NSCopying> {
    struct { unsigned char changeType : 1; } _has;
}

@property (nonatomic) BOOL hasChangeType;
@property (nonatomic) int changeType;
@property (readonly, nonatomic) BOOL hasDiff;
@property (retain, nonatomic) NRPBDevicePropertyDiff *diff;

- (int)StringAsChangeType:(id)a0;
- (id)changeTypeAsString:(int)a0;
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
