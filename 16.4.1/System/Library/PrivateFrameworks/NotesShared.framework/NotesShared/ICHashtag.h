@class NSString, CKRecordID, ICAccount, NSDate, NSManagedObjectID;

@interface ICHashtag : ICCloudSyncingObject <ICCloudObject>

@property (class, readonly, copy, nonatomic) NSString *localizedSectionTitle;

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
@property (retain, nonatomic) ICAccount *account;
@property (copy, nonatomic) NSDate *creationDate;
@property (copy, nonatomic) NSString *displayText;
@property (copy, nonatomic) NSString *standardizedContent;

+ (id)newCloudObjectForRecord:(id)a0 accountID:(id)a1 context:(id)a2;
+ (id)canonicalHashtagsInContext:(id)a0;
+ (id)hashtagWithDisplayText:(id)a0 account:(id)a1 createIfNecessary:(BOOL)a2;
+ (id)hashtagWithStandardizedContent:(id)a0 account:(id)a1;
+ (void)enumerateHashtagsInContext:(id)a0 batchSize:(unsigned long long)a1 saveAfterBatch:(BOOL)a2 usingBlock:(id /* block */)a3;
+ (id)predicateForHashtagWithStandardizedContent:(id)a0 onlyVisible:(BOOL)a1 account:(id)a2;
+ (id)allVisibleHashtagsForAccount:(id)a0;
+ (id)allVisibleHashtagsInContext:(id)a0;
+ (void)dedupeHashtagsInAccount:(id)a0;
+ (void)dedupeHashtagsInAccount:(id)a0 atomicityExploitationCallback:(id /* block */)a1;
+ (id)existingCloudObjectForRecordID:(id)a0 accountID:(id)a1 context:(id)a2;
+ (id)hashtagObjectIDWithStandardizedContent:(id)a0 context:(id)a1;
+ (id)hashtagObjectIDsWithStandardizedContents:(id)a0 context:(id)a1;
+ (id)hashtagWithIdentifier:(id)a0 context:(id)a1;
+ (id)hashtagWithStandardizedContent:(id)a0 onlyVisible:(BOOL)a1 account:(id)a2;
+ (id)hashtagsWithStandardizedContent:(id)a0 context:(id)a1;
+ (id)hashtagsWithStandardizedContent:(id)a0 onlyVisible:(BOOL)a1 account:(id)a2 context:(id)a3;
+ (id)newHashtagWithIdentifier:(id)a0 displayText:(id)a1 account:(id)a2;
+ (void)purgeHashtag:(id)a0;
+ (BOOL)regenerateStandardizedContentForAllHashtagsInContext:(id)a0 hasChanges:(BOOL *)a1;
+ (id)renameHashtagsWithStandardizedContent:(id)a0 newDisplayText:(id)a1 context:(id)a2;
+ (id)standardizedHashtagRepresentationForDisplayText:(id)a0;

- (BOOL)supportsDeletionByTTL;
- (id)recordZoneName;
- (id)cloudAccount;
- (BOOL)canRenameTagWithNewDisplayText:(id)a0;
- (void)deleteFromLocalDatabase;
- (id)ic_loggingValues;
- (id)makeCloudKitRecordForApproach:(long long)a0 mergeableFieldState:(id)a1;
- (BOOL)mergeCloudKitRecord:(id)a0 accountID:(id)a1 approach:(long long)a2 mergeableFieldState:(id)a3;
- (BOOL)shouldSyncMinimumSupportedNotesVersion;

@end
