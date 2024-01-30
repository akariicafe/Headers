@class NSString, LSApplicationWorkspace;

@interface AppAttestKeychainCleanupController : NSObject <LSApplicationWorkspaceObserverProtocol> {
    LSApplicationWorkspace *_workspace;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (void)applicationsDidUninstall:(id)a0;
- (void)_registerActivity;
- (void)start;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;
- (void)_updateActivityCriteria:(id *)a0;

@end
