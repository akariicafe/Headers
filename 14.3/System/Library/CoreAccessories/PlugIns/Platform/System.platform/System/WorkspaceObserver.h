@class NSObject;
@protocol WorkspaceObserverDelegate, LSApplicationWorkspaceObserverProtocol;

@interface WorkspaceObserver : LSApplicationWorkspaceObserver {
    NSObject<LSApplicationWorkspaceObserverProtocol> *_delegate;
}

@property (nonatomic) NSObject<WorkspaceObserverDelegate> *delegate;

- (void)stopObserving;
- (void).cxx_destruct;
- (void)applicationsWillUninstall:(id)a0;
- (void)applicationsWillInstall:(id)a0;
- (void)startObserving;
- (void)applicationsDidUninstall:(id)a0;
- (void)applicationsDidInstall:(id)a0;

@end
