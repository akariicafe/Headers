@class NSMutableArray;

@interface AWDPowerBBLQMDataTransferMetrics : PBCodable <NSCopying> {
    struct { unsigned int *list; unsigned long long count; unsigned long long size; } _lQMTransitionCntBuckets;
    struct { unsigned char timestamp : 1; } _has;
}

@property (nonatomic) BOOL hasTimestamp;
@property (nonatomic) unsigned long long timestamp;
@property (retain, nonatomic) NSMutableArray *lQMBytes;
@property (readonly, nonatomic) unsigned long long lQMTransitionCntBucketsCount;
@property (readonly, nonatomic) unsigned int *lQMTransitionCntBuckets;

+ (Class)lQMBytesType;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)mergeFrom:(id)a0;
- (void)dealloc;
- (BOOL)readFrom:(id)a0;
- (unsigned long long)hash;
- (void)writeTo:(id)a0;
- (id)description;
- (void)copyTo:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (void)setLQMTransitionCntBuckets:(unsigned int *)a0 count:(unsigned long long)a1;
- (void)addLQMBytes:(id)a0;
- (unsigned long long)lQMBytesCount;
- (void)clearLQMBytes;
- (id)lQMBytesAtIndex:(unsigned long long)a0;
- (void)clearLQMTransitionCntBuckets;
- (unsigned int)lQMTransitionCntBucketsAtIndex:(unsigned long long)a0;
- (void)addLQMTransitionCntBuckets:(unsigned int)a0;

@end
