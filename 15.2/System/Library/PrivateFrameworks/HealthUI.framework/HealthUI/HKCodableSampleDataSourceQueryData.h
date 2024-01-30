@class NSMutableArray;

@interface HKCodableSampleDataSourceQueryData : PBCodable <NSCopying>

@property (retain, nonatomic) NSMutableArray *samples;

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
