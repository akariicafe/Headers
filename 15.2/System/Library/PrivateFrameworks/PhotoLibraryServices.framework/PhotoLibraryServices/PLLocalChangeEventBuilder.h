@class NSMutableArray, NSMutableSet, NSMutableDictionary;

@interface PLLocalChangeEventBuilder : NSObject {
    NSMutableSet *_insertedObjectIDs;
    NSMutableSet *_updatedObjectIDs;
    NSMutableSet *_deletedObjectIDs;
    NSMutableDictionary *_attributesByOID;
    NSMutableDictionary *_relationshipsByOID;
    NSMutableArray *_deletedAssetCloudGUIDs;
    NSMutableArray *_deletedAlbumCloudGUIDs;
    NSMutableArray *_deletedMemoryCloudGUIDs;
    NSMutableArray *_deletedPersonCloudGUIDs;
    NSMutableArray *_deletedFaceCropCloudGUIDs;
    NSMutableArray *_deletedOwnedMomentShareCloudGUIDs;
    NSMutableArray *_deletedSubscribedMomentShareCloudGUIDs;
    NSMutableArray *_deletedSuggestionCloudGUIDs;
    NSMutableArray *_deletedUserFeedbackCloudGUIDs;
    NSMutableArray *_deletedInternalResourceUUIDToResourceTypeMappings;
    NSMutableArray *_deletedOwnedLibraryScopeCloudGUIDs;
    NSMutableArray *_deletedSubscribedLibraryScopeCloudGUIDs;
}

@property (nonatomic, getter=isCoalescedEvent) BOOL coalescedEvent;
@property (nonatomic, getter=isSyncChange) BOOL syncChange;
@property (nonatomic, getter=isUnknownMergeEvent) BOOL unknownMergeEvent;
@property (copy, nonatomic) id /* block */ transactionFilter;
@property (copy, nonatomic) id /* block */ updatedPropertyFilter;
@property (readonly, nonatomic, getter=isEmpty) BOOL empty;

+ (id)localEventFromTransaction:(id)a0;
+ (id)localEventWithBuilderBlock:(id /* block */)a0;

- (void)_recordDeleteChange:(id)a0;
- (void)recordChange:(id)a0;
- (id)buildLocalEvent;
- (void)recordDeletedObjectID:(id)a0;
- (void)recordUpdatedObjectID:(id)a0;
- (id)_filteredUpdatedPropertiesFromChange:(id)a0;
- (void)_recordCloudDeleteForChange:(id)a0;
- (BOOL)_isCloudStateDeletedOnTombstone:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (void)recordDeletedCloudGUID:(id)a0 forType:(long long)a1;
- (void)recordUpdatedAttributes:(unsigned long long)a0 andRelationships:(unsigned long long)a1 forObjectID:(id)a2;
- (BOOL)_shouldRecordTransaction:(id)a0;
- (void)recordAllTransactionsFromIterator:(id)a0;
- (void)recordInsertedObjectID:(id)a0;
- (void)recordTransaction:(id)a0;
- (id /* block */)recordChangedObjectIDBlockForChangeKey:(id)a0;
- (void)_recordUpdateChange:(id)a0;
- (void)_recordInsertChange:(id)a0;
- (id /* block */)recordDeletedCloudGUIDBlockForChangeKey:(id)a0;
- (Class)_cloudDeletableEntityFromObjectID:(id)a0;

@end
