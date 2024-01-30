@class NSData;

@interface HKCodableQuantitySeriesEnumerationResult : PBCodable <NSCopying> {
    struct { unsigned char count : 1; unsigned char dataTypeCode : 1; unsigned char endTime : 1; unsigned char persistentID : 1; unsigned char seriesIndex : 1; unsigned char sourceID : 1; unsigned char startTime : 1; unsigned char value : 1; } _has;
}

@property (nonatomic) BOOL hasPersistentID;
@property (nonatomic) long long persistentID;
@property (nonatomic) BOOL hasDataTypeCode;
@property (nonatomic) long long dataTypeCode;
@property (readonly, nonatomic) BOOL hasUuid;
@property (retain, nonatomic) NSData *uuid;
@property (nonatomic) BOOL hasValue;
@property (nonatomic) double value;
@property (nonatomic) BOOL hasCount;
@property (nonatomic) long long count;
@property (nonatomic) BOOL hasStartTime;
@property (nonatomic) double startTime;
@property (nonatomic) BOOL hasEndTime;
@property (nonatomic) double endTime;
@property (nonatomic) BOOL hasSourceID;
@property (nonatomic) long long sourceID;
@property (nonatomic) BOOL hasSeriesIndex;
@property (nonatomic) long long seriesIndex;
@property (readonly, nonatomic) BOOL hasQuantitySample;
@property (retain, nonatomic) NSData *quantitySample;

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
