@class NSData, NSString, REMObjectID, NSArray, NSOrderedSet, REMResolutionTokenMap, NSDictionary, REMColor, NSSet, NSDate;

@interface REMListStorage : NSObject <NSCopying, NSSecureCoding, REMSortingStyleReadWriteProtocol, REMObjectIDProviding, REMExternalSyncMetadataWritableProviding> {
    NSOrderedSet *_reminderIDsMergeableOrdering;
    unsigned long long _storeGeneration;
    unsigned long long _copyGeneration;
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
@property (nonatomic) BOOL remindersICSDisplayOrderChanged;
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
@property (copy, nonatomic) NSString *sortingStyle;
@property (nonatomic) long long sortingDirection;
@property (readonly, nonatomic) REMObjectID *remObjectID;
@property (copy, nonatomic) NSString *externalIdentifier;
@property (copy, nonatomic) NSString *externalModificationTag;
@property (copy, nonatomic) NSString *daSyncToken;
@property (copy, nonatomic) NSString *daPushKey;

+ (id)newObjectID;
+ (id)reminderIDUUIDStringsJSONDataFromReminderIDsMergeableOrdering:(id)a0 error:(id *)a1;
+ (id)objectIDWithUUID:(id)a0;
+ (id)reminderIDsMergeableOrderingFromReminderIDUUIDStringsJSONData:(id)a0 error:(id *)a1;

- (id)ekColor;
- (id)cdKeyToStorageKeyMap;
- (void).cxx_destruct;
- (id)initWithObjectID:(id)a0 accountID:(id)a1 name:(id)a2 isGroup:(BOOL)a3 reminderIDsMergeableOrdering:(id)a4;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)setStoreGenerationIfNeeded:(unsigned long long)a0;
- (unsigned long long)storeGeneration;
- (unsigned long long)hash;
- (id)initWithCoder:(id)a0;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (BOOL)hasDeserializedReminderIDsMergeableOrdering;
- (id)initWithObjectID:(id)a0 accountID:(id)a1 name:(id)a2 isGroup:(BOOL)a3 reminderIDsMergeableOrderingData:(id)a4;
- (id)debugDescription;
- (id)initWithObjectID:(id)a0 accountID:(id)a1 name:(id)a2;
- (void)encodeWithCoder:(id)a0;

@end
