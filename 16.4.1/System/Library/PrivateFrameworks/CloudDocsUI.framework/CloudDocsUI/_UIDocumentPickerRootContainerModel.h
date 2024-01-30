@interface _UIDocumentPickerRootContainerModel : _UIDocumentPickerURLContainerModel {
    BOOL _isObservingContainers;
}

- (id)_containerListDidChange;
- (id)initWithURL:(id)a0 pickableTypes:(id)a1 mode:(unsigned long long)a2;
- (id)initWithPickableTypes:(id)a0 mode:(unsigned long long)a1;
- (void)startMonitoringChanges;

@end
