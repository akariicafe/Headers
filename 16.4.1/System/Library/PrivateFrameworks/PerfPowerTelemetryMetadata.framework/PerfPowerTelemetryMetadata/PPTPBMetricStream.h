@class NSMutableArray;

@interface PPTPBMetricStream : PBCodable <NSCopying> {
    struct { unsigned char protoVersion : 1; } _has;
}

@property (retain, nonatomic) NSMutableArray *metricHistorys;
@property (nonatomic) BOOL hasProtoVersion;
@property (nonatomic) double protoVersion;

+ (Class)metricHistoryType;

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
- (void)addMetricHistory:(id)a0;
- (void)clearMetricHistorys;
- (id)metricHistoryAtIndex:(unsigned long long)a0;
- (unsigned long long)metricHistorysCount;

@end
