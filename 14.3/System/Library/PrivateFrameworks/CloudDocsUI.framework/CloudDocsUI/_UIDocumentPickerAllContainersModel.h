@class NSArray, BRContainer;

@interface _UIDocumentPickerAllContainersModel : _UIDocumentPickerURLContainerModel {
    NSArray *_scopes;
    BRContainer *_sourceContainer;
}

- (void).cxx_destruct;
- (id)scopes;
- (id)displayTitle;
- (id)initWithURL:(id)a0 pickableTypes:(id)a1 mode:(unsigned long long)a2;
- (void)startMonitoringChanges;
- (BOOL)shouldShowTopLevelContainers;
- (id)_createObserver;
- (id)initWithFoldersForPickableTypes:(id)a0 mode:(unsigned long long)a1 sourceContainer:(id)a2;
- (void)updateScopes;

@end
