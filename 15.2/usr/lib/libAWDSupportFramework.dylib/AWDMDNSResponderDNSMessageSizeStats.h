@interface AWDMDNSResponderDNSMessageSizeStats : PBCodable <NSCopying> {
    struct { unsigned int *list; unsigned long long count; unsigned long long size; } _querySizeCounts;
    struct { unsigned int *list; unsigned long long count; unsigned long long size; } _responseSizeCounts;
    struct { unsigned char timestamp : 1; } _has;
}

@property (nonatomic) BOOL hasTimestamp;
@property (nonatomic) unsigned long long timestamp;
@property (readonly, nonatomic) unsigned long long querySizeCountsCount;
@property (readonly, nonatomic) unsigned int *querySizeCounts;
@property (readonly, nonatomic) unsigned long long responseSizeCountsCount;
@property (readonly, nonatomic) unsigned int *responseSizeCounts;

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
- (void)clearQuerySizeCounts;
- (unsigned int)querySizeCountAtIndex:(unsigned long long)a0;
- (void)addQuerySizeCount:(unsigned int)a0;
- (void)clearResponseSizeCounts;
- (unsigned int)responseSizeCountAtIndex:(unsigned long long)a0;
- (void)addResponseSizeCount:(unsigned int)a0;
- (void)setQuerySizeCounts:(unsigned int *)a0 count:(unsigned long long)a1;
- (void)setResponseSizeCounts:(unsigned int *)a0 count:(unsigned long long)a1;

@end
