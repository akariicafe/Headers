@class NSString;

@interface _UIDocumentPickerSearchContainerModel : _UIDocumentPickerURLContainerModel

@property (copy, nonatomic) NSString *queryString;

- (void).cxx_destruct;
- (id)scopes;
- (id)displayTitle;
- (void)arrayController:(id)a0 modelChanged:(id)a1 differences:(id)a2;
- (id)initWithURL:(id)a0 pickableTypes:(id)a1 mode:(unsigned long long)a2;
- (id)initWithPickableTypes:(id)a0 mode:(unsigned long long)a1;
- (void)startMonitoringChanges;
- (void)_updateObserverForQuery;
- (BOOL)shouldShowTopLevelContainers;
- (id)_createObserver;

@end
