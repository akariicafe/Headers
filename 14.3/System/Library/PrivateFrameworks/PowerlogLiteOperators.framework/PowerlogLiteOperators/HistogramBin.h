@interface HistogramBin : PBCodable <NSCopying> {
    struct { unsigned char ids : 1; unsigned char value : 1; } _has;
}

@property (nonatomic) BOOL hasIds;
@property (nonatomic) unsigned int ids;
@property (nonatomic) BOOL hasValue;
@property (nonatomic) unsigned int value;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)mergeFrom:(id)a0;
- (BOOL)readFrom:(id)a0;
- (unsigned long long)hash;
- (void)writeTo:(id)a0;
- (id)description;
- (void)copyTo:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;

@end
