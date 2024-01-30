@class NSMutableArray;

@interface HKCodableSampleDataSourceQueryData : PBCodable <NSCopying>

@property (retain, nonatomic) NSMutableArray *samples;

+ (Class)samplesType;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (void)mergeFrom:(id)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void)writeTo:(id)a0;
- (BOOL)readFrom:(id)a0;
- (id)description;
- (void)addSamples:(id)a0;
- (void).cxx_destruct;
- (id)samplesAtIndex:(unsigned long long)a0;
- (void)clearSamples;
- (unsigned long long)samplesCount;

@end
