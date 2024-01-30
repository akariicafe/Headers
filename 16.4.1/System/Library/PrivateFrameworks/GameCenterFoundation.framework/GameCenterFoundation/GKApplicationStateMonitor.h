@class NSString, NSMutableSet, RBSProcessMonitor;
@protocol LSApplicationWorkspaceObserverProtocol;

@interface GKApplicationStateMonitor : NSObject <LSApplicationWorkspaceObserverProtocol>

@property (retain, nonatomic) RBSProcessMonitor *processMonitor;
@property (retain, nonatomic) NSMutableSet *interestedBundleIDs;
@property (copy, nonatomic) id /* block */ handler;
@property (weak, nonatomic) id<LSApplicationWorkspaceObserverProtocol> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)startObservingStateChangesForBundleID:(id)a0;
- (void)updateStateObservation;
- (void)stopObservingStateChangesForBundleID:(id)a0;
- (void)dealloc;
- (void)applicationsWillUninstall:(id)a0;
- (void)startObservingApplicationWorkspaceChanges;
- (id)init;
- (void)applicationsDidUninstall:(id)a0;
- (void).cxx_destruct;

@end
