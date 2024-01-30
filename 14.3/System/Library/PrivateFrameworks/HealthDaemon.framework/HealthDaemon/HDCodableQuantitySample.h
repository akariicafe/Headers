@class NSString, HDCodableSample, NSMutableArray;

@interface HDCodableQuantitySample : PBCodable <HDDecoding, NSCopying> {
    struct { unsigned char count : 1; unsigned char max : 1; unsigned char min : 1; unsigned char mostRecent : 1; unsigned char mostRecentDate : 1; unsigned char mostRecentDuration : 1; unsigned char valueInCanonicalUnit : 1; unsigned char valueInOriginalUnit : 1; unsigned char final : 1; unsigned char frozen : 1; } _has;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) BOOL hasSample;
@property (retain, nonatomic) HDCodableSample *sample;
@property (nonatomic) BOOL hasValueInCanonicalUnit;
@property (nonatomic) double valueInCanonicalUnit;
@property (nonatomic) BOOL hasValueInOriginalUnit;
@property (nonatomic) double valueInOriginalUnit;
@property (readonly, nonatomic) BOOL hasOriginalUnitString;
@property (retain, nonatomic) NSString *originalUnitString;
@property (nonatomic) BOOL hasFrozen;
@property (nonatomic) BOOL frozen;
@property (nonatomic) BOOL hasCount;
@property (nonatomic) long long count;
@property (nonatomic) BOOL hasFinal;
@property (nonatomic) BOOL final;
@property (nonatomic) BOOL hasMin;
@property (nonatomic) double min;
@property (nonatomic) BOOL hasMax;
@property (nonatomic) double max;
@property (nonatomic) BOOL hasMostRecent;
@property (nonatomic) double mostRecent;
@property (nonatomic) BOOL hasMostRecentDate;
@property (nonatomic) double mostRecentDate;
@property (retain, nonatomic) NSMutableArray *quantitySeriesDatas;
@property (nonatomic) BOOL hasMostRecentDuration;
@property (nonatomic) double mostRecentDuration;

+ (Class)quantitySeriesDataType;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)mergeFrom:(id)a0;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (void)copyTo:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (BOOL)isSeries;
- (BOOL)applyToObject:(id)a0;
- (void)addQuantitySeriesData:(id)a0;
- (unsigned long long)quantitySeriesDatasCount;
- (void)clearQuantitySeriesDatas;
- (id)quantitySeriesDataAtIndex:(unsigned long long)a0;
- (BOOL)_applyToDiscreteQuantitySeriesSample:(id)a0;

@end
