@class NSString, ICAccount, NSDate;

@interface ICHashtag : ICCloudSyncingObject <ICCloudObject>

@property (class, readonly, copy, nonatomic) NSString *localizedSectionTitle;

@property (readonly, nonatomic) BOOL needsToBeDeletedFromCloud;
@property (readonly, nonatomic) BOOL needsToBePushedToCloud;
@property (readonly, nonatomic) BOOL needsToBeFetchedFromCloud;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) ICAccount *account;
@property (copy, nonatomic) NSDate *creationDate;
@property (copy, nonatomic) NSString *displayText;
@property (copy, nonatomic) NSString *standardizedContent;

+ (id)newCloudObjectForRecord:(id)a0 accountID:(id)a1 context:(id)a2;
+ (id)existingCloudObjectForRecordID:(id)a0 accountID:(id)a1 context:(id)a2;
+ (id)hashtagWithIdentifier:(id)a0 context:(id)a1;
+ (id)newHashtagWithIdentifier:(id)a0 displayText:(id)a1 account:(id)a2;
+ (void)purgeHashtag:(id)a0;
+ (void)enumerateHashtagsInContext:(id)a0 batchSize:(unsigned long long)a1 saveAfterBatch:(BOOL)a2 usingBlock:(id /* block */)a3;
+ (id)allVisibleHashtagsInContext:(id)a0;
+ (id)standardizedHashtagRepresentationForDisplayText:(id)a0;
+ (id)hashtagWithStandardizedContent:(id)a0 account:(id)a1;
+ (id)hashtagWithDisplayText:(id)a0 account:(id)a1 createIfNecessary:(BOOL)a2;
+ (id)hashtagWithStandardizedContent:(id)a0 onlyVisible:(BOOL)a1 account:(id)a2;
+ (id)predicateForHashtagWithStandardizedContent:(id)a0 onlyVisible:(BOOL)a1 account:(id)a2;
+ (void)dedupeHashtagsInAccount:(id)a0 atomicityExploitationCallback:(id /* block */)a1;
+ (id)canonicalHashtagsInContext:(id)a0;
+ (id)allVisibleHashtagsForAccount:(id)a0;
+ (void)dedupeHashtagsInAccount:(id)a0;
+ (BOOL)regenerateStandardizedContentForAllHashtagsInContext:(id)a0 hasChanges:(BOOL *)a1;

- (id)recordZoneName;
- (id)cloudAccount;
- (id)ic_loggingValues;
- (BOOL)isInICloudAccount;
- (void)deleteFromLocalDatabase;
- (void)mergeDataFromRecord:(id)a0 accountID:(id)a1 force:(BOOL)a2;
- (id)newlyCreatedRecord;
- (BOOL)shouldSyncMinimumSupportedNotesVersion;
- (id)recordType;
- (BOOL)supportsDeletionByTTL;
- (BOOL)canRenameTagWithNewDisplayText:(id)a0;

@end
