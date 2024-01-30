@class NSString;

@interface MapsSuggestionsMapsInstalledTriggeringToggle : MapsSuggestionsTriggeringToggle <LSApplicationWorkspaceObserverProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)didRemoveLastObserver;
- (void)didAddFirstObserver;
- (void)applicationsDidUninstall:(id)a0;
- (void)applicationsDidInstall:(id)a0;
- (BOOL)shouldRun;

@end
