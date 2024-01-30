@class VNEntityIdentificationModelConfiguration, VNEntityIdentificationModelTrainedModel, VNEntityIdentificationModelAlgorithm, VNEntityIdentificationModelInformation;
@protocol VNEntityIdentificationModelDataSource, VNEntityIdentificationModelDelegate;

@interface VNEntityIdentificationModel : NSObject {
    id<VNEntityIdentificationModelDelegate> _delegate_DO_NOT_ACCESS_DIRECTLY;
    struct { unsigned char willTrain : 1; unsigned char didTrain : 1; unsigned char failedTraining : 1; unsigned char willDropTrainingData : 1; unsigned char didDropTrainingData : 1; } _delegateFlags;
    VNEntityIdentificationModelConfiguration *_configuration;
    id<VNEntityIdentificationModelDataSource> _dataSource_DO_NOT_ACCESS_DIRECTLY;
    unsigned long long _lastDataChangeSequenceNumber;
    VNEntityIdentificationModelTrainedModel *_trainedModel_DO_NOT_ACCESS_DIRECTLY;
}

@property (retain) id<VNEntityIdentificationModelDelegate> delegate;
@property (readonly, copy) VNEntityIdentificationModelConfiguration *configuration;
@property (readonly, copy) VNEntityIdentificationModelInformation *information;
@property (readonly, copy) VNEntityIdentificationModelAlgorithm *algorithm;

+ (BOOL)isReadOnly;
+ (BOOL)canCreateModelOfClass:(Class)a0 withObjects:(id)a1 error:(id *)a2;
+ (id)informationForModelWithData:(id)a0 error:(id *)a1;
+ (id)informationForModelWithURL:(id)a0 error:(id *)a1;
+ (id)modelConfigurationForVersion:(unsigned long long)a0 modelObjects:(id)a1 error:(id *)a2;
+ (id)modelFromData:(id)a0 options:(id)a1 error:(id *)a2;
+ (id)modelFromStream:(id)a0 options:(id)a1 error:(id *)a2;
+ (id)modelFromURL:(id)a0 options:(id)a1 error:(id *)a2;
+ (id)modelWithConfiguration:(id)a0 dataSource:(id)a1 error:(id *)a2;
+ (id)newModelForVersion:(unsigned long long)a0 modelObjects:(id)a1 error:(id *)a2;
+ (BOOL)readObjectForVersion1Tag:(unsigned int)a0 fromInputStream:(id)a1 intoObjectDictionary:(id)a2 md5Context:(struct CC_MD5state_st { unsigned int x0; unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6[16]; int x7; } *)a3 error:(id *)a4;
+ (id)supportedReadVersions;
+ (id)supportedRequestSpecifiers;
+ (id)supportedWriteVersions;
+ (BOOL)validateAceptableObservation:(id)a0 forEntityPrintOriginatingRequestSpecifier:(id)a1 error:(id *)a2;
+ (BOOL)validateConfiguration:(id)a0 error:(id *)a1;

- (unsigned long long)entityCount;
- (BOOL)writeToURL:(id)a0 options:(id)a1 error:(id *)a2;
- (void).cxx_destruct;
- (BOOL)dropTrainedModelAndReturnError:(id *)a0;
- (id)observationCountsForAllEntities;
- (BOOL)convertToAlgorithm:(id)a0 error:(id *)a1;
- (id)dataWithOptions:(id)a0 error:(id *)a1;
- (id)entityPredictionsForObservation:(id)a0 limit:(unsigned long long)a1 canceller:(id)a2 error:(id *)a3;
- (id)entityUniqueIdentifiers;
- (id)initWithConfiguration:(id)a0 dataSource:(id)a1;
- (unsigned long long)observationCountForEntityWithUniqueIdentifier:(id)a0;
- (id)observationCountsForEntitiesWithUniqueIdentifiers:(id)a0;
- (id)observationsForEntityWithUniqueIdentifier:(id)a0 error:(id *)a1;
- (id)trainedModelWithCanceller:(id)a0 error:(id *)a1;
- (id)trainingObservationsForEntityWithUniqueIdentifier:(id)a0 canceller:(id)a1 error:(id *)a2;
- (id)trainingPrintsForEntityWithUniqueIdentifier:(id)a0 canceller:(id)a1 error:(id *)a2;
- (id)uniqueIdentifierForEntityAtIndex:(unsigned long long)a0;
- (BOOL)validateWithCanceller:(id)a0 error:(id *)a1;
- (BOOL)writeReadOnlyVersion1ToOutputStream:(id)a0 options:(id)a1 md5Context:(struct CC_MD5state_st { unsigned int x0; unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6[16]; int x7; } *)a2 error:(id *)a3;
- (BOOL)writeToStream:(id)a0 options:(id)a1 error:(id *)a2;
- (BOOL)writeVersion1ToOutputStream:(id)a0 options:(id)a1 md5Context:(struct CC_MD5state_st { unsigned int x0; unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6[16]; int x7; } *)a2 error:(id *)a3;

@end
