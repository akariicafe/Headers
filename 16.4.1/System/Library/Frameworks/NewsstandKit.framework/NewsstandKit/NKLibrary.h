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

- (id)retain;
- (void)_applicationDidEnterBackground:(id)a0;
- (oneway void)release;
- (void)_saveIfNeeded;
- (id)_fileManager;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)_applicationWillTerminate:(id)a0;
- (id)init;
- (id)description;
- (id)autorelease;
- (void)_load;
- (unsigned long long)retainCount;
- (id)_contentURL;
- (id)_libraryURL;
- (void)__actuallySave;
- (id)_appSupportURL;
- (BOOL)_canPerformBackgroundDownloads;
- (void)_didFinishLaunchingWasCalled;
- (void)_issueChanged:(id)a0;
- (id)_issueForDirectory:(id)a0;
- (void)_markAsDirtyAndSave;
- (void)_markIssuesAndSave;
- (void)_performBackgroundTask:(id /* block */)a0 withDescription:(id)a1;
- (void)_saveIfNeededAfterDelay:(double)a0;
- (void)_saveNowIfNeeded;
- (void)_setIssues:(id)a0;
- (id)addIssueWithName:(id)a0 date:(id)a1;
- (id)issueWithName:(id)a0;
- (void)removeIssue:(id)a0;

@end
