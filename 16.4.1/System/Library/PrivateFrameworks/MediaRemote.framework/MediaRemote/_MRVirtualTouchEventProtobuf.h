@interface _MRVirtualTouchEventProtobuf : PBCodable <NSCopying> {
    struct { unsigned char x : 1; unsigned char y : 1; unsigned char finger : 1; unsigned char phase : 1; } _has;
}

@property (nonatomic) BOOL hasX;
@property (nonatomic) double x;
@property (nonatomic) BOOL hasY;
@property (nonatomic) double y;
@property (nonatomic) BOOL hasPhase;
@property (nonatomic) int phase;
@property (nonatomic) BOOL hasFinger;
@property (nonatomic) int finger;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (void)mergeFrom:(id)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void)writeTo:(id)a0;
- (BOOL)readFrom:(id)a0;
- (id)description;
- (int)StringAsPhase:(id)a0;
- (id)phaseAsString:(int)a0;

@end
