@class NSString;

@interface PREUMTrialExperiment : PBCodable <NSCopying>

@property (readonly, nonatomic) BOOL hasExperimentId;
@property (retain, nonatomic) NSString *experimentId;
@property (readonly, nonatomic) BOOL hasTreatmentId;
@property (retain, nonatomic) NSString *treatmentId;
@property (readonly, nonatomic) BOOL hasTreatmentModelName;
@property (retain, nonatomic) NSString *treatmentModelName;

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

@end
