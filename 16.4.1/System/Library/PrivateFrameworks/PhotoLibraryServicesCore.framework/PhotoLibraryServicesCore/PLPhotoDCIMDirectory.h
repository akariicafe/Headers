@class NSString, NSMutableArray, NSMutableDictionary;

@interface PLPhotoDCIMDirectory : NSObject {
    NSString *_dcimPath;
    NSString *_miscPath;
    NSString *_posterImagePath;
    NSMutableArray *_topLevelDirectories;
    struct __CFDictionary { } *_topLevelDirectoriesByNumber;
    struct __CFSet { } *_unusableTopLevelDirectoryNumbers;
    int _lastUsedDirectoryNumber;
    NSMutableDictionary *_userInfo;
    BOOL _userInfoDidChange;
    struct flock { long long x0; long long x1; int x2; short x3; short x4; } *_dcimDirectoryLock;
    int _dcimDirectoryLockDescriptor;
}

- (void)setUserInfoObject:(id)a0 forKey:(id)a1;
- (void)dealloc;
- (id)userInfo;
- (void).cxx_destruct;
- (void)unlockDirectory;
- (id)initWithDCIMPath:(id)a0;
- (void)lockDirectory;
- (id)nextAvailableDirectory;
- (id)posterImagePath;
- (id)_userInfoPath;
- (void)clearDCFDirectories;
- (id)dcfDirectories;
- (id)dcimPath;
- (BOOL)hasChangedExternally;
- (id)miscPath;
- (void)recreateInfoPlist;
- (void)reloadUserInfo;
- (void)saveUserInfo;
- (void)setHasChangedExternally:(BOOL)a0;
- (id)userInfoObjectForKey:(id)a0;

@end
