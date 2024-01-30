@class VNEntityIdentificationModelTrainingData;

@interface VNMutableEntityIdentificationModel : VNEntityIdentificationModel <VNEntityIdentificationModelTrainingDataDelegate> {
    VNEntityIdentificationModelTrainingData *_trainingData;
}

+ (id)modelWithConfiguration:(id)a0 error:(id *)a1;
+ (BOOL)canCreateModelOfClass:(Class)a0 withObjects:(id)a1 error:(id *)a2;
+ (id)modelFromPersonsModel:(id)a0 error:(id *)a1;
+ (id)modelWithConfiguration:(id)a0 dataSource:(id)a1 error:(id *)a2;
+ (id)newModelForVersion:(unsigned long long)a0 modelObjects:(id)a1 error:(id *)a2;

- (id)initWithConfiguration:(id)a0;
- (void).cxx_destruct;
- (BOOL)addAllPersonsFromPersonsModel:(id)a0 error:(id *)a1;
- (BOOL)addObservations:(id)a0 toEntityWithUniqueIdentifier:(id)a1 error:(id *)a2;
- (BOOL)addPersonWithUniqueIdentifier:(id)a0 fromPersonsModel:(id)a1 error:(id *)a2;
- (void)entityIdentificationModelTrainingDataWasModified:(id)a0;
- (BOOL)removeAllObservationsFromEntityWithUniqueIdentifier:(id)a0 error:(id *)a1;
- (BOOL)removeEntityWithUniqueIdentifier:(id)a0 error:(id *)a1;
- (BOOL)removeObservations:(id)a0 fromEntityWithUniqueIdentifier:(id)a1 error:(id *)a2;
- (BOOL)validateWithCanceller:(id)a0 error:(id *)a1;

@end
