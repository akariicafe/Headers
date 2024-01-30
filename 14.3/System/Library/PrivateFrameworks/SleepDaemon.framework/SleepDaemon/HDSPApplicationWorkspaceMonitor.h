@class NSString, HKSPObserverSet;

@interface HDSPApplicationWorkspaceMonitor : NSObject <LSApplicationWorkspaceObserverProtocol>

@property (readonly, nonatomic) HKSPObserverSet *observers;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void).cxx_destruct;
- (void)removeObserver:(id)a0;
- (void)addObserver:(id)a0;
- (void)applicationsDidUninstall:(id)a0;
- (BOOL)isApplicationInstalled:(id)a0;

@end
