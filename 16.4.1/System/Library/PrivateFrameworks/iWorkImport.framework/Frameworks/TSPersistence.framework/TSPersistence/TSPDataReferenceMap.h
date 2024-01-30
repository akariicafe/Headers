@class _TtC13TSPersistence15TSPReferenceMap, NSString, _TtC13TSPersistence22TSPMutableReferenceMap, NSMutableIndexSet, NSIndexSet, NSObject, TSPPersistedDataReferenceMap;
@protocol TSPDataReferenceMapDelegate, OS_dispatch_queue;

@interface TSPDataReferenceMap : NSObject <TSPDataInDocumentProviding> {
    id<TSPDataReferenceMapDelegate> _delegate;
    _Atomic BOOL _isReady;
    _Atomic BOOL _isTornDown;
    NSObject<OS_dispatch_queue> *_accessQueue;
    NSObject<OS_dispatch_queue> *_notificationQueue;
    _TtC13TSPersistence22TSPMutableReferenceMap *_dataToObjectReferenceMap;
    _TtC13TSPersistence22TSPMutableReferenceMap *_objectToDataReferenceMap;
    NSMutableIndexSet *_dataInDocument;
    NSIndexSet *_initialDataInDocument;
    BOOL _hasInitialDataInDocument;
    TSPPersistedDataReferenceMap *_persistedDataReferenceMap;
    _TtC13TSPersistence15TSPReferenceMap *_dataToObjectReferenceMapSnapshot;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithDelegate:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (void)didCloseDocument;
- (BOOL)p_isObjectIdentifierInDocument:(long long)a0;
- (id)allObjectsReferencingData:(id)a0;
- (void)appendComponentDataReferenceMap:(id)a0 forUnarchivedObjects:(id)a1;
- (void)enumerateDataInDocumentUsingBlock:(id /* block */)a0;
- (BOOL)isDataInDocument:(id)a0;
- (void)markAsReady;
- (void)objectIdentifier:(long long)a0 didAddReferenceToDataIdentifier:(long long)a1 isObjectPersisted:(BOOL)a2;
- (void)objectIdentifier:(long long)a0 willRemoveReferenceToDataIdentifier:(long long)a1 isObjectPersisted:(BOOL)a2;
- (id)p_allReferencesFromDataIdentifier:(long long)a0;
- (id)p_allReferencesFromObjectIdentifier:(long long)a0;
- (id)p_consolidatedIdentifiersWithPersistedIdentifiers:(id)a0 identifierOverrides:(id)a1;
- (BOOL)p_isDataInDocument:(long long)a0;
- (void)p_notifyDataInDocumentUpdated;
- (BOOL)p_objectIdentifier:(long long)a0 didAddReferenceToDataIdentifier:(long long)a1 increment:(long long)a2 isObjectPersisted:(BOOL)a3;
- (BOOL)p_objectIdentifier:(long long)a0 willRemoveReferenceToDataIdentifier:(long long)a1 isObjectPersisted:(BOOL)a2;
- (void)p_recalculateDataInDocumentWithAllDataIdentifiers:(id)a0;
- (void)setInitialDataIdentifiersInDocumentIndexSet:(id)a0;
- (void)setPersistedDataReferenceMap:(id)a0 allDataIdentifiers:(id)a1 persistedObjectProvider:(id)a2;
- (void)snapshotDataReferenceCountsForAutosave;
- (void)updateWithObjectIdentifierAddedToDocument:(long long)a0 objectIdentifierRemovedFromDocument:(long long)a1;

@end
