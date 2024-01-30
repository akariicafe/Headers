@class NSObject, NSMutableSet, NSUserDefaults;
@protocol OS_os_log;

@interface DEDPersistence : NSObject

@property (retain) NSMutableSet *bugSessionIdentifiers;
@property (retain) NSUserDefaults *userDefaults;
@property (retain) NSObject<OS_os_log> *log;

+ (id)sharedInstance;

- (id)init;
- (void).cxx_destruct;
- (void)removeBugSession:(id)a0;
- (void)updateBugSession:(id)a0;
- (id)loadSavedBugSessions;
- (BOOL)canProceedWithDevice:(id)a0;
- (id)_indexKeyForBugSessionIdentifier:(id)a0;
- (id)_indexKeyForBugSession:(id)a0;
- (id)loadSavedSessionsFromPlist:(id)a0;
- (void)validateSandboxAccess;

@end
