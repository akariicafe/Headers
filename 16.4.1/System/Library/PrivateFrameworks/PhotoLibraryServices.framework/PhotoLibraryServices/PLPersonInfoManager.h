@class PLLazyObject, NSMutableDictionary, PLPhotoLibraryPathManager;

@interface PLPersonInfoManager : NSObject {
    NSMutableDictionary *_personDictsForPersonID;
    PLPhotoLibraryPathManager *_pathManager;
    PLLazyObject *_lazyAssetsdClient;
}

- (id)assetsdClient;
- (id)plistPath;
- (void)dealloc;
- (void).cxx_destruct;
- (id)emailForPersonID:(id)a0;
- (id)emailsForInvitationRecordGUID:(id)a0;
- (id)firstNameForPersonID:(id)a0;
- (id)fullNameForPersonID:(id)a0;
- (id)lastNameForPersonID:(id)a0;
- (id)phonesForInvitationRecordGUID:(id)a0;
- (void)_loadDictionariesIfNeeded;
- (void)clearCacheForPersonID:(id)a0;
- (void)deleteEmailsAndPhonesForInvitationRecordGUID:(id)a0;
- (id)initWithPathManager:(id)a0 lazyAssetsdClient:(id)a1;
- (id)personInfoForPersonID:(id)a0;
- (void)removePersistedInfo;
- (void)setEmails:(id)a0 phones:(id)a1 forInvitationRecordGUID:(id)a2;
- (void)setFirstName:(id)a0 lastName:(id)a1 fullName:(id)a2 email:(id)a3 forPersonID:(id)a4;
- (void)setPersonInfo:(id)a0 forPersonID:(id)a1;

@end
