@class NSObject;
@protocol LSApplicationWorkspaceObserverProtocol, ATWorkspaceObserverDelegate;

@interface ATWorkspaceObserver : LSApplicationWorkspaceObserver {
    NSObject<LSApplicationWorkspaceObserverProtocol> *_delegate;
}

@property (nonatomic) NSObject<ATWorkspaceObserverDelegate> *delegate;

- (void)stopObserving;
- (void)applicationsDidInstall:(id)a0;
- (void)startObserving;
- (void)applicationInstallsDidChange:(id)a0;
- (void)applicationInstallsDidCancel:(id)a0;
- (void).cxx_destruct;
- (void)applicationInstallsArePrioritized:(id)a0 arePaused:(id)a1;
- (void)applicationInstallsDidPrioritize:(id)a0;

@end
