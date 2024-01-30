@class NSMutableDictionary, NSArray, VCVoiceShortcutClient, NSString, NSObject, WFObservableArrayResult;
@protocol OS_dispatch_queue;

@interface AXSiriShortcutsManager : NSObject <WFObservableResultObserver, WFWorkflowRunnerClientDelegate> {
    NSObject<OS_dispatch_queue> *_queue;
    NSArray *_cachedShortcuts;
    WFObservableArrayResult *_observedWorkflows;
    NSMutableDictionary *_updateBlocks;
    int _contentProtectionNotifyToken;
}

@property (class, readonly, nonatomic) AXSiriShortcutsManager *sharedManager;

@property (readonly, nonatomic) unsigned long long source;
@property (retain, nonatomic) VCVoiceShortcutClient *shortcutClient;
@property (readonly, nonatomic) NSArray *shortcuts;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)shortcutsManagerForSource:(unsigned long long)a0;

- (id)initWithSource:(unsigned long long)a0;
- (void)workflowRunnerClient:(id)a0 didStartRunningWorkflowWithProgress:(id)a1;
- (void)workflowRunnerClient:(id)a0 didFinishRunningWorkflowWithOutput:(id)a1 error:(id)a2 cancelled:(BOOL)a3;
- (void).cxx_destruct;
- (void)_loadShortcuts;
- (void)_queue_loadShortcuts;
- (void)observableResultDidChange:(id)a0;
- (void)performShortcut:(id)a0;
- (id)registerShortcutsDidChangeBlock:(id /* block */)a0;
- (id)shortcutForIdentifier:(id)a0;
- (void)unregisterShortcutsDidChangeBlock:(id)a0;

@end
