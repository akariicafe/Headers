@class NSString;

@interface _UIDocumentPickerSubfoldersContainerModel : _UIDocumentPickerURLContainerModel {
    NSString *_containerID;
}

- (void).cxx_destruct;
- (id)scopes;
- (id)displayTitle;
- (id)initWithURL:(id)a0 pickableTypes:(id)a1 mode:(unsigned long long)a2;
- (void)startMonitoringChanges;
- (BOOL)shouldShowTopLevelContainers;
- (id)_createObserver;
- (id)initWithPickableTypes:(id)a0 container:(id)a1;

@end
