@interface GEOLogFrameworkMetricItem : PBCodable <NSCopying> {
    unsigned long long _metricItemSize;
    unsigned int _metricItemCount;
    unsigned int _metricItemIdHash;
    unsigned int _metricItemQueueTime;
    unsigned int _metricItemRetryCount;
    int _metricItemType;
    struct { unsigned char has_metricItemSize : 1; unsigned char has_metricItemCount : 1; unsigned char has_metricItemIdHash : 1; unsigned char has_metricItemQueueTime : 1; unsigned char has_metricItemRetryCount : 1; unsigned char has_metricItemType : 1; } _flags;
}

@property (nonatomic) BOOL hasMetricItemType;
@property (nonatomic) int metricItemType;
@property (nonatomic) BOOL hasMetricItemCount;
@property (nonatomic) unsigned int metricItemCount;
@property (nonatomic) BOOL hasMetricItemRetryCount;
@property (nonatomic) unsigned int metricItemRetryCount;
@property (nonatomic) BOOL hasMetricItemSize;
@property (nonatomic) unsigned long long metricItemSize;
@property (nonatomic) BOOL hasMetricItemQueueTime;
@property (nonatomic) unsigned int metricItemQueueTime;
@property (nonatomic) BOOL hasMetricItemIdHash;
@property (nonatomic) unsigned int metricItemIdHash;

+ (BOOL)isValid:(id)a0;

- (id)initWithJSON:(id)a0;
- (id)metricItemTypeAsString:(int)a0;
- (int)StringAsMetricItemType:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)mergeFrom:(id)a0;
- (id)jsonRepresentation;
- (BOOL)readFrom:(id)a0;
- (void)readAll:(BOOL)a0;
- (unsigned long long)hash;
- (void)writeTo:(id)a0;
- (id)description;
- (void)copyTo:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (id)initWithDictionary:(id)a0;

@end
