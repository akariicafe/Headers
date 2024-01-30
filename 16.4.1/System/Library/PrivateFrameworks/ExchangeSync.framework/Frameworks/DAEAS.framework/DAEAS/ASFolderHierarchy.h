@class ASAccount, NSMutableDictionary;

@interface ASFolderHierarchy : NSObject {
    ASAccount *_account;
    NSMutableDictionary *_folderCache;
    NSMutableDictionary *_folderByIdCache;
    id _delegate;
}

+ (id)_dataDirectoryPath;
+ (id)_folderCacheFilenameWithId:(id)a0;
+ (void)cleanUpFilesForAccountWithId:(id)a0;

- (id)initWithAccount:(id)a0;
- (void)setDelegate:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (id)folders;
- (id)folderForID:(id)a0;
- (id)foldersTag;
- (void)clearLocalCache;
- (void)_setFolderPathsFromCurrentCache;
- (void)setFolderCache:(id)a0;
- (void)_blowAwayFolderCacheWithoutSavingOldFolderPaths;
- (id)_deviceIdInCache;
- (id)_folderCacheFilename;
- (void)_identityMatchAndSetFoldersThatExternalClientsCareAbout:(id)a0;
- (id)_pathForFolder:(id)a0 usingCache:(id)a1 foldersById:(id)a2;
- (void)_pruneBadFolderIdsThatExternalClientsCareAbout;
- (void)_restoreFromSavedFoldersThatExternalClientsCareAbout;
- (id)_savedFolderPathsThatExternalClientsCareAbout;
- (BOOL)_setFolderByIdCacheFromCurrentCache;
- (void)_setFolderCache:(id)a0;
- (void)_setSavedFolderPathsThatExternalClientsCareAbout:(id)a0;
- (void)blowAwayFolderCache;
- (id)folderCache;
- (id)folderIdsForPersistentPush;
- (id)folderIdsForPersistentPushForClientID:(id)a0;
- (id)folderIdsForPersistentPushForDataclasses:(long long)a0 clientID:(id)a1;
- (id)folderIdsThatExternalClientsCareAbout;
- (id)folderIdsThatExternalClientsCareAboutForDataclasses:(long long)a0;
- (id)foldersUnderFolderWithID:(id)a0;
- (void)setFolderIdsForPersistentPush:(id)a0 clientID:(id)a1;
- (void)setFolderIdsThatExternalClientsCareAbout:(id)a0;

@end
