@class LSApplicationWorkspace, NSString;

@interface _DKAppInstallMonitor : _DKMonitor <LSApplicationWorkspaceObserverProtocol, _DKHistoricalDeletingMonitor>

@property (retain, nonatomic) LSApplicationWorkspace *appWorkspace;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (copy, nonatomic) id /* block */ historicalDeletingHandler;

+ (id)eventStream;
+ (id)entitlements;
+ (id)_dateFromProxy:(id)a0;
+ (id)_eventWithAppProxy:(id)a0 didInstall:(BOOL)a1;
+ (id)_identifierFromProxy:(id)a0;
+ (id)_metadataFromProxy:(id)a0 didInstall:(BOOL)a1;

- (void)applicationsDidInstall:(id)a0;
- (id)init;
- (void)applicationsDidUninstall:(id)a0;
- (void)_applicationsDidChange:(id)a0 didInstall:(BOOL)a1;
- (void).cxx_destruct;

@end
