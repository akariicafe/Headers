@class NSMutableArray;

@interface AWDWiFiMetricsManagerNetworkTransitionSession : PBCodable <NSCopying> {
    struct { unsigned char timestamp : 1; } _has;
}

@property (nonatomic) BOOL hasTimestamp;
@property (nonatomic) unsigned long long timestamp;
@property (retain, nonatomic) NSMutableArray *records;

+ (Class)recordsType;

- (void)clearRecords;
- (unsigned long long)recordsCount;
- (BOOL)readFrom:(id)a0;
- (id)description;
- (void)mergeFrom:(id)a0;
- (id)recordsAtIndex:(unsigned long long)a0;
- (BOOL)isEqual:(id)a0;
- (void)addRecords:(id)a0;
- (void)writeTo:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)copyTo:(id)a0;
- (unsigned long long)hash;
- (void)dealloc;
- (id)dictionaryRepresentation;

@end
