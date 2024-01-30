@class VNRequestSpecifier, NSString, NSMutableDictionary, NSMutableIndexSet, NSDate, NSMutableArray;
@protocol VNEntityIdentificationModelTrainingDataDelegate;

@interface VNEntityIdentificationModelTrainingData : NSObject <VNEntityIdentificationModelDataSource, VNEntityIdentificationModelTrainedModelDataProvider> {
    unsigned long long _maximumEntities;
    NSMutableArray *_entityUniqueIdentifiers;
    NSMutableDictionary *_serialNumberForEntityUniqueIdentifier;
    NSMutableDictionary *_observationsForSerialNumber;
    NSMutableIndexSet *_availableSerialNumbers;
    unsigned long long _lastDataChangeSequenceNumber;
}

@property (readonly, copy) VNRequestSpecifier *entityPrintOriginatingRequestSpecifier;
@property (weak) id<VNEntityIdentificationModelTrainingDataDelegate> delegate;
@property (readonly, copy) NSDate *lastModificationDate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (unsigned long long)entityCount;
- (void).cxx_destruct;
- (unsigned long long)entityIdentificationModel:(id)a0 numberOfObservationsForEntityAtIndex:(unsigned long long)a1;
- (BOOL)addObservations:(id)a0 toEntityWithUniqueIdentifier:(id)a1 error:(id *)a2;
- (unsigned long long)entityIdentificationModel:(id)a0 indexOfEntityWithUniqueIdentifier:(id)a1;
- (id)entityIdentificationModel:(id)a0 observationAtIndex:(unsigned long long)a1 forEntityAtIndex:(unsigned long long)a2;
- (id)entityIdentificationModel:(id)a0 uniqueIdentifierOfEntityAtIndex:(unsigned long long)a1;
- (unsigned long long)indexOfEntityWithUniqueIdentifier:(id)a0;
- (id)initWithModelConfiguration:(id)a0;
- (unsigned long long)lastDataChangeSequenceNumberForEntityIdentificationModel:(id)a0;
- (id)lastModificationDateForEntityIdentificationModel:(id)a0;
- (unsigned long long)numberOfEntitiesInEntityIdentificationModel:(id)a0;
- (id)observationAtIndex:(unsigned long long)a0 forEntityAtIndex:(unsigned long long)a1;
- (unsigned long long)observationCountForEntityAtIndex:(unsigned long long)a0;
- (BOOL)removeAllObservationsFromEntityWithUniqueIdentifier:(id)a0 error:(id *)a1;
- (BOOL)removeEntityWithUniqueIdentifier:(id)a0 error:(id *)a1;
- (BOOL)removeObservations:(id)a0 fromEntityWithUniqueIdentifier:(id)a1 error:(id *)a2;
- (unsigned long long)trainedModelEntityCount;
- (unsigned long long)trainedModelIndexOfEntityWithUniqueIdentifier:(id)a0;
- (unsigned long long)trainedModelNumberOfObservationsForEntityAtIndex:(unsigned long long)a0;
- (id)trainedModelObservationAtIndex:(unsigned long long)a0 forEntityAtIndex:(unsigned long long)a1;
- (id)trainedModelUniqueIdentifierOfEntityAtIndex:(unsigned long long)a0;
- (id)uniqueIdentifierOfEntityAtIndex:(unsigned long long)a0;
- (BOOL)validateWithCanceller:(id)a0 error:(id *)a1;

@end
