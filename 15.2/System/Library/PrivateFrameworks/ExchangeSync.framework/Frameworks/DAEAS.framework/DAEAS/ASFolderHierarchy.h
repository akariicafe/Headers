@class ASAccount, NSMutableDictionary;

@interface ASFolderHierarchy : NSObject {
    ASAccount *_account;
    NSMutableDictionary *_folderCache;
    NSMutableDictionary *_folderByIdCache;
    id _delegate;
}

+ (id)_dataDirectoryPath;
+ (void)cleanUpFilesForAccountWithId:(id)a0;
+ (id)_folderCacheFilenameWithId:(id)a0;

- (id)initWithAccount:(id)a0;
- (id)folderForID:(id)a0;
- (id)folders;
- (id)description;
- (void)setDelegate:(id)a0;
- (void).cxx_destruct;
- (id)foldersTag;
- (id)folderIdsThatExternalClientsCareAbout;
- (id)folderIdsThatExternalClientsCareAboutForDataclasses:(long long)a0;
- (void)blowAwayFolderCache;
- (id)folderIdsForPersistentPush;
- (id)folderIdsForPersistentPushForClientID:(id)a0;
- (id)folderIdsForPersistentPushForDataclasses:(long long)a0 clientID:(id)a1;
- (void)clearLocalCache;
- (id)_folderCacheFilename;
- (void)_setFolderByIdCacheFromCurrentCache;
- (void)_setFolderPathsFromCurrentCache;
- (void)_blowAwayFolderCacheWithoutSavingOldFolderPaths;
- (id)folderCache;
- (id)_pathForFolder:(id)a0 usingCache:(id)a1 foldersById:(id)a2;
- (void)_setSavedFolderPathsThatExternalClientsCareAbout:(id)a0;
- (void)setFolderIdsThatExternalClientsCareAbout:(id)a0;
- (void)_pruneBadFolderIdsThatExternalClientsCareAbout;
- (void)_setFolderCache:(id)a0;
- (void)_restoreFromSavedFoldersThatExternalClientsCareAbout;
- (id)_savedFolderPathsThatExternalClientsCareAbout;
- (void)_identityMatchAndSetFoldersThatExternalClientsCareAbout:(id)a0;
- (id)_deviceIdInCache;
- (id)foldersUnderFolderWithID:(id)a0;
- (void)setFolderCache:(id)a0;
- (void)setFolderIdsForPersistentPush:(id)a0 clientID:(id)a1;

@end
