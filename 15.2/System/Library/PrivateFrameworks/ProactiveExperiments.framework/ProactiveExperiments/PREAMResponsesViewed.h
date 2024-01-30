@class NSString;

@interface PREAMResponsesViewed : PBCodable <NSCopying> {
    struct { unsigned char ageGroup : 1; unsigned char lastViewedIndex : 1; unsigned char isApricotDevice : 1; } _has;
}

@property (nonatomic) BOOL hasLastViewedIndex;
@property (nonatomic) unsigned int lastViewedIndex;
@property (readonly, nonatomic) BOOL hasExperimentId;
@property (retain, nonatomic) NSString *experimentId;
@property (readonly, nonatomic) BOOL hasTreatmentId;
@property (retain, nonatomic) NSString *treatmentId;
@property (readonly, nonatomic) BOOL hasTreatmentModelName;
@property (retain, nonatomic) NSString *treatmentModelName;
@property (readonly, nonatomic) BOOL hasHostProcess;
@property (retain, nonatomic) NSString *hostProcess;
@property (nonatomic) BOOL hasIsApricotDevice;
@property (nonatomic) BOOL isApricotDevice;
@property (nonatomic) BOOL hasAgeGroup;
@property (nonatomic) int ageGroup;

- (BOOL)readFrom:(id)a0;
- (id)description;
- (void)mergeFrom:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (void)writeTo:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)copyTo:(id)a0;
- (unsigned long long)hash;
- (id)dictionaryRepresentation;
- (id)ageGroupAsString:(int)a0;
- (int)StringAsAgeGroup:(id)a0;

@end
