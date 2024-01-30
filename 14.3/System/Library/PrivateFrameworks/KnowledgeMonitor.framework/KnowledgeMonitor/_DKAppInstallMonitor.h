@class LSApplicationWorkspace, NSString;

@interface _DKAppInstallMonitor : _DKMonitor <LSApplicationWorkspaceObserverProtocol, _DKHistoricalDeletingMonitor>

@property (retain, nonatomic) LSApplicationWorkspace *appWorkspace;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (copy, nonatomic) id /* block */ historicalDeletingHandler;

+ (id)_dateFromProxy:(id)a0;
+ (id)_eventWithAppProxy:(id)a0 didInstall:(BOOL)a1;
+ (id)entitlements;
+ (id)_identifierFromProxy:(id)a0;
+ (id)eventStream;
+ (id)_metadataFromProxy:(id)a0 didInstall:(BOOL)a1;

- (void)_applicationsDidChange:(id)a0 didInstall:(BOOL)a1;
- (id)init;
- (void).cxx_destruct;
- (void)applicationsDidUninstall:(id)a0;
- (void)applicationsDidInstall:(id)a0;

@end
