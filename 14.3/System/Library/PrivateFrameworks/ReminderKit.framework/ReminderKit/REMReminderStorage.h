@class REMResolutionTokenMap, NSURL, REMCRMergeableStringDocument, NSDate, REMContactRepresentation, REMUserActivity, NSString, NSSet, REMDisplayDate, NSArray, NSData, REMObjectID, NSDateComponents;

@interface REMReminderStorage : NSObject <NSCopying, NSSecureCoding, REMObjectIDProviding, REMExternalSyncMetadataWritableProviding> {
    BOOL _hasDeserializedTitleDocument;
    BOOL _hasDeserializedNotesDocument;
    REMCRMergeableStringDocument *_deserializedTitleDocumentCache;
    REMCRMergeableStringDocument *_deserializedNotesDocumentCache;
    unsigned long long _storeGeneration;
    unsigned long long _copyGeneration;
}

@property (class, readonly) BOOL supportsSecureCoding;
@property (class, readonly, nonatomic) NSString *cdEntityName;

@property (retain, nonatomic) REMObjectID *accountID;
@property (retain, nonatomic) REMObjectID *objectID;
@property (retain, nonatomic) REMObjectID *listID;
@property (retain, nonatomic) REMObjectID *parentReminderID;
@property (retain, nonatomic) NSData *titleDocumentData;
@property (retain, nonatomic) NSData *notesDocumentData;
@property (retain, nonatomic) REMResolutionTokenMap *resolutionTokenMap;
@property (retain, nonatomic) NSData *resolutionTokenMapData;
@property (nonatomic, getter=isCompleted) BOOL completed;
@property (copy, nonatomic) NSDate *completionDate;
@property (retain, nonatomic) NSSet *subtaskIDsToUndelete;
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
@property (copy, nonatomic) REMDisplayDate *displayDate;
@property (readonly, copy, nonatomic) NSString *legacyNotificationIdentifier;
@property (readonly, nonatomic) REMObjectID *remObjectID;
@property (copy, nonatomic) NSString *externalIdentifier;
@property (copy, nonatomic) NSString *externalModificationTag;
@property (copy, nonatomic) NSString *daSyncToken;
@property (copy, nonatomic) NSString *daPushKey;

+ (id)titleReplicaIDSourceWithAccountID:(id)a0 reminderID:(id)a1;
+ (id)newObjectID;
+ (id)objectIDWithUUID:(id)a0;
+ (id)notesReplicaIDSourceWithAccountID:(id)a0 reminderID:(id)a1;
+ (BOOL)isDate:(id)a0 overdueAtReferenceDate:(id)a1 allDay:(BOOL)a2 showAllDayRemindersAsOverdue:(BOOL)a3;

- (id)cdKeyToStorageKeyMap;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)setStoreGenerationIfNeeded:(unsigned long long)a0;
- (unsigned long long)storeGeneration;
- (id)titleReplicaIDSource;
- (id)initWithObjectID:(id)a0 listID:(id)a1 accountID:(id)a2;
- (void)setTitleDocument:(id)a0;
- (unsigned long long)hash;
- (id)initWithCoder:(id)a0;
- (id)datesDebugDescriptionInTimeZone:(id)a0;
- (id)titleDocument;
- (id)notesDocument;
- (id)notesReplicaIDSource;
- (void)setNotesDocument:(id)a0;
- (void)updateDisplayDate;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (id)debugDescription;
- (void)encodeWithCoder:(id)a0;

@end
