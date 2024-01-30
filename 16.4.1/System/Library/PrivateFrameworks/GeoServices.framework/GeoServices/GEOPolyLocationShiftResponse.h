@interface GEOPolyLocationShiftResponse : PBCodable <NSCopying> {
    struct { double *list; unsigned long long count; unsigned long long size; } _parameters;
    double _radius;
    int _status;
}

@property (nonatomic) int status;
@property (readonly, nonatomic) unsigned long long parametersCount;
@property (readonly, nonatomic) double *parameters;
@property (nonatomic) double radius;

+ (BOOL)isValid:(id)a0;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (int)StringAsStatus:(id)a0;
- (id)dictionaryRepresentation;
- (id)jsonRepresentation;
- (void)readAll:(BOOL)a0;
- (void)copyTo:(id)a0;
- (void)dealloc;
- (void)mergeFrom:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)statusAsString:(int)a0;
- (id)initWithJSON:(id)a0;
- (id)initWithDictionary:(id)a0;
- (unsigned long long)hash;
- (void)writeTo:(id)a0;
- (BOOL)readFrom:(id)a0;
- (id)description;
- (void)clearParameters;
- (void)addParameters:(double)a0;
- (double)parametersAtIndex:(unsigned long long)a0;
- (void)setParameters:(double *)a0 count:(unsigned long long)a1;

@end
