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

- (id)userInfo;
- (void).cxx_destruct;
- (void)dealloc;
- (id)dcimPath;
- (void)setUserInfoObject:(id)a0 forKey:(id)a1;
- (id)miscPath;
- (id)_userInfoPath;
- (void)saveUserInfo;
- (void)reloadUserInfo;
- (id)posterImagePath;
- (void)recreateInfoPlist;
- (id)userInfoObjectForKey:(id)a0;
- (id)dcfDirectories;
- (void)clearDCFDirectories;
- (BOOL)hasChangedExternally;
- (void)setHasChangedExternally:(BOOL)a0;
- (void)lockDirectory;
- (void)unlockDirectory;
- (id)nextAvailableDirectory;
- (id)initWithDCIMPath:(id)a0;

@end
