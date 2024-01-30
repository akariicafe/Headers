@class PETRawMessage;

@interface PETAggregationKey : PBCodable <NSCopying> {
    struct { unsigned char bucket : 1; unsigned char datestamp : 1; unsigned char type : 1; } _has;
}

@property (nonatomic) BOOL hasType;
@property (nonatomic) int type;
@property (nonatomic) BOOL hasDatestamp;
@property (nonatomic) unsigned int datestamp;
@property (nonatomic) BOOL hasBucket;
@property (nonatomic) double bucket;
@property (readonly, nonatomic) BOOL hasRawMessage;
@property (retain, nonatomic) PETRawMessage *rawMessage;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (void)mergeFrom:(id)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void)writeTo:(id)a0;
- (int)StringAsType:(id)a0;
- (BOOL)readFrom:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (id)typeAsString:(int)a0;

@end
