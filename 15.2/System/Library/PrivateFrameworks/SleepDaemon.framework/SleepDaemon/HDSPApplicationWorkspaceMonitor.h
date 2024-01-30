@class NSString, HKSPObserverSet;

@interface HDSPApplicationWorkspaceMonitor : NSObject <LSApplicationWorkspaceObserverProtocol>

@property (readonly, nonatomic) HKSPObserverSet *observers;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)applicationsDidUninstall:(id)a0;
- (void)addObserver:(id)a0;
- (void)removeObserver:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (BOOL)isApplicationInstalled:(id)a0;

@end
