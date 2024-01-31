@class NSObject;
@protocol WorkspaceObserverDelegate, LSApplicationWorkspaceObserverProtocol;

@interface WorkspaceObserver : LSApplicationWorkspaceObserver {
    NSObject<LSApplicationWorkspaceObserverProtocol> *_delegate;
}

@property (nonatomic) NSObject<WorkspaceObserverDelegate> *delegate;

- (void)startObserving;
- (void)applicationsDidInstall:(id)a0;
- (void)applicationsDidUninstall:(id)a0;
- (void)stopObserving;
- (void)applicationsWillInstall:(id)a0;
- (void)applicationsWillUninstall:(id)a0;
- (void).cxx_destruct;

@end
