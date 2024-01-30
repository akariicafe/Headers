@class NSString, PFLTaskLocalPrivacyParams, PFLTaskLocalTrainingParams;

@interface PFLTask : PBCodable <NSCopying> {
    struct { unsigned char modelVersion : 1; unsigned char updatableWeightsCount : 1; } _has;
}

@property (readonly, nonatomic) BOOL hasTaskId;
@property (retain, nonatomic) NSString *taskId;
@property (readonly, nonatomic) BOOL hasDataSourceId;
@property (retain, nonatomic) NSString *dataSourceId;
@property (readonly, nonatomic) BOOL hasModelName;
@property (retain, nonatomic) NSString *modelName;
@property (nonatomic) BOOL hasModelVersion;
@property (nonatomic) long long modelVersion;
@property (readonly, nonatomic) BOOL hasLocalPrivacyParams;
@property (retain, nonatomic) PFLTaskLocalPrivacyParams *localPrivacyParams;
@property (readonly, nonatomic) BOOL hasLocalTrainingParams;
@property (retain, nonatomic) PFLTaskLocalTrainingParams *localTrainingParams;
@property (nonatomic) BOOL hasUpdatableWeightsCount;
@property (nonatomic) long long updatableWeightsCount;

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
