@interface SGDCKTimeRange : PBCodable <NSCopying> {
    struct { unsigned char end : 1; unsigned char endUTCOffsetSeconds : 1; unsigned char start : 1; unsigned char startUTCOffsetSeconds : 1; unsigned char floating : 1; } _has;
}

@property (nonatomic) BOOL hasStart;
@property (nonatomic) double start;
@property (nonatomic) BOOL hasEnd;
@property (nonatomic) double end;
@property (nonatomic) BOOL hasStartUTCOffsetSeconds;
@property (nonatomic) long long startUTCOffsetSeconds;
@property (nonatomic) BOOL hasEndUTCOffsetSeconds;
@property (nonatomic) long long endUTCOffsetSeconds;
@property (nonatomic) BOOL hasFloating;
@property (nonatomic) BOOL floating;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (void)mergeFrom:(id)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void)writeTo:(id)a0;
- (BOOL)readFrom:(id)a0;
- (id)description;

@end
