@class HKCodableQuantity;

@interface HKCodableSummaryAudioExposureValue : PBCodable <NSCopying> {
    struct APPLE_144 { unsigned char daysAggregated : 1; unsigned char lastUpdatedDateData : 1; unsigned char secondsListened : 1; } _has;
}

@property (readonly, nonatomic) BOOL hasLeqQuantity;
@property (retain, nonatomic) HKCodableQuantity *leqQuantity;
@property (nonatomic) BOOL hasSecondsListened;
@property (nonatomic) double secondsListened;
@property (nonatomic) BOOL hasDaysAggregated;
@property (nonatomic) long long daysAggregated;
@property (nonatomic) BOOL hasLastUpdatedDateData;
@property (nonatomic) double lastUpdatedDateData;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (void)mergeFrom:(id)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void)writeTo:(id)a0;
- (BOOL)readFrom:(id)a0;
- (id)description;
- (void).cxx_destruct;

@end
