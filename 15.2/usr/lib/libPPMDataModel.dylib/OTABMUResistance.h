@interface OTABMUResistance : PBCodable <NSCopying> {
    struct { unsigned char downstreamCommonResistance : 1; unsigned char downstreamNorthResistance : 1; unsigned char systemEquivalentResistance : 1; unsigned char traceResistance25C : 1; unsigned char traceResistanceTemperatureCoeff : 1; } _has;
}

@property (nonatomic) BOOL hasTraceResistance25C;
@property (nonatomic) float traceResistance25C;
@property (nonatomic) BOOL hasTraceResistanceTemperatureCoeff;
@property (nonatomic) float traceResistanceTemperatureCoeff;
@property (nonatomic) BOOL hasSystemEquivalentResistance;
@property (nonatomic) float systemEquivalentResistance;
@property (nonatomic) BOOL hasDownstreamCommonResistance;
@property (nonatomic) float downstreamCommonResistance;
@property (nonatomic) BOOL hasDownstreamNorthResistance;
@property (nonatomic) float downstreamNorthResistance;

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
