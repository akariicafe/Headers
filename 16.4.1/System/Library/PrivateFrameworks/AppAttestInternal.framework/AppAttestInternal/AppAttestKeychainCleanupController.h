@class NSString, LSApplicationWorkspace;

@interface AppAttestKeychainCleanupController : NSObject <LSApplicationWorkspaceObserverProtocol> {
    LSApplicationWorkspace *_workspace;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (void)_registerActivity;
- (void)dealloc;
- (void)_updateActivityCriteria:(id *)a0;
- (id)init;
- (void)start;
- (void)applicationsDidUninstall:(id)a0;
- (void).cxx_destruct;

@end
