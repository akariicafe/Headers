@class NSData, NSString, NSUUID, NSDate, NSOrderedSet, REMObjectID, REMColor, NSDictionary, REMResolutionTokenMap, NSSet, NSArray;

@interface REMListStorage : NSObject <NSCopying, NSSecureCoding, REMObjectIDProviding, REMExternalSyncMetadataWritableProviding, REMObjectStorageSupportedVersionProviding> {
    NSOrderedSet *_reminderIDsMergeableOrdering;
    unsigned long long _storeGeneration;
    unsigned long long _copyGeneration;
    long long minimumSupportedVersion;
    long long effectiveMinimumSupportedVersion;
}

@property (class) BOOL _forceDisableFullRemindersSorting;
@property (class, readonly) BOOL supportsSecureCoding;
@property (class, readonly, nonatomic) NSString *cdEntityName;

@property (retain, nonatomic) REMObjectID *accountID;
@property (retain, nonatomic) REMObjectID *objectID;
@property (nonatomic) BOOL isGroup;
@property (copy, nonatomic) NSString *name;
@property (retain, nonatomic) REMColor *color;
@property (retain, nonatomic) NSString *badgeEmblem;
@property (copy, nonatomic) NSString *sortingStyle;
@property (copy, nonatomic) NSDate *pinnedDate;
@property (retain, nonatomic) NSUUID *mostRecentTargetTemplateIdentifier;
@property (nonatomic) BOOL showingLargeAttachments;
@property (retain, nonatomic) REMObjectID *parentAccountID;
@property (retain, nonatomic) REMObjectID *parentListID;
@property (readonly, nonatomic) NSString *displayName;
@property (retain, nonatomic) NSOrderedSet *reminderIDsMergeableOrdering;
@property (retain, nonatomic) NSData *reminderIDsMergeableOrderingData;
@property (retain, nonatomic) NSDictionary *reminderIDsOrderingHints;
@property (retain, nonatomic) REMResolutionTokenMap *resolutionTokenMap;
@property (retain, nonatomic) NSData *resolutionTokenMapData;
@property (retain, nonatomic) NSSet *reminderIDsToUndelete;
@property (retain, nonatomic) NSSet *childListIDsToUndelete;
@property (retain, nonatomic) NSSet *childSmartListIDsToUndelete;
@property (nonatomic) BOOL remindersICSDisplayOrderChanged;
@property (retain, nonatomic) REMObjectID *templateID;
@property (copy, nonatomic) NSString *sharedOwnerName;
@property (copy, nonatomic) NSString *sharedOwnerAddress;
@property (nonatomic) long long sharingStatus;
@property (retain, nonatomic) NSArray *sharees;
@property (retain, nonatomic) REMObjectID *sharedOwnerID;
@property (copy, nonatomic) NSDate *lastUserAccessDate;
@property (retain, nonatomic) NSArray *calDAVNotifications;
@property (retain, nonatomic) NSString *daExternalIdentificationTag;
@property (retain, nonatomic) NSDictionary *daBulkRequests;
@property (nonatomic) long long daDisplayOrder;
@property (nonatomic) BOOL daIsEventOnlyContainer;
@property (nonatomic) BOOL daIsReadOnly;
@property (nonatomic) BOOL daIsImmutable;
@property (nonatomic) BOOL daIsNotificationsCollection;
@property (nonatomic) BOOL isPlaceholder;
@property (copy, nonatomic) NSString *currentUserShareParticipantID;
@property (readonly, nonatomic) REMObjectID *remObjectID;
@property (copy, nonatomic) NSString *externalIdentifier;
@property (copy, nonatomic) NSString *externalModificationTag;
@property (copy, nonatomic) NSString *daSyncToken;
@property (copy, nonatomic) NSString *daPushKey;
@property (readonly, nonatomic) long long minimumSupportedVersion;
@property (readonly, nonatomic) long long effectiveMinimumSupportedVersion;

+ (id)objectIDWithUUID:(id)a0;
+ (id)reminderIDsMergeableOrderingFromReminderIDUUIDStringsJSONData:(id)a0 error:(id *)a1;
+ (id)newObjectID;
+ (id)reminderIDUUIDStringsJSONDataFromReminderIDsMergeableOrdering:(id)a0 error:(id *)a1;

- (void)setEffectiveMinimumSupportedVersion:(long long)a0;
- (void)encodeWithCoder:(id)a0;
- (id)cdKeyToStorageKeyMap;
- (unsigned long long)storeGeneration;
- (void)setMinimumSupportedVersion:(long long)a0;
- (id)initWithCoder:(id)a0;
- (void)setStoreGenerationIfNeeded:(unsigned long long)a0;
- (id)ekColor;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)debugDescription;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)optionalObjectID;
- (BOOL)isUnsupported;
- (id)initWithObjectID:(id)a0 accountID:(id)a1 name:(id)a2;
- (BOOL)hasDeserializedReminderIDsMergeableOrdering;
- (id)description;
- (id)initWithObjectID:(id)a0 accountID:(id)a1 name:(id)a2 isGroup:(BOOL)a3 reminderIDsMergeableOrderingData:(id)a4;
- (void).cxx_destruct;
- (id)initWithObjectID:(id)a0 accountID:(id)a1 name:(id)a2 isGroup:(BOOL)a3 reminderIDsMergeableOrdering:(id)a4;

@end
