@class NSString, NSMutableDictionary, LSApplicationWorkspace, NSMutableSet, NSHashTable, NSMapTable;

@interface SBHSelectedApplicationDataSource : NSObject <LSApplicationWorkspaceObserverProtocol, SBHIconModelApplicationDataSource, BSDescriptionProviding> {
    NSMutableSet *_trackedApplicationBundleIdentifiers;
    NSMutableDictionary *_applications;
    NSMutableDictionary *_applicationPlaceholders;
    NSHashTable *_observers;
    NSMapTable *_installProgressBundleIdentifiers;
}

@property (retain, nonatomic) LSApplicationWorkspace *workspace;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)allApplicationsForIconModel:(id)a0;
- (id)applicationWithBundleIdentifier:(id)a0;
- (void)applicationsDidUninstall:(id)a0;
- (void)applicationsDidInstall:(id)a0;
- (id)descriptionBuilderWithMultilinePrefix:(id)a0;
- (void)removeIconModelApplicationDataSourceObserver:(id)a0;
- (void)applicationInstallsDidStart:(id)a0;
- (void)applicationInstallsDidChange:(id)a0;
- (id)succinctDescription;
- (void).cxx_destruct;
- (id)init;
- (id)descriptionWithMultilinePrefix:(id)a0;
- (id)succinctDescriptionBuilder;
- (void)uninstallApplicationWithBundleIdentifier:(id)a0 options:(unsigned long long)a1 completion:(id /* block */)a2;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (id)applicationPlaceholderWithBundleIdentifier:(id)a0;
- (void)dealloc;
- (id)iconModel:(id)a0 applicationWithBundleIdentifier:(id)a1;
- (void)addIconModelApplicationDataSourceObserver:(id)a0;
- (id)allApplicationPlaceholdersForIconModel:(id)a0;
- (void)uninstallApplicationWithBundleIdentifier:(id)a0 completion:(id /* block */)a1;
- (void)endObservingInstallProgress:(id)a0;
- (void)addApplicationsForBundleIdentifiers:(id)a0 forcePlaceholders:(BOOL)a1;
- (void)removeApplicationsForBundleIdentifiers:(id)a0;
- (void)endTrackingApplicationsWithBundleIdentifiers:(id)a0;
- (void)updateStateOfPlaceholder:(id)a0 withInstallState:(unsigned long long)a1 installPhase:(unsigned long long)a2 installProgress:(double)a3;
- (void)beginObservingInstallProgress:(id)a0;
- (void)updateStateOfPlaceholder:(id)a0 fromProgress:(id)a1;
- (void)beginTrackingApplicationsWithBundleIdentifiers:(id)a0;
- (void)endTrackingAllApplications;

@end
