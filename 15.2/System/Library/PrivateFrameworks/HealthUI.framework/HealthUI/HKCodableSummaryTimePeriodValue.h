@interface HKCodableSummaryTimePeriodValue : PBCodable <NSCopying> {
    struct { unsigned char dateData : 1; unsigned char timeInterval : 1; } _has;
}

@property (nonatomic) BOOL hasTimeInterval;
@property (nonatomic) double timeInterval;
@property (nonatomic) BOOL hasDateData;
@property (nonatomic) double dateData;

- (BOOL)readFrom:(id)a0;
- (id)description;
- (void)mergeFrom:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void)writeTo:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)copyTo:(id)a0;
- (unsigned long long)hash;
- (id)dictionaryRepresentation;

@end
