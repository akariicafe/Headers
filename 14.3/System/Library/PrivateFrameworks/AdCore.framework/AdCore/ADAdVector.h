@class NSString;

@interface ADAdVector : PBCodable <NSCopying> {
    struct { double *list; unsigned long long count; unsigned long long size; } _vectors;
}

@property (readonly, nonatomic) BOOL hasVersion;
@property (retain, nonatomic) NSString *version;
@property (readonly, nonatomic) unsigned long long vectorsCount;
@property (readonly, nonatomic) double *vectors;

- (void)addVector:(double)a0;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)mergeFrom:(id)a0;
- (void)dealloc;
- (double)vectorAtIndex:(unsigned long long)a0;
- (BOOL)readFrom:(id)a0;
- (unsigned long long)hash;
- (void)writeTo:(id)a0;
- (id)description;
- (void)copyTo:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (void)clearVectors;
- (void)setVectors:(double *)a0 count:(unsigned long long)a1;

@end
