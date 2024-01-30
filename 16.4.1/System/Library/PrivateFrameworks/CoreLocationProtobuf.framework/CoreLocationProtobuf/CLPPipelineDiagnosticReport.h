@interface CLPPipelineDiagnosticReport : PBCodable <NSCopying> {
    struct { double *list; unsigned long long count; unsigned long long size; } _prbOnFloorEstimates;
    struct { unsigned char prbCoarseIndoorSaysIndoor : 1; unsigned char prbGpsSaysIndoor : 1; unsigned char prbInjectionGainRetryLimitOk : 1; unsigned char prbInjectionOccupancyRetryLimitOk : 1; unsigned char prbInlierEstimate : 1; unsigned char prbLocalizerIoWrapperSaysWifiOk : 1; unsigned char prbOnFloorsEstimate : 1; unsigned char prbParticleFilterSaysYield : 1; unsigned char prbPipelinedSaysYield : 1; unsigned char prbWifiSaysIndoor : 1; unsigned char pfYieldStatusBeforeCalculatePose : 1; unsigned char yieldStatusBeforeCalculatePose : 1; unsigned char yieldType : 1; } _has;
}

@property (nonatomic) BOOL hasYieldType;
@property (nonatomic) int yieldType;
@property (nonatomic) BOOL hasPrbPipelinedSaysYield;
@property (nonatomic) double prbPipelinedSaysYield;
@property (nonatomic) BOOL hasPrbCoarseIndoorSaysIndoor;
@property (nonatomic) double prbCoarseIndoorSaysIndoor;
@property (nonatomic) BOOL hasPrbWifiSaysIndoor;
@property (nonatomic) double prbWifiSaysIndoor;
@property (nonatomic) BOOL hasPrbGpsSaysIndoor;
@property (nonatomic) double prbGpsSaysIndoor;
@property (nonatomic) BOOL hasPrbParticleFilterSaysYield;
@property (nonatomic) double prbParticleFilterSaysYield;
@property (nonatomic) BOOL hasPrbOnFloorsEstimate;
@property (nonatomic) double prbOnFloorsEstimate;
@property (readonly, nonatomic) unsigned long long prbOnFloorEstimatesCount;
@property (readonly, nonatomic) double *prbOnFloorEstimates;
@property (nonatomic) BOOL hasPrbInlierEstimate;
@property (nonatomic) double prbInlierEstimate;
@property (nonatomic) BOOL hasPrbLocalizerIoWrapperSaysWifiOk;
@property (nonatomic) double prbLocalizerIoWrapperSaysWifiOk;
@property (nonatomic) BOOL hasPrbInjectionOccupancyRetryLimitOk;
@property (nonatomic) double prbInjectionOccupancyRetryLimitOk;
@property (nonatomic) BOOL hasPrbInjectionGainRetryLimitOk;
@property (nonatomic) double prbInjectionGainRetryLimitOk;
@property (nonatomic) BOOL hasPfYieldStatusBeforeCalculatePose;
@property (nonatomic) int pfYieldStatusBeforeCalculatePose;
@property (nonatomic) BOOL hasYieldStatusBeforeCalculatePose;
@property (nonatomic) int yieldStatusBeforeCalculatePose;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (void)dealloc;
- (void)mergeFrom:(id)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void)writeTo:(id)a0;
- (BOOL)readFrom:(id)a0;
- (id)description;
- (int)StringAsPfYieldStatusBeforeCalculatePose:(id)a0;
- (int)StringAsYieldStatusBeforeCalculatePose:(id)a0;
- (int)StringAsYieldType:(id)a0;
- (void)addPrbOnFloorEstimate:(double)a0;
- (void)clearPrbOnFloorEstimates;
- (id)pfYieldStatusBeforeCalculatePoseAsString:(int)a0;
- (double)prbOnFloorEstimateAtIndex:(unsigned long long)a0;
- (void)setPrbOnFloorEstimates:(double *)a0 count:(unsigned long long)a1;
- (id)yieldStatusBeforeCalculatePoseAsString:(int)a0;
- (id)yieldTypeAsString:(int)a0;

@end
