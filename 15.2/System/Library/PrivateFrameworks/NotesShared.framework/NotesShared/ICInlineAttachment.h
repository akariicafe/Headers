@class NSString, NSAttributedString, NSDate;

@interface ICInlineAttachment : ICBaseAttachment <ICCloudObject>

@property (readonly, nonatomic) BOOL needsToBeDeletedFromCloud;
@property (readonly, nonatomic) BOOL needsToBePushedToCloud;
@property (readonly, nonatomic) BOOL needsToBeFetchedFromCloud;
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
+ (id)existingCloudObjectForRecordID:(id)a0 accountID:(id)a1 context:(id)a2;
+ (void)enumerateInlineAttachmentsInContext:(id)a0 batchSize:(unsigned long long)a1 visibleOnly:(BOOL)a2 saveAfterBatch:(BOOL)a3 usingBlock:(id /* block */)a4;
+ (id)predicateForTypeUTI:(id)a0;
+ (id)predicateForTokenContentIdentifier:(id)a0;
+ (id)recentlyUsedDatesForHashtagsStandardizedContents:(id)a0 context:(id)a1;
+ (void)purgeAttachment:(id)a0;
+ (id)predicateForUnsupportedAttachmentsInContext:(id)a0;
+ (BOOL)isHashtagStandardizedContent:(id)a0 usedInAccount:(id)a1;
+ (id)newAttachmentWithIdentifier:(id)a0 typeUTI:(id)a1 altText:(id)a2 tokenContentIdentifier:(id)a3 note:(id)a4 parentAttachment:(id)a5;
+ (void)reviveOrTouchHashtag:(id)a0;
+ (unsigned long long)countOfVisibleInlineAttachmentsForHashtagStandardizedContent:(id)a0 account:(id)a1;
+ (id)newHashtagAttachmentWithIdentifier:(id)a0 hashtagText:(id)a1 creatingHashtagIfNecessary:(BOOL)a2 note:(id)a3 parentAttachment:(id)a4;
+ (id)newHashtagAttachmentWithIdentifier:(id)a0 forHashtag:(id)a1 note:(id)a2 parentAttachment:(id)a3;
+ (id)newMentionAttachmentWithIdentifier:(id)a0 mentionText:(id)a1 userRecordName:(id)a2 note:(id)a3 parentAttachment:(id)a4;
+ (id)cloneInlineAttachmentWithIdentifier:(id)a0 context:(id)a1;
+ (void)replaceInlineAttachmentsWithStandardizedContent:(id)a0 newDisplayText:(id)a1 context:(id)a2;
+ (id)existingInlineAttachmentWithTokenContentIdentifier:(id)a0 typeUTI:(id)a1 context:(id)a2;
+ (id)canonicalHashtagAttachmentsInContext:(id)a0;
+ (id)predicateForMentionsInContext:(id)a0;
+ (void)regenerateTokenContentIdentifierForHashtagAttachmentsInContext:(id)a0 currentTokenContentIdentifier:(id)a1 save:(BOOL)a2;
+ (id)noteFromAttachmentRecord:(id)a0 accountID:(id)a1 context:(id)a2;

- (id)recordZoneName;
- (id)ic_loggingValues;
- (id)clone;
- (BOOL)hasAllMandatoryFields;
- (BOOL)isInICloudAccount;
- (void)deleteFromLocalDatabase;
- (long long)intrinsicNotesVersion;
- (void)mergeDataFromRecord:(id)a0 accountID:(id)a1 force:(BOOL)a2;
- (id)newlyCreatedRecord;
- (BOOL)shouldSyncMinimumSupportedNotesVersion;
- (id)recordType;
- (void)markForDeletion;
- (BOOL)supportsDeletionByTTL;
- (void)objectWasFetchedFromCloudWithRecord:(id)a0 accountID:(id)a1 force:(BOOL)a2;
- (void)unmarkForDeletion;
- (void)loadFromArchive:(const void *)a0 dataPersister:(id)a1 withIdentifierMap:(id)a2;
- (void)saveToArchive:(void *)a0 dataPersister:(id)a1;
- (id)fallbackDisplayText;
- (id)nonNilAltText;
- (void)propagateDeletionToHashtagForMarkForDeletion:(BOOL)a0;
- (struct _NSRange { unsigned long long x0; unsigned long long x1; })displayTextRangeForSearchRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0 inSearchableString:(id)a1;
- (void)updateMarkedForDeletionStateInlineAttachmentIsInUse:(BOOL)a0;
- (id)parentAttachmentFromRecord:(id)a0 accountID:(id)a1 context:(id)a2;

@end
