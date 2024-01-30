@class NSMutableArray;

@interface Histogram : PBCodable <NSCopying> {
    struct { unsigned char index : 1; } _has;
}

@property (nonatomic) BOOL hasIndex;
@property (nonatomic) unsigned int index;
@property (retain, nonatomic) NSMutableArray *bins;

+ (Class)binType;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)mergeFrom:(id)a0;
- (BOOL)readFrom:(id)a0;
- (unsigned long long)hash;
- (void)writeTo:(id)a0;
- (id)description;
- (void)copyTo:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (void)addBin:(id)a0;
- (unsigned long long)binsCount;
- (void)clearBins;
- (id)binAtIndex:(unsigned long long)a0;

@end
