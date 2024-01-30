@class NSString, NSMutableDictionary, NSMutableIndexSet, NSDate, NSMutableArray;
@protocol VNPersonsModelDataDelegate;

@interface VNPersonsModelData : NSObject <VNPersonsModelDataSource, VNPersonsModelFaceModelDataProvider> {
    unsigned long long _maximumIdentities;
    NSMutableArray *_personUniqueIdentifiers;
    NSMutableDictionary *_personUniqueIdentifierToSerialNumberMapping;
    NSMutableDictionary *_serialNumberToFaceObservationsMapping;
    NSMutableIndexSet *_availablePersonSerialNumbers;
}

@property (weak, nonatomic) id<VNPersonsModelDataDelegate> delegate;
@property (readonly, nonatomic) NSDate *lastModificationDate;
@property (readonly, nonatomic) unsigned long long faceprintRequestRevision;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (unsigned long long)personsModel:(id)a0 numberOfFaceObservationsForPersonAtIndex:(unsigned long long)a1;
- (id)personsModel:(id)a0 uniqueIdentifierOfPersonAtIndex:(unsigned long long)a1;
- (unsigned long long)personsModel:(id)a0 indexOfPersonWithUniqueIdentifier:(id)a1;
- (id)initWithConfiguration:(id)a0;
- (unsigned long long)numberOfPersonsInPersonsModel:(id)a0;
- (id)personsModel:(id)a0 faceObservationAtIndex:(unsigned long long)a1 forPersonAtIndex:(unsigned long long)a2;
- (void).cxx_destruct;
- (void)_removeExistingFaceObservations:(id)a0 fromPersonWithUniqueIdentifier:(id)a1;
- (id)_accessToMutableFaceObservationsForPersonAtIndex:(unsigned long long)a0;
- (BOOL)_addUniqueFaceObservations:(id)a0 toPersonWithUniqueIdentifier:(id)a1 error:(id *)a2;
- (void)_modelWasModified;
- (void)_removeAllFaceObservationsFromIdentityWithSerialNumber:(id)a0;
- (void)_removeExistingFaceObservations:(id)a0 fromIdentityWithSerialNumber:(id)a1;
- (void)_removePersonWithUniqueIdentifier:(id)a0;
- (id)_requestNewIdentitySerialNumberAndReturnError:(id *)a0;
- (id)_uniqueFaceObservationsWithRegistrationState:(BOOL)a0 forFaceObservations:(id)a1 withExpectedFaceprintRequestRevision:(unsigned long long)a2 ofPersonWithUniqueIdentifier:(id)a3 error:(id *)a4;
- (BOOL)addFaceObservations:(id)a0 toPersonWithUniqueIdentifier:(id)a1 error:(id *)a2;
- (id)faceModelFaceObservationAtIndex:(unsigned long long)a0 forPersonAtIndex:(unsigned long long)a1;
- (unsigned long long)faceModelIndexOfPersonWithUniqueIdentifier:(id)a0;
- (unsigned long long)faceModelNumberOfFaceObservationsForPersonAtIndex:(unsigned long long)a0;
- (unsigned long long)faceModelPersonsCount;
- (id)faceModelUniqueIdentifierOfPersonAtIndex:(unsigned long long)a0;
- (BOOL)removeAllFaceObservationsFromPersonWithUniqueIdentifier:(id)a0 error:(id *)a1;
- (BOOL)removeFaceObservations:(id)a0 fromPersonWithUniqueIdentifier:(id)a1 error:(id *)a2;
- (BOOL)removePersonWithUniqueIdentifier:(id)a0 error:(id *)a1;

@end
