@class REMObjectID, NSString, NSData, REMCRMergeableOrderedSet, NSSet, REMAccountCapabilities, REMChangedKeysObserver, REMSaveRequest, REMAccountStorage, REMAccountGroupContextChangeItem, REMResolutionTokenMap;

@interface REMAccountChangeItem : NSObject <REMConflictResolving, REMSaveRequestTrackedValue, REMExternalSyncMetadataWritableProviding>

@property (retain, nonatomic) REMChangedKeysObserver *changedKeysObserver;
@property (readonly, nonatomic) REMObjectID *remObjectID;
@property (retain, nonatomic) REMObjectID *objectID;
@property (readonly, nonatomic) REMAccountCapabilities *capabilities;
@property (readonly, nonatomic) REMCRMergeableOrderedSet *listIDsMergeableOrdering;
@property (nonatomic) BOOL markedForRemoval;
@property (retain, nonatomic) NSSet *listIDsToUndelete;
@property (retain, nonatomic) NSString *displayName;
@property (nonatomic) BOOL listsDADisplayOrderChanged;
@property (readonly, nonatomic) long long type;
@property (readonly, copy, nonatomic) REMAccountStorage *storage;
@property (retain, nonatomic) NSString *name;
@property (nonatomic) BOOL inactive;
@property (nonatomic) BOOL didChooseToMigrate;
@property (nonatomic) BOOL didChooseToMigrateLocally;
@property (nonatomic) BOOL didFinishMigration;
@property (retain, nonatomic) NSString *daConstraintsDescriptionPath;
@property (nonatomic) BOOL daAllowsCalendarAddDeleteModify;
@property (nonatomic) BOOL daSupportsSharedCalendars;
@property (nonatomic) BOOL daWasMigrated;
@property (readonly, nonatomic) REMSaveRequest *saveRequest;
@property (readonly, nonatomic) REMAccountGroupContextChangeItem *groupContext;
@property (retain, nonatomic) REMResolutionTokenMap *resolutionTokenMap;
@property (retain, nonatomic) NSData *resolutionTokenMapData;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (copy, nonatomic) NSString *externalIdentifier;
@property (copy, nonatomic) NSString *externalModificationTag;
@property (copy, nonatomic) NSString *daSyncToken;
@property (copy, nonatomic) NSString *daPushKey;

+ (void)initialize;
+ (id)_emptyListIDsOrderingWithAccountID:(id)a0;

- (void)setValue:(id)a0 forUndefinedKey:(id)a1;
- (id)forwardingTargetForSelector:(SEL)a0;
- (void).cxx_destruct;
- (id)valueForUndefinedKey:(id)a0;
- (BOOL)respondsToSelector:(SEL)a0;
- (id)resolutionTokenKeyForChangedKey:(id)a0;
- (id)shallowCopyWithSaveRequest:(id)a0;
- (void)addListChangeItem:(id)a0;
- (id)capabilities;
- (id)changedKeys;
- (id)initWithSaveRequest:(id)a0 storage:(id)a1 capabilities:(id)a2 changedKeysObserver:(id)a3;
- (id)initWithSaveRequest:(id)a0 storage:(id)a1 capabilities:(id)a2 observeInitialValues:(BOOL)a3;
- (void)insertListChangeItem:(id)a0 adjacentToListChangeItem:(id)a1 isAfter:(BOOL)a2 withParentListChangeItem:(id)a3;
- (void)_lowLevelApplyUndoToOrdering:(id)a0;
- (void)_editListIDsOrderingUsingBlock:(id /* block */)a0;
- (void)_reassignListChangeItem:(id)a0 withParentListChangeItem:(id)a1;
- (void)_lowLevelAddListChangeItemToOrdering:(id)a0 atIndexOfSibling:(id)a1 isAfter:(BOOL)a2 withParentListChangeItem:(id)a3;
- (void)insertListChangeItem:(id)a0 beforeListChangeItem:(id)a1;
- (id)initWithObjectID:(id)a0 type:(long long)a1 name:(id)a2 insertIntoSaveRequest:(id)a3;
- (void)insertListChangeItem:(id)a0 afterListChangeItem:(id)a1;
- (void)undeleteListWithID:(id)a0 usingUndo:(id)a1;
- (void)removeFromStore;
- (id)listChangeItemsByOrderingListChangeItems:(id)a0;
- (void)lowLevelAddListIDToOrdering:(id)a0 withParentListChangeItem:(id)a1;
- (id)lowLevelRemoveListIDFromOrdering:(id)a0;

@end
