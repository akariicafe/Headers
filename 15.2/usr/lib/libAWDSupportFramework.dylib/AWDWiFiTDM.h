@class NSMutableArray;

@interface AWDWiFiTDM : PBCodable <NSCopying>

@property (retain, nonatomic) NSMutableArray *sliceStats;

+ (Class)sliceStatsType;

- (BOOL)readFrom:(id)a0;
- (id)description;
- (void)mergeFrom:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void)writeTo:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)copyTo:(id)a0;
- (unsigned long long)hash;
- (void)dealloc;
- (id)dictionaryRepresentation;
- (void)addSliceStats:(id)a0;
- (unsigned long long)sliceStatsCount;
- (void)clearSliceStats;
- (id)sliceStatsAtIndex:(unsigned long long)a0;

@end
