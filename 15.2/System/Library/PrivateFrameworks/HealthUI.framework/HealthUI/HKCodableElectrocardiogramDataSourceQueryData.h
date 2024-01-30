@class NSMutableArray;

@interface HKCodableElectrocardiogramDataSourceQueryData : PBCodable <NSCopying> {
    struct { unsigned char activeAlgorithmVersionRawValue : 1; unsigned char count : 1; } _has;
}

@property (nonatomic) BOOL hasCount;
@property (nonatomic) long long count;
@property (retain, nonatomic) NSMutableArray *samples;
@property (nonatomic) BOOL hasActiveAlgorithmVersionRawValue;
@property (nonatomic) long long activeAlgorithmVersionRawValue;

+ (Class)samplesType;

- (void)clearSamples;
- (id)samplesAtIndex:(unsigned long long)a0;
- (void)addSamples:(id)a0;
- (unsigned long long)samplesCount;
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
