@class FBSApplicationLibrary, NSString, NSMutableDictionary, FBSALOToken, NSHashTable;

@interface SBHApplicationDataSource : NSObject <SBHIconModelApplicationDataSource> {
    NSMutableDictionary *_applications;
    NSMutableDictionary *_applicationPlaceholders;
    NSHashTable *_observers;
}

@property (readonly, nonatomic) FBSApplicationLibrary *appLibrary;
@property (readonly, nonatomic) FBSALOToken *addApplicationsObservationToken;
@property (readonly, nonatomic) FBSALOToken *replaceApplicationsObservationToken;
@property (readonly, nonatomic) FBSALOToken *updateApplicationsObservationToken;
@property (readonly, nonatomic) FBSALOToken *removeApplicationsObservationToken;
@property (readonly, nonatomic) FBSALOToken *demoteApplicationsObservationToken;
@property (readonly, nonatomic) FBSALOToken *addPlaceholdersObservationToken;
@property (readonly, nonatomic) FBSALOToken *removedPlaceholdersObservationToken;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)allApplicationsForIconModel:(id)a0;
- (id)applicationWithBundleIdentifier:(id)a0;
- (id)applicationPlaceholdersForFrontBoardPlaceholders:(id)a0;
- (void)removeIconModelApplicationDataSourceObserver:(id)a0;
- (id)initWithOptions:(unsigned long long)a0;
- (void)_didReplaceApplicationsInfo:(id)a0;
- (id)applicationsForApplicationsInfo:(id)a0;
- (void).cxx_destruct;
- (void)_didAddApplicationsInfo:(id)a0;
- (id)init;
- (void)uninstallApplicationWithBundleIdentifier:(id)a0 options:(unsigned long long)a1 completion:(id /* block */)a2;
- (id)applicationPlaceholderWithBundleIdentifier:(id)a0;
- (void)dealloc;
- (id)iconModel:(id)a0 applicationWithBundleIdentifier:(id)a1;
- (void)addIconModelApplicationDataSourceObserver:(id)a0;
- (id)allApplicationPlaceholdersForIconModel:(id)a0;
- (void)_didRemoveApplicationsInfo:(id)a0;
- (void)uninstallApplicationWithBundleIdentifier:(id)a0 completion:(id /* block */)a1;
- (void)_didRemovePlaceholders:(id)a0;
- (void)_didAddPlaceholders:(id)a0;

@end
