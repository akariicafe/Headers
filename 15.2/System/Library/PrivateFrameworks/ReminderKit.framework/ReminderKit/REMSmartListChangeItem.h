@class NSData, NSString, REMObjectID, REMSmartListCustomContextChangeItem, REMChangedKeysObserver, REMColor, REMResolutionTokenMap, REMSaveRequest, REMAccount, REMSmartListStorage, REMManualOrdering;

@interface REMSmartListChangeItem : NSObject <REMConflictResolving, REMSaveRequestTrackedValue, REMMergeableOrderingNode, REMSupportedVersionProviding, REMSupportedVersionUpdating>

@property (class, readonly, nonatomic) NSString *cdEntityName;

@property (retain, nonatomic) REMChangedKeysObserver *changedKeysObserver;
@property (retain, nonatomic) REMObjectID *objectID;
@property (retain, nonatomic) REMObjectID *parentAccountID;
@property (retain, nonatomic) REMObjectID *parentListID;
@property (retain, nonatomic) REMManualOrdering *manualOrdering;
@property (retain, nonatomic) NSString *name;
@property (retain, nonatomic) REMColor *color;
@property (retain, nonatomic) NSString *badgeEmblem;
@property (retain, nonatomic) NSData *filterData;
@property (nonatomic) BOOL showingLargeAttachments;
@property (nonatomic) BOOL isPersisted;
@property (readonly, nonatomic) REMAccount *parentAccount;
@property (readonly, copy, nonatomic) REMSmartListStorage *storage;
@property (readonly, nonatomic) REMSaveRequest *saveRequest;
@property (copy, nonatomic) NSString *smartListType;
@property (readonly, nonatomic) REMSmartListCustomContextChangeItem *customContext;
@property (copy, nonatomic) NSString *sortingStyle;
@property (retain, nonatomic) REMResolutionTokenMap *resolutionTokenMap;
@property (retain, nonatomic) NSData *resolutionTokenMapData;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) REMObjectID *accountID;
@property (retain, nonatomic) REMObjectID *parentOwnerID;
@property (retain, nonatomic) REMObjectID *parentSubContainerID;
@property (readonly, nonatomic) REMObjectID *remObjectID;
@property (readonly, nonatomic) long long minimumSupportedVersion;
@property (readonly, nonatomic) long long effectiveMinimumSupportedVersion;

+ (void)initialize;
+ (id)objectIDWithUUID:(id)a0;
+ (id)newObjectID;

- (id)valueForUndefinedKey:(id)a0;
- (id)changedKeys;
- (BOOL)isUnsupported;
- (void)setValue:(id)a0 forUndefinedKey:(id)a1;
- (id)forwardingTargetForSelector:(SEL)a0;
- (void).cxx_destruct;
- (BOOL)respondsToSelector:(SEL)a0;
- (id)resolutionTokenKeyForChangedKey:(id)a0;
- (id)shallowCopyWithSaveRequest:(id)a0;
- (void)assertIsCustomSmartListWithAction:(id)a0;
- (void)removeFromParentWithAccountChangeItem:(id)a0;
- (id)initWithCustomSmartListObjectID:(id)a0 insertIntoAccountChangeItem:(id)a1;
- (id)initWithSaveRequest:(id)a0 storage:(id)a1 observeInitialValues:(BOOL)a2;
- (id)initWithCustomSmartListObjectID:(id)a0 insertIntoListSublistContextChangeItem:(id)a1;
- (id)initWithSaveRequest:(id)a0 storage:(id)a1 changedKeysObserver:(id)a2;
- (id)initWithCustomSmartListObjectID:(id)a0 insertIntoAccountChangeItem:(id)a1 withParentListChangeItem:(id)a2;
- (id)removeFromParentAllowingUndoWithAccountChangeItem:(id)a0;
- (BOOL)isSubContainer;
- (void)updateManualOrdering:(id)a0;

@end
