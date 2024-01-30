@class NSString;

@interface SBRestartManagerWorkspaceDataSource : NSObject <SBRestartManagerWorkspaceDataSource>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)isUILocked;
- (id)activePrimaryApplicationBundleID;
- (void)terminateAllApplicationsForReason:(long long)a0 description:(id)a1 completion:(id /* block */)a2;

@end
