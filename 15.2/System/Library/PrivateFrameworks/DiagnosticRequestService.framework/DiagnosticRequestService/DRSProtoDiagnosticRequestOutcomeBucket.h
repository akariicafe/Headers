@interface DRSProtoDiagnosticRequestOutcomeBucket : PBCodable <NSCopying> {
    struct { unsigned char count : 1; unsigned char outcome : 1; unsigned char requestState : 1; } _has;
}

@property (nonatomic) BOOL hasOutcome;
@property (nonatomic) int outcome;
@property (nonatomic) BOOL hasRequestState;
@property (nonatomic) int requestState;
@property (nonatomic) BOOL hasCount;
@property (nonatomic) unsigned long long count;

- (BOOL)readFrom:(id)a0;
- (id)description;
- (void)mergeFrom:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void)writeTo:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)copyTo:(id)a0;
- (unsigned long long)hash;
- (id)dictionaryRepresentation;
- (id)outcomeAsString:(int)a0;
- (int)StringAsOutcome:(id)a0;
- (id)requestStateAsString:(int)a0;
- (int)StringAsRequestState:(id)a0;

@end
