@class REMObjectID, NSString, NSArray, NSData, REMChangedKeysObserver, REMResolutionTokenMap, REMSaveRequest, REMSmartListStorage;

@interface REMSmartListChangeItem : NSObject <REMConflictResolving, REMSaveRequestTrackedValue, REMSortingStyleReadWriteProtocol>

@property (retain, nonatomic) REMChangedKeysObserver *changedKeysObserver;
@property (readonly, nonatomic) REMObjectID *remObjectID;
@property (retain, nonatomic) REMObjectID *objectID;
@property (retain, nonatomic) NSArray *ordering;
@property (nonatomic) BOOL isPersisted;
@property (readonly, copy, nonatomic) REMSmartListStorage *storage;
@property (readonly, nonatomic) REMSaveRequest *saveRequest;
@property (copy, nonatomic) NSString *smartListTag;
@property (retain, nonatomic) REMResolutionTokenMap *resolutionTokenMap;
@property (retain, nonatomic) NSData *resolutionTokenMapData;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (copy, nonatomic) NSString *sortingStyle;
@property (nonatomic) long long sortingDirection;

+ (void)initialize;

- (void)setValue:(id)a0 forUndefinedKey:(id)a1;
- (id)forwardingTargetForSelector:(SEL)a0;
- (void).cxx_destruct;
- (double)maxEnd;
- (id)valueForUndefinedKey:(id)a0;
- (BOOL)respondsToSelector:(SEL)a0;
- (id)resolutionTokenKeyForChangedKey:(id)a0;
- (id)shallowCopyWithSaveRequest:(id)a0;
- (double)minStart;
- (id)initWithSaveRequest:(id)a0 storage:(id)a1 observeInitialValues:(BOOL)a2;
- (id)dictionaryFromOrdering:(id)a0;
- (id)initWithSaveRequest:(id)a0 storage:(id)a1 changedKeysObserver:(id)a2;
- (void)update:(id)a0 start:(double)a1 stride:(double)a2 orderLookup:(id)a3;
- (void)resetOrderingWithReminderIDs:(id)a0 start:(double)a1;
- (void)cleanupOrderingWithReminderIDs:(id)a0;
- (void)moveRemindersWithIDs:(id)a0 beforeReminderWithID:(id)a1;
- (void)moveRemindersWithIDs:(id)a0 afterReminderWithID:(id)a1;
- (id)changedKeys;

@end
