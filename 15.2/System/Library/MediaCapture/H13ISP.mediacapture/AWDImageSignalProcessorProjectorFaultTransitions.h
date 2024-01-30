@interface AWDImageSignalProcessorProjectorFaultTransitions : PBCodable <NSCopying> {
    struct { unsigned char timestamp : 1; unsigned char capacitance : 1; unsigned char transition : 1; } _has;
}

@property (nonatomic) BOOL hasTimestamp;
@property (nonatomic) unsigned long long timestamp;
@property (nonatomic) BOOL hasTransition;
@property (nonatomic) int transition;
@property (nonatomic) BOOL hasCapacitance;
@property (nonatomic) unsigned int capacitance;

- (id)transitionAsString:(int)a0;
- (int)StringAsTransition:(id)a0;
- (BOOL)readFrom:(id)a0;
- (id)description;
- (void)mergeFrom:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void)writeTo:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)copyTo:(id)a0;
- (unsigned long long)hash;
- (id)dictionaryRepresentation;

@end
