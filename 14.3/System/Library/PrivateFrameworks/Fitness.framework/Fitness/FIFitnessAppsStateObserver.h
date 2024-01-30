@class NSString;
@protocol FIFitnessAppsStateObserverDelegate;

@interface FIFitnessAppsStateObserver : NSObject <LSApplicationWorkspaceObserverProtocol> {
    id<FIFitnessAppsStateObserverDelegate> _delegate;
    long long _fitnessAppsState;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)dealloc;
- (void)applicationStateDidChange:(id)a0;
- (id)initWithDelegate:(id)a0;
- (BOOL)areFitnessAppsRestricted;
- (void)_cacheInitialFitnessAppsRestrictedState;
- (id)_fitnessAppBundleIdentifiers;
- (void)_cacheCurrentFitnessAppsRestrictedStateWithProxies:(id)a0 initialLoad:(BOOL)a1;

@end
