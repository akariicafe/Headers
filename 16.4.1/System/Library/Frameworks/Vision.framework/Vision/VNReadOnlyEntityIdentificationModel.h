@class NSString, VNEntityIdentificationModelTrainedModel;

@interface VNReadOnlyEntityIdentificationModel : VNEntityIdentificationModel <VNEntityIdentificationModelDataSource> {
    VNEntityIdentificationModelTrainedModel *_trainedModel;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)isReadOnly;
+ (id)newModelForVersion:(unsigned long long)a0 modelObjects:(id)a1 error:(id *)a2;

- (void).cxx_destruct;
- (unsigned long long)entityIdentificationModel:(id)a0 numberOfObservationsForEntityAtIndex:(unsigned long long)a1;
- (BOOL)dropTrainedModelAndReturnError:(id *)a0;
- (id)observationCountsForAllEntities;
- (unsigned long long)entityIdentificationModel:(id)a0 indexOfEntityWithUniqueIdentifier:(id)a1;
- (id)entityIdentificationModel:(id)a0 observationAtIndex:(unsigned long long)a1 forEntityAtIndex:(unsigned long long)a2;
- (id)entityIdentificationModel:(id)a0 uniqueIdentifierOfEntityAtIndex:(unsigned long long)a1;
- (id)initWithConfiguration:(id)a0 trainedModel:(id)a1;
- (unsigned long long)numberOfEntitiesInEntityIdentificationModel:(id)a0;
- (unsigned long long)observationCountForEntityWithUniqueIdentifier:(id)a0;
- (id)observationCountsForEntitiesWithUniqueIdentifiers:(id)a0;
- (id)observationsForEntityWithUniqueIdentifier:(id)a0 error:(id *)a1;
- (id)trainedModelWithCanceller:(id)a0 error:(id *)a1;

@end
