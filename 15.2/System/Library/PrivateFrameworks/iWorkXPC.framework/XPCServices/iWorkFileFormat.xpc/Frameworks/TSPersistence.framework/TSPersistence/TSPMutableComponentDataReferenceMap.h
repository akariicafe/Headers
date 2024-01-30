@class _TtC13TSPersistence22TSPMutableReferenceMap, NSMutableIndexSet;

@interface TSPMutableComponentDataReferenceMap : NSObject {
    _TtC13TSPersistence22TSPMutableReferenceMap *_dataToObjectReferenceMap;
    _TtC13TSPersistence22TSPMutableReferenceMap *_objectToDataReferenceMap;
    NSMutableIndexSet *_objectIdentifiersWithoutUUID;
}

- (void).cxx_destruct;
- (id)init;
- (id)makeComponentDataReferenceMap;
- (long long)incrementReferenceFromObjectIdentifier:(long long)a0 toDataIdentifier:(long long)a1 objectHasUUID:(BOOL)a2 increment:(unsigned long long)a3;
- (id)initWithDataToObjectReferenceMap:(id)a0 objectToDataReferenceMap:(id)a1 objectIdentifiersWithoutUUID:(id)a2;
- (id)initWithDataCapacity:(long long)a0 objectCapacity:(long long)a1;
- (long long)addReferenceFromObjectIdentifier:(long long)a0 toDataIdentifier:(long long)a1 objectHasUUID:(BOOL)a2;

@end
