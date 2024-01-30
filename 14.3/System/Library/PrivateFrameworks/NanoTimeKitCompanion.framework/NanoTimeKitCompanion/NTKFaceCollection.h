@class NSHashTable, NSString, NSUUID, NTKFace, NSMutableDictionary, NSMutableArray, NSMapTable;

@interface NTKFaceCollection : NSObject <NTKFaceObserver, NTKEnumeratableFaceCollection> {
    NSString *_logIdentifier;
    NSUUID *_selectedUUID;
    NSMutableArray *_orderedUUIDs;
    NSMutableDictionary *_facesByUUID;
    NSMapTable *_UUIDsByFace;
    NSHashTable *_observers;
}

@property (readonly, nonatomic) NSString *collectionIdentifier;
@property (readonly, nonatomic) NSUUID *deviceUUID;
@property (readonly, nonatomic, getter=hasLoaded) BOOL hasLoaded;
@property (copy, nonatomic) NSString *debugName;
@property (readonly, nonatomic) NTKFace *selectedFace;
@property (readonly, nonatomic) unsigned long long selectedFaceIndex;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (unsigned long long)numberOfFaces;
- (id)orderedUUIDs;
- (void).cxx_destruct;
- (void)removeObserver:(id)a0;
- (void)reset;
- (void)addObserver:(id)a0;
- (id)observers;
- (id)faceAtIndex:(unsigned long long)a0;
- (id)logIdentifier;
- (void)enumerateFacesUsingBlock:(id /* block */)a0;
- (id)initWithCollectionIdentifier:(id)a0 deviceUUID:(id)a1;
- (void)enumerateFaceNamesUsingBlock:(id /* block */)a0;
- (id)selectedUUID;
- (id)UUIDsByFace;
- (id)facesByUUID;
- (void)_updateOrderedUUIDsFromReference:(id)a0 andNotifyReordered:(BOOL)a1;
- (void)_selectFaceUUID:(id)a0 notify:(BOOL)a1;
- (void)_addFace:(id)a0 forUUID:(id)a1 atIndex:(unsigned long long)a2;
- (void)_removeFaceForUUID:(id)a0;
- (void)_upgradeFace:(id)a0 forUUID:(id)a1;
- (void)_didAddFace:(id)a0 withUUID:(id)a1 atIndex:(unsigned long long)a2;
- (void)_didMoveFace:(id)a0 withUUID:(id)a1 toIndex:(unsigned long long)a2;
- (void)_didSelectFaceUUID:(id)a0;
- (void)_didRemoveFace:(id)a0 withUUID:(id)a1;
- (void)appendFace:(id)a0 suppressingCallbackToObserver:(id)a1;
- (void)setSelectedFace:(id)a0 suppressingCallbackToObserver:(id)a1;
- (void)_updateLogIdentifier;
- (void)_throwIfNotLoaded:(SEL)a0;
- (void)_setSelectedUUID:(id)a0 notify:(BOOL)a1 suppressingCallbackToObserver:(id)a2;
- (void)addFace:(id)a0 atIndex:(unsigned long long)a1 suppressingCallbackToObserver:(id)a2;
- (void)_addFace:(id)a0 forUUID:(id)a1 atIndex:(unsigned long long)a2 suppressingCallbackToObserver:(id)a3;
- (void)_notifyReorderedFacesOmittingObserver:(id)a0;
- (void)removeFace:(id)a0 suppressingCallbackToObserver:(id)a1;
- (void)_removeFaceForUUID:(id)a0 suppressingCallbackToObserver:(id)a1;
- (id)_chooseNewSelectionBecauseSelectedUUIDWillBeRemovedAtIndex:(unsigned long long)a0;
- (void)_notifyRemovedFace:(id)a0 atIndex:(unsigned long long)a1 omitObserver:(id)a2;
- (void)_notifySelectedFaceOmittingObserver:(id)a0;
- (void)_notifyAddedFace:(id)a0 atIndex:(unsigned long long)a1 omitObserver:(id)a2;
- (unsigned long long)indexOfFace:(id)a0;
- (BOOL)containsFace:(id)a0;
- (id)uuidForFace:(id)a0;
- (id)faceForUUID:(id)a0;
- (void)enumerateFacesWithIndexesUsingBlock:(id /* block */)a0;
- (void)setSelectedFaceIndex:(unsigned long long)a0 suppressingCallbackToObserver:(id)a1;
- (void)moveFace:(id)a0 toIndex:(unsigned long long)a1 suppressingCallbackToObserver:(id)a2;
- (void)removeFaceAtIndex:(unsigned long long)a0 suppressingCallbackToObserver:(id)a1;
- (void)_setContentWithFaces:(id)a0 order:(id)a1 selection:(id)a2;
- (void)replaceFaceLocallyByCopy:(id)a0 suppressingCallbackToObserver:(id)a1;

@end
