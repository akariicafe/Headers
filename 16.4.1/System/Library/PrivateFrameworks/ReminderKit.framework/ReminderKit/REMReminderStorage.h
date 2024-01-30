@class REMResolutionTokenMap, NSURL, REMCRMergeableStringDocument, NSDate, REMContactRepresentation, REMUserActivity, NSString, NSSet, REMDisplayDate, NSArray, NSData, REMObjectID, NSDateComponents;

@interface REMReminderStorage : NSObject <NSCopying, NSSecureCoding, REMObjectIDProviding, REMExternalSyncMetadataWritableProviding, REMObjectStorageSupportedVersionProviding> {
    BOOL _hasDeserializedTitleDocument;
    BOOL _hasDeserializedNotesDocument;
    REMCRMergeableStringDocument *_deserializedTitleDocumentCache;
    REMCRMergeableStringDocument *_deserializedNotesDocumentCache;
    unsigned long long _storeGeneration;
    unsigned long long _copyGeneration;
    long long minimumSupportedVersion;
    long long effectiveMinimumSupportedVersion;
}

@property (class, readonly) BOOL supportsSecureCoding;
@property (class, readonly, nonatomic) NSString *cdEntityName;

@property (retain, nonatomic) NSString *titleAsString;
@property (retain, nonatomic) NSString *notesAsString;
@property (retain, nonatomic) REMObjectID *accountID;
@property (retain, nonatomic) REMObjectID *objectID;
@property (retain, nonatomic) REMObjectID *listID;
@property (retain, nonatomic) REMObjectID *parentReminderID;
@property (retain, nonatomic) NSData *titleDocumentData;
@property (retain, nonatomic) NSData *notesDocumentData;
@property (retain, nonatomic) NSString *primaryLocaleInferredFromLastUsedKeyboard;
@property (retain, nonatomic) REMResolutionTokenMap *resolutionTokenMap;
@property (retain, nonatomic) NSData *resolutionTokenMapData;
@property (nonatomic, getter=isCompleted) BOOL completed;
@property (copy, nonatomic) NSDate *completionDate;
@property (retain, nonatomic) NSSet *subtaskIDsToUndelete;
@property (retain, nonatomic) NSSet *hashtagIDsToUndelete;
@property (nonatomic) unsigned long long priority;
@property (copy, nonatomic) NSDateComponents *startDateComponents;
@property (copy, nonatomic) NSDateComponents *dueDateComponents;
@property (copy, nonatomic) NSString *timeZone;
@property (nonatomic) BOOL allDay;
@property (copy, nonatomic) NSDate *creationDate;
@property (copy, nonatomic) NSDate *lastModifiedDate;
@property (retain, nonatomic) NSArray *recurrenceRules;
@property (retain, nonatomic) NSArray *attachments;
@property (retain, nonatomic) NSArray *alarms;
@property (retain, nonatomic) REMContactRepresentation *contactHandles;
@property (nonatomic) unsigned long long icsDisplayOrder;
@property (copy, nonatomic) NSURL *icsUrl;
@property (retain, nonatomic) NSData *importedICSData;
@property (copy, nonatomic) NSString *daCalendarItemUniqueIdentifier;
@property (copy, nonatomic) REMUserActivity *userActivity;
@property (copy, nonatomic) NSData *siriFoundInAppsData;
@property (nonatomic) long long siriFoundInAppsUserConfirmation;
@property (copy, nonatomic) NSDate *lastBannerPresentationDate;
@property (nonatomic) long long flagged;
@property (readonly, nonatomic) BOOL isOverdue;
@property (readonly, nonatomic) BOOL isRecurrent;
@property (retain, nonatomic) NSSet *assignments;
@property (retain, nonatomic) NSSet *hashtags;
@property (copy, nonatomic) REMDisplayDate *displayDate;
@property (readonly, copy, nonatomic) NSString *legacyNotificationIdentifier;
@property (readonly, nonatomic) REMObjectID *remObjectID;
@property (copy, nonatomic) NSString *externalIdentifier;
@property (copy, nonatomic) NSString *externalModificationTag;
@property (copy, nonatomic) NSString *daSyncToken;
@property (copy, nonatomic) NSString *daPushKey;
@property (readonly, nonatomic) long long minimumSupportedVersion;
@property (readonly, nonatomic) long long effectiveMinimumSupportedVersion;

+ (id)notesReplicaIDSourceWithAccountID:(id)a0 reminderID:(id)a1;
+ (id)titleReplicaIDSourceWithAccountID:(id)a0 reminderID:(id)a1;
+ (id)objectIDWithUUID:(id)a0;
+ (BOOL)isDate:(id)a0 overdueAtReferenceDate:(id)a1 allDay:(BOOL)a2 showAllDayRemindersAsOverdue:(BOOL)a3;
+ (id)newObjectID;

- (void)setEffectiveMinimumSupportedVersion:(long long)a0;
- (void)encodeWithCoder:(id)a0;
- (id)cdKeyToStorageKeyMap;
- (unsigned long long)storeGeneration;
- (void)setMinimumSupportedVersion:(long long)a0;
- (id)initWithCoder:(id)a0;
- (void)setStoreGenerationIfNeeded:(unsigned long long)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)debugDescription;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)optionalObjectID;
- (BOOL)isUnsupported;
- (id)description;
- (void).cxx_destruct;
- (id)notesDocument;
- (id)titleDocument;
- (id)datesDebugDescriptionInTimeZone:(id)a0;
- (id)initWithObjectID:(id)a0 listID:(id)a1 accountID:(id)a2;
- (id)notesReplicaIDSource;
- (void)setNotesAsStringByCDIngestor:(id)a0;
- (void)setNotesDocument:(id)a0;
- (void)setTitleAsStringByCDIngestor:(id)a0;
- (void)setTitleDocument:(id)a0;
- (id)titleReplicaIDSource;
- (void)updateDisplayDate;

@end
