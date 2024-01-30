@class NSString, NSArray, NSDictionary, NSMutableDictionary, CSLPRFObservationHelper;

@interface CSLPRFLocalApplicationLibrary : NSObject <LSApplicationWorkspaceObserverProtocol, CSLPRFApplicationLibrary> {
    CSLPRFObservationHelper *_observationHelper;
    NSMutableDictionary *_lock_cachedApplications;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    BOOL _lock_observing;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) NSArray *allApplications;
@property (readonly, nonatomic) NSDictionary *allApplicationsDictionary;

- (id)applicationWithBundleIdentifier:(id)a0;
- (void)applicationInstallsDidStart:(id)a0;
- (void)applicationsDidInstall:(id)a0;
- (void)addObserver:(id)a0;
- (void)dealloc;
- (void)removeObserver:(id)a0;
- (id)init;
- (void)applicationsDidUninstall:(id)a0;
- (void).cxx_destruct;
- (void)allApplicationsWithCompletion:(id /* block */)a0;
- (void)applicationWithBundleIdentifier:(id)a0 completion:(id /* block */)a1;

@end
