@class NSIndexSet, _TtC13TSPersistence15TSPReferenceMap;

@interface TSPComponentDataReferenceMap : NSObject {
    _TtC13TSPersistence15TSPReferenceMap *_dataToObjectReferenceMap;
    _TtC13TSPersistence15TSPReferenceMap *_objectToDataReferenceMap;
    NSIndexSet *_objectIdentifiersWithoutUUID;
}

@property (readonly, nonatomic) unsigned long long dataCount;
@property (readonly, nonatomic) unsigned long long objectCount;
@property (readonly, nonatomic) _TtC13TSPersistence15TSPReferenceMap *dataToObjectReferenceMap;
@property (readonly, nonatomic) _TtC13TSPersistence15TSPReferenceMap *objectToDataReferenceMap;
@property (readonly, nonatomic) NSIndexSet *objectIdentifiersWithoutUUID;

- (id)description;
- (void).cxx_destruct;
- (id)init;
- (void)saveToMessage:(void *)a0;
- (id)initWithDataToObjectReferenceMap:(id)a0 objectToDataReferenceMap:(id)a1 objectIdentifiersWithoutUUID:(id)a2;
- (id)initFromMessage:(const void *)a0 componentObjectUUIDMap:(id)a1 needsUpgrade:(BOOL *)a2;

@end
