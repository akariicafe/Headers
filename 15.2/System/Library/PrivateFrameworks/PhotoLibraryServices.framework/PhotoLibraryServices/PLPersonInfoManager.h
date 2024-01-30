@class PLLazyObject, NSMutableDictionary, PLPhotoLibraryPathManager;

@interface PLPersonInfoManager : NSObject {
    NSMutableDictionary *_personDictsForPersonID;
    PLPhotoLibraryPathManager *_pathManager;
    PLLazyObject *_lazyAssetsdClient;
}

- (id)assetsdClient;
- (id)fullNameForPersonID:(id)a0;
- (id)lastNameForPersonID:(id)a0;
- (id)firstNameForPersonID:(id)a0;
- (id)emailForPersonID:(id)a0;
- (void).cxx_destruct;
- (id)initWithPathManager:(id)a0 lazyAssetsdClient:(id)a1;
- (void)setFirstName:(id)a0 lastName:(id)a1 fullName:(id)a2 email:(id)a3 forPersonID:(id)a4;
- (void)setEmails:(id)a0 phones:(id)a1 forInvitationRecordGUID:(id)a2;
- (void)deleteEmailsAndPhonesForInvitationRecordGUID:(id)a0;
- (void)clearCacheForPersonID:(id)a0;
- (void)_loadDictionariesIfNeeded;
- (void)removePersistedInfo;
- (id)phonesForInvitationRecordGUID:(id)a0;
- (id)emailsForInvitationRecordGUID:(id)a0;
- (id)plistPath;
- (id)personInfoForPersonID:(id)a0;
- (void)setPersonInfo:(id)a0 forPersonID:(id)a1;

@end
