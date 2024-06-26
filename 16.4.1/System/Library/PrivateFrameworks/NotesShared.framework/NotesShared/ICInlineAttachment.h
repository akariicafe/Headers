@class NSString, CKRecordID, NSDate, NSAttributedString, NSManagedObjectID;

@interface ICInlineAttachment : ICBaseAttachment <ICCloudObject>

@property (readonly, copy, nonatomic) CKRecordID *recordID;
@property (readonly, copy, nonatomic) NSString *recordType;
@property (readonly, nonatomic) BOOL needsToSaveUserSpecificRecord;
@property (readonly, nonatomic) BOOL wantsUserSpecificRecord;
@property (readonly, copy, nonatomic) CKRecordID *userSpecificRecordID;
@property (readonly, nonatomic) BOOL needsToBeDeletedFromCloud;
@property (readonly, nonatomic) BOOL needsToBePushedToCloud;
@property (readonly, nonatomic) BOOL needsToBeFetchedFromCloud;
@property (readonly, nonatomic) BOOL isInICloudAccount;
@property (readonly, nonatomic) BOOL isValidObject;
@property (readonly, copy, nonatomic) NSString *loggingDescription;
@property (readonly, nonatomic) NSManagedObjectID *objectID;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) BOOL isMentionAttachment;
@property (readonly, nonatomic) BOOL isHashtagAttachment;
@property (copy, nonatomic) NSDate *creationDate;
@property (readonly, nonatomic) NSString *displayText;
@property (copy, nonatomic) NSString *altText;
@property (nonatomic) int mentionNotificationState;
@property (nonatomic) unsigned long long mentionNotificationAttemptCount;
@property (copy, nonatomic) NSString *tokenContentIdentifier;
@property (readonly, nonatomic) NSAttributedString *searchableTextContentInNote;
@property (readonly, nonatomic) short attachmentType;
@property (nonatomic) BOOL animateInsertion;

+ (id)newCloudObjectForRecord:(id)a0 accountID:(id)a1 context:(id)a2;
+ (id)cloneInlineAttachmentWithIdentifier:(id)a0 context:(id)a1;
+ (id)newAttachmentWithIdentifier:(id)a0 typeUTI:(id)a1 altText:(id)a2 tokenContentIdentifier:(id)a3 note:(id)a4 parentAttachment:(id)a5;
+ (id)newHashtagAttachmentWithIdentifier:(id)a0 forHashtag:(id)a1 note:(id)a2 parentAttachment:(id)a3;
+ (id)newHashtagAttachmentWithIdentifier:(id)a0 hashtagText:(id)a1 creatingHashtagIfNecessary:(BOOL)a2 note:(id)a3 parentAttachment:(id)a4;
+ (id)newMentionAttachmentWithIdentifier:(id)a0 mentionText:(id)a1 userRecordName:(id)a2 note:(id)a3 parentAttachment:(id)a4;
+ (id)predicateForMentionsInContext:(id)a0;
+ (id)canonicalHashtagAttachmentsInContext:(id)a0;
+ (unsigned long long)countOfNonTrashFolderVisibleInlineAttachmentsForHashtagStandardizedContent:(id)a0 account:(id)a1;
+ (unsigned long long)countOfVisibleInlineAttachmentsForHashtagStandardizedContent:(id)a0 account:(id)a1;
+ (unsigned long long)countOfVisibleInlineAttachmentsForHashtagStandardizedContent:(id)a0 includingTrash:(BOOL)a1 account:(id)a2;
+ (void)enumerateInlineAttachmentsInContext:(id)a0 batchSize:(unsigned long long)a1 visibleOnly:(BOOL)a2 saveAfterBatch:(BOOL)a3 usingBlock:(id /* block */)a4;
+ (id)existingCloudObjectForRecordID:(id)a0 accountID:(id)a1 context:(id)a2;
+ (id)existingInlineAttachmentWithTokenContentIdentifier:(id)a0 typeUTI:(id)a1 context:(id)a2;
+ (BOOL)isHashtagStandardizedContent:(id)a0 usedInAccount:(id)a1;
+ (id)noteFromAttachmentRecord:(id)a0 accountID:(id)a1 context:(id)a2;
+ (id)predicateForTokenContentIdentifier:(id)a0;
+ (id)predicateForTypeUTI:(id)a0;
+ (id)predicateForUnsupportedAttachmentsInContext:(id)a0;
+ (void)purgeAttachment:(id)a0;
+ (id)recentlyUsedDatesForHashtagsStandardizedContents:(id)a0 context:(id)a1;
+ (void)regenerateTokenContentIdentifierForHashtagAttachmentsInContext:(id)a0 currentTokenContentIdentifier:(id)a1 save:(BOOL)a2;
+ (void)reviveOrTouchHashtag:(id)a0;

- (id)clone;
- (BOOL)supportsDeletionByTTL;
- (id)recordZoneName;
- (void)markForDeletion;
- (void)unmarkForDeletion;
- (void)updateMarkedForDeletionStateInlineAttachmentIsInUse:(BOOL)a0;
- (void)deleteFromLocalDatabase;
- (struct _NSRange { unsigned long long x0; unsigned long long x1; })displayTextRangeForSearchRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0 inSearchableString:(id)a1;
- (id)fallbackDisplayText;
- (BOOL)hasAllMandatoryFields;
- (id)ic_loggingValues;
- (long long)intrinsicNotesVersionForScenario:(unsigned long long)a0;
- (void)loadFromArchive:(const void *)a0 dataPersister:(id)a1 withIdentifierMap:(id)a2;
- (id)makeCloudKitRecordForApproach:(long long)a0 mergeableFieldState:(id)a1;
- (BOOL)mergeCloudKitRecord:(id)a0 accountID:(id)a1 approach:(long long)a2 mergeableFieldState:(id)a3;
- (id)nonNilAltText;
- (void)objectWasFetchedFromCloudWithRecord:(id)a0 accountID:(id)a1 force:(BOOL)a2;
- (id)parentAttachmentFromRecord:(id)a0 accountID:(id)a1 context:(id)a2;
- (void)propagateDeletionToHashtagForMarkForDeletion:(BOOL)a0;
- (BOOL)saveToArchive:(void *)a0 dataPersister:(id)a1 error:(id *)a2;
- (BOOL)shouldSyncMinimumSupportedNotesVersion;
- (void)writeMergeableFieldStateIfNecessary:(id)a0;

@end
