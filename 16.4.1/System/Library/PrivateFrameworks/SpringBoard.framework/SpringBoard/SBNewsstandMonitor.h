@class NSString, NSArray;

@interface SBNewsstandMonitor : NSObject <FBProcessManagerObserver, FBProcessObserver> {
    NSArray *_deniedBundleIdentifiers;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;
+ (id)_deniedBundleIdentifiers;

- (void)processManager:(id)a0 didAddProcess:(id)a1;
- (void)process:(id)a0 stateDidChangeFromState:(id)a1 toState:(id)a2;
- (void)processManager:(id)a0 didRemoveProcess:(id)a1;
- (void)_handleBackgroundUpdateDenyListChange;
- (void)_addObserverForBackgroundUpdateDenyListChange;
- (id)init;
- (void).cxx_destruct;

@end
