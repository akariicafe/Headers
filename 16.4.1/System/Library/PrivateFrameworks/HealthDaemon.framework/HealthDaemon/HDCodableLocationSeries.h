@class NSString, NSData, NSMutableArray, HDCodableSample;

@interface HDCodableLocationSeries : PBCodable <HDDecoding, NSCopying> {
    struct { unsigned char final : 1; unsigned char frozen : 1; } _has;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) BOOL hasSample;
@property (retain, nonatomic) HDCodableSample *sample;
@property (nonatomic) BOOL hasFrozen;
@property (nonatomic) BOOL frozen;
@property (readonly, nonatomic) BOOL hasContinuationUUID;
@property (retain, nonatomic) NSData *continuationUUID;
@property (nonatomic) BOOL hasFinal;
@property (nonatomic) BOOL final;
@property (retain, nonatomic) NSMutableArray *locationDatas;

+ (Class)locationDataType;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (void)mergeFrom:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void)writeTo:(id)a0;
- (BOOL)readFrom:(id)a0;
- (void).cxx_destruct;
- (void)addLocationData:(id)a0;
- (BOOL)applyToObject:(id)a0;
- (void)clearLocationDatas;
- (id)locationDataAtIndex:(unsigned long long)a0;
- (unsigned long long)locationDatasCount;

@end
