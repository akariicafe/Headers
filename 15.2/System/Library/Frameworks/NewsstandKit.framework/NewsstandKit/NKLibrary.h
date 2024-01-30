@class NSArray, NKIssue, NSMapTable, NSURL, NSFileManager;

@interface NKLibrary : NSObject {
    NSArray *_issues;
    NKIssue *_currentlyReadingIssue;
    NSMapTable *_issuesByName;
    NSMapTable *_issuesByDirectory;
    NSURL *_contentURL;
    NSFileManager *_fileManager;
    NSURL *_appSupportURL;
    NSURL *_libraryURL;
    BOOL _inited;
    int _needsSaving;
    int _savePending;
    NSArray *_assetsFromLaunch;
}

@property (readonly) NSArray *issues;
@property (readonly) NSArray *downloadingAssets;
@property (retain) NKIssue *currentlyReadingIssue;

+ (id)allocWithZone:(struct _NSZone { } *)a0;
+ (id)sharedLibrary;
+ (BOOL)_isNewsstandApp;

- (id)_fileManager;
- (unsigned long long)retainCount;
- (id)retain;
- (id)description;
- (void)_saveIfNeeded;
- (id)autorelease;
- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)_applicationDidEnterBackground:(id)a0;
- (id)_libraryURL;
- (id)_contentURL;
- (void)_load;
- (oneway void)release;
- (void)_applicationWillTerminate:(id)a0;
- (void)_didFinishLaunchingWasCalled;
- (void)_markIssuesAndSave;
- (id)issueWithName:(id)a0;
- (void)_setIssues:(id)a0;
- (void)_performBackgroundTask:(id /* block */)a0 withDescription:(id)a1;
- (void)_markAsDirtyAndSave;
- (id)_appSupportURL;
- (void)__actuallySave;
- (void)_saveIfNeededAfterDelay:(double)a0;
- (void)_saveNowIfNeeded;
- (id)addIssueWithName:(id)a0 date:(id)a1;
- (void)removeIssue:(id)a0;
- (id)_issueForDirectory:(id)a0;
- (BOOL)_canPerformBackgroundDownloads;
- (void)_issueChanged:(id)a0;

@end
