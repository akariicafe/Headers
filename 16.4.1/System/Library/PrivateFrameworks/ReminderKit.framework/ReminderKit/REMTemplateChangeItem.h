@class REMListBadge, REMResolutionTokenMap, REMTemplatePublicLink, NSDate, REMColor, REMTemplateStorage, REMChangedKeysObserver, NSString, REMTemplateConfiguration, REMManualOrdering, NSData, REMObjectID, REMAccountCapabilities, REMSaveRequest;

@interface REMTemplateChangeItem : NSObject <REMConflictResolving, REMSaveRequestTrackedValue, REMObjectIDProviding, REMSupportedVersionProviding, REMSupportedVersionUpdating>

@property (class, readonly, nonatomic) NSString *cdEntityName;

@property (retain, nonatomic) REMManualOrdering *unsavedManualOrdering;
@property (retain, nonatomic) REMChangedKeysObserver *changedKeysObserver;
@property (retain, nonatomic) REMTemplateConfiguration *configuration;
@property (retain, nonatomic) REMObjectID *accountID;
@property (retain, nonatomic) REMObjectID *parentAccountID;
@property (retain, nonatomic) NSString *badgeEmblem;
@property (readonly, nonatomic) REMTemplatePublicLink *publicLink;
@property (readonly, nonatomic) BOOL isPersisted;
@property (readonly, nonatomic) REMSaveRequest *saveRequest;
@property (readonly, nonatomic) REMObjectID *objectID;
@property (copy, nonatomic) NSString *name;
@property (retain, nonatomic) REMColor *color;
@property (copy, nonatomic) REMListBadge *badge;
@property (nonatomic) BOOL showingLargeAttachments;
@property (copy, nonatomic) NSString *sortingStyle;
@property (readonly, nonatomic) NSDate *mostRecentPublicLinkUpdateRequestDate;
@property (readonly, nonatomic) REMAccountCapabilities *accountCapabilities;
@property (readonly, copy, nonatomic) REMTemplateStorage *storage;
@property (retain, nonatomic) REMResolutionTokenMap *resolutionTokenMap;
@property (retain, nonatomic) NSData *resolutionTokenMapData;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) REMObjectID *remObjectID;
@property (readonly, nonatomic) long long minimumSupportedVersion;
@property (readonly, nonatomic) long long effectiveMinimumSupportedVersion;

+ (void)initialize;
+ (id)objectIDWithUUID:(id)a0;
+ (id)newObjectID;

- (void)setValue:(id)a0 forUndefinedKey:(id)a1;
- (id)forwardingTargetForSelector:(SEL)a0;
- (id)changedKeys;
- (BOOL)respondsToSelector:(SEL)a0;
- (id)valueForUndefinedKey:(id)a0;
- (BOOL)isUnsupported;
- (void).cxx_destruct;
- (void)updateManualOrdering:(id)a0;
- (void)removeFromParentAccount;
- (id)initWithObjectID:(id)a0 name:(id)a1 configuration:(id)a2 insertIntoAccountChangeItem:(id)a3;
- (id)initWithSaveRequest:(id)a0 storage:(id)a1 changedKeysObserver:(id)a2;
- (id)initWithSaveRequest:(id)a0 storage:(id)a1 observeInitialValues:(BOOL)a2;
- (id)resolutionTokenKeyForChangedKey:(id)a0;
- (id)shallowCopyWithSaveRequest:(id)a0;

@end
